/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:02:36 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:38:57 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if ((!dst) && size == 0)
		return (0);
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] != '\0' && (dst_len + i < size -1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (size > 0)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main (void)
{
	char dest[20] ="Hello";
	char src[] ="Baby";
	size_t dest_s = sizeof(dest);

	size_t result = ft_strlcat(dest, src, dest_s);
	printf("%s\n ", dest);
	printf("%zu", result);
	return (0);
}*/
