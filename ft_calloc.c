/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:26:18 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/10 23:29:32 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (size > 0 && count > 0)
	{
		ptr = malloc(size * count);
		ft_bzero(ptr, size * count);
		return ((char *)ptr);
	}
	return (NULL);
}
