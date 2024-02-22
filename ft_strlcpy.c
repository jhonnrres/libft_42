/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:38:11 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/15 20:47:03 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
/*int	main(void)
{
	char src[] = "Hello baby";
	char dest[15];
	
	size_t len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Original: %s\n", src);
    printf("Copy: %s\n", dest);
    printf("Lenght: %zu\n", len);

    return 0;
}*/
/*This function is responsible for copying a source string (src) to 
a destination string (dest) with a maximum limit of characters to copy 
(size - 1) and making sure that the terminating null character is added 
to the end of the string of destiny*/
