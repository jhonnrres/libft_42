/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:47:16 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/14 18:39:06 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*outsub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	outsub = (char *)malloc((len + 1) * sizeof(char));
	if (outsub == NULL)
		return (NULL);
	ft_memcpy(outsub, s + start, len + 1);
	outsub[len] = '\0';
	return (outsub);
}
/*int main(void)
{
    const char *original = "Hello, world!";
    char *substring = ft_substr(original, 13, 5);

    if (substring != NULL)
    {
        printf("Substring: %s\n", substring);
        free(substring);
    }
    else
    {
        printf("Error al obtener la subcadena.\n");
    }
	return 0;
}*/
