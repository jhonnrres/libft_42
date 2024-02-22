/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:01:32 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:28:25 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * j);
}
/*int	main(void)
{
	const char	*mine = "45878";
	
	int min = ft_atoi(mine);
	printf("mine: %d\n", min);
	
	return (0);
}*/
