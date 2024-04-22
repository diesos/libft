/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:47:30 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/22 10:57:32 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)dst;
	while (i < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	return (dst);
}
