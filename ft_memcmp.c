/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:08:38 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/31 16:19:37 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
/*int main(void)
{
    char block1[] = "Hello is me";
    char block2[] = "Hello baby";
    size_t n = 5;

    int result = ft_memcmp(block1, block2, n);
    
    if (result == 0)
        printf("the block of memory is equal.\n");
    else
        printf("the block of memory aren't equal.\n");

    return 0;
}*/
