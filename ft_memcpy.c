/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:47:30 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 00:20:35 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
