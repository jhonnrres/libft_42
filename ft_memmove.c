/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:43:40 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/29 20:36:50 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;

	if (!dest && !src)
		return (NULL);
	c_src = (unsigned char *)src;
	c_dest = (unsigned char *)dest;
	if (c_dest < c_src)
	{
		while (n--)
			*c_dest++ = *c_src++;
	}
	else
	{
		c_dest += n;
		c_src += n;
		while (n--)
			*(--c_dest) = *(--c_src);
	}
	return (dest);
}
/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char dest[100];
		ft_memmove(dest, argv[2], 3);
		dest[3] = '\0';
		printf("%s\n", dest);
	}
	return 0;
}*/
