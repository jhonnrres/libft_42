/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:19:12 by jhtorres          #+#    #+#             */
/*   Updated: 2024/01/29 11:00:20 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') \
			|| (str >= '0' && str <= '9'))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isalnum('6'));
	return (0);
}*/
