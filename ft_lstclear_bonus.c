/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:58:35 by jhtorres          #+#    #+#             */
/*   Updated: 2024/02/15 19:32:09 by jhtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l_node;
	t_list	*aux;

	aux = *lst;
	if (!aux)
		return ;
	while (aux)
	{
		l_node = aux -> next;
		del(aux -> content);
		free(aux);
		aux = l_node;
	}
	*lst = NULL;
}
