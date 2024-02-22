/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:10:47 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:31:32 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*int main(void)
{
    const char *input = "   Hello, world!   ";
    const char *set = " ";
    char *trimmed = ft_strtrim(input, set);

    if (trimmed)
    {
        printf("string original: \"%s\"\n", input);
        printf("string cut: \"%s\"\n", trimmed);
        free(trimmed);
    }
    else
        printf("Error cut the string.\n");

    return 0;
}*/
