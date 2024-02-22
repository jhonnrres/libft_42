/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:55:01 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/13 20:28:54 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sdup;
	int		i;

	i = 0;
	sdup = (char *)malloc(ft_strlen(s1) + 1);
	if (sdup == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		sdup[i] = s1[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
/*int	main(void)
{
	const char *s1 = "Baby Hello";
	char *sdup = ft_strdup(s1);

	if (sdup != NULL)
	{	printf("%s\n", sdup);
		free(sdup);
	}
	else
		printf ("ERROR");
	return (0);
}*/
