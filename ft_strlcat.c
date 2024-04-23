/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:27:18 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 13:49:55 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dest_len;

	dest_len = ft_strlen(dst);
	if (dstsize <= dest_len)
		return (dstsize + ft_strlen(src));
	ft_strlcpy(dst + dest_len, src, dstsize - dest_len);
	return (dest_len + ft_strlen(src));
}

// int	main(void)
// {
// 	char	str[100] = "Hello";
// 	char	*str2;
// 	char	*str3;

// 	str2 = "World";
// 	printf("%s\n", str);
// 	ft_strlcat(str, str2, 11);
// 	printf("%s\n", str);
// 	return (0);
// }
