/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:47:34 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:28:07 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	len;
	long	val_a;
	char	*result;

	len = ft_num_len(n);
	val_a = n;
	if (n < 0)
		val_a *= -1;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = 0;
	if (val_a == 0)
		result[0] = '0';
	else
	{
		while (len--, val_a != 0)
		{
			result[len] = (val_a % 10) + '0';
			val_a = (val_a - (val_a % 10)) / 10;
		}
		if (n < 0)
			result[len] = '-';
	}
	return (result);
}
/*int main()
{
    char *str = ft_itoa(-2147483648);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }
    return 0;
}*/
