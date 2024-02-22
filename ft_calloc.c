/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:48:10 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:28:36 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}
/*int	main(void)
{
	size_t size = 5;
	int *arr = (int *)ft_calloc(size, sizeof(int));
	
	if (arr != NULL)
	{
		size_t i = 0; 
		
		while(i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		free(arr);
	}
	else
		printf("ERROR");
	return 0;
}*/
