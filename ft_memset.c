/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:58:56 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/04 12:43:23 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr2;

	ptr2 = ptr;
	i = 0;
	if (ptr)
	{
		while (i < len)
		{
			ptr2[i] = c;
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
