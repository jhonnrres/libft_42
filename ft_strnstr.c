/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:20:26 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/14 17:47:53 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i] == needle[j] && i < len && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i++;
		i = i - j;
	}
	return (NULL);
}

/*int main(void)
{
    const char *haystack = "Baby Hello is me";
    const char *needle = "is";

    char *result = ft_strnstr(haystack, needle, 20);

    if (result != NULL)
        printf("Substring: %s\n", result);
    else
    	printf("Substring it not been found.\n");
    return 0;
}*/
