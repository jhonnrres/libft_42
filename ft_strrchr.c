/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:24:37 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/31 20:21:54 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = (char *)str;
		str++;
	}
	if ((char) c == '\0')
		return ((char *) str);
	return (last);
}
/*int main(void)
{
    const char *str = "HELLO BABY";
    int c = 'L';
    char *result = ft_strrchr(str, c);
    if (result != NULL)
        printf("'%c' its in posisition %ld in strng.\n", c, result - str);
    else
        printf("'%c' its was not found.\n", c);
    return 0;
}*/
