/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:31:46 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:30:33 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write (fd, s, 1);
			s++;
		}
	}
}
/*int	main (void)
{
	char *str = "Hello BAby";
	int fd = 1;

	ft_putstr_fd(str, fd);
	return (0);	
}*/
