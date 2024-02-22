/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:09:21 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 15:45:43 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> 

void	ft_putnbr_fd(int n, int fd)
{
	long int	copy;
	char		c;

	copy = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		copy = -1;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10 * copy, fd);
	}
	c = '0' + n % 10 * copy;
	ft_putchar_fd(c, fd);
}
/*int main(void)
{
    int num = -12345;
    ft_putnbr_fd(num, STDOUT_FILENO); 

    return (0); 
}*/
