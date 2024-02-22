/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:01:55 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/15 18:11:16 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*l_node;

	l_node = lst;
	if (lst != 0)
	{
		while (l_node -> next != 0)
			l_node = l_node -> next;
	}
	return (l_node);
}
