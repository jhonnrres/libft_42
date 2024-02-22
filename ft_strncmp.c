/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:12:24 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/31 15:12:19 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	dif;

	i = 0;
	dif = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (dif == 0) && (i < n))
	{
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if ((dif == 0) && (i < n))
		dif = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (dif);
}
/*int main(void)
{
    char str1[] = "Hello, baby!";
    char str2[] = "Hello, is me!";
    int c = 5;

    int result = ft_strncmp(str1, str2, c);

    if (result < 0)
        printf(" %d letras de s1 son menores que las de s2.\n", c);

    else if (result > 0)
        printf("%d letras de s1 son mayores que las de s2.\n", c);
    else
        printf("Las primeras %d letras de s1 son iguales a las de s2.\n", c);
    return 0;
}*/
