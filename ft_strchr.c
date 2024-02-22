/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:36:56 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:27:42 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char) c == '\0')
		return ((char *)str);
	return (NULL);
}
/*int main(void)
{
    char *str = "HELLO BABY";
    int c = 'L';
    char *result = ft_strchr(str, c);
    if (result != NULL)
        printf("'%c' está enla posición %ld en la cadena.\n", c, result - str);
    else
        printf("'%c' no se encontró en la cadena.\n", c);
    return 0;
}*/
