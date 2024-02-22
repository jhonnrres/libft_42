/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:38:25 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:30:46 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_splits(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	ft_sub_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free_split(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split_aux(const char *s, char c, int splits)
{
	int		i;
	char	**result;
	size_t	len;

	result = (char **)malloc((splits + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < splits)
	{
		while (*s == c)
			s++;
		len = ft_sub_len(s, c);
		result[i] = ft_substr(s, 0, len);
		if (!result[i])
		{
			ft_free_split(result, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**splits;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_splits(s, c);
	splits = (ft_split_aux(s, c, count));
	return (splits);
}

/*int main(void)
{
    const char *str = "Hello,world,this,is,a,test";
    char **split = ft_split(str, ',');

    if (split != NULL)
    {
        int i = 0;
        while (split[i] != NULL)
        {
            printf("%s\n", split[i]);
            i++;
        }
        i = 0;
        while (split[i] != NULL)
        {
            free(split[i]);
            i++;
        }
        free(split);
    }
    else
    {
        printf("Error: The function ft_split bring back NULL.\n");
    }
    return 0;
}*/
