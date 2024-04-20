/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:47:11 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/21 00:20:05 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	size_t count;

	count = 0;
	while (lst)
	{
		count++;
		if (!lst->next)
			break;
		else
			lst = lst->next;
	}
	return (count);
}
