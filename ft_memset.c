/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:58:56 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/09 12:50:23 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (ptr)
	{
		while (i < len)
		{
			((unsigned char *)ptr)[i] = (unsigned char)c;
			i++;
		}
		return ((unsigned char *)ptr);
	}
	return (NULL);
}
