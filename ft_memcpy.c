/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:35:23 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:29:38 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;

	if (!dest && !src)
		return (NULL);
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	while (n--)
	{
		*c_dest++ = *c_src++;
	}
	return (dest);
}
/*int	main(void)
{
	char src[] = "Baby Hello";
	char dest[20];
	size_t n = sizeof(src);
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
}*/

/*This ft used to copy a block of memory from a source location (src) 
to a destination location (destination)*/
