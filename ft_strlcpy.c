/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:55:33 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/22 15:44:59 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	if (len != 0 && dstsize > 0)
	{
		while (i < dstsize - 1)
		{
			if (src[i] == '\0')
				break ;
			else
			{
				dst[i] = src[i];
				i++;
			}
		}
		dst[i] = '\0';
		return (i);
	}
	else
		return (0);
}
