/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:27:18 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 00:19:10 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	result;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	result = 0;
	if (dstsize <= len_dst)
		result = len_src + dstsize;
	else
		result = len_src + len_src;
	i = 0;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (result);
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
