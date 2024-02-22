/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:19:53 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/24 02:20:15 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_isdigit('1'));
}*/
