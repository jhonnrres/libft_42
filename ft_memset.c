/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:09:56 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/29 19:37:26 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char str [10] = "Hola";
	int i = 0;
	ft_memset(str, '5', sizeof(str));
	
	while(i < sizeof (str))
	{
		i++;
		printf("%c", str[i]);
	}
	return (0);
}*/
