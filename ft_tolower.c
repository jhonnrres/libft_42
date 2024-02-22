/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:29:05 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:26:56 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c +32);
	}
	return (c);
}
/*int	main(void)
{
	char str[] = "BABY Hello";
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("%s\n", str);
	return (0);
}*/
