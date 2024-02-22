/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:59:49 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:42:27 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	char_c;
	char	*str;

	char_c = (unsigned char)c;
	str = (char *)(unsigned char *)s;
	while (n--)
	{
		if (*str == char_c)
			return (str);
		str++;
	}
	return (NULL);
}
/*int main(void)
{
    char buffer[] = "Hello, Baby";
    int target_byte = 'o'; 
    size_t buffer_size = sizeof(buffer);

    void *result = ft_memchr(buffer, target_byte, buffer_size);

    if (result != NULL)
    {
        size_t position = (size_t)(result - (void *)buffer);
        printf("the byte '%c' is in p %zu of buffer.\n", target_byte, position);
    }
    else
    {
        printf("the byte '%c' it was not found.\n", target_byte);
    }

    return 0;
}*/
/*is used to find the first occurrence of a specific byte in a region of memory,
 and returns a pointer to that location in memory.*/
