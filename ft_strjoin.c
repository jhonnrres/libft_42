/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:13:05 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:30:59 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	size_t	len_s1;
	size_t	len_s2;
	size_t	result;

	if (!s1 && !s2)
		return (NULL);
	if (s1 != NULL)
		len_s1 = ft_strlen(s1);
	else
		len_s1 = 0;
	if (s2 != NULL)
		len_s2 = ft_strlen(s2);
	else
		len_s2 = 0;
	result = len_s1 + len_s2;
	output = (char *)malloc(result + 1);
	if (output == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_memcpy(output, s1, len_s1);
	if (s2 != NULL)
		ft_memcpy(output + len_s1, s2, len_s2);
	output[result] = '\0';
	return (output);
}
/*int	main(void)
{
	const char *s1 = "Baby ";
	const char *s2 = "Hello";
	
	char *result = ft_strjoin(s1, s2);
	if (result != NULL)
		printf("%s\n", result);
		free (result);
	else
		printf("Fail");
	return 0;
}*/
