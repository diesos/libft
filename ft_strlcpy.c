/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:55:33 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/25 23:31:15 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;

	if (!dst || !src)
		return (NULL);
	len_src = ft_strlen(src);
	if (len_src + 1 < dstsize)
		ft_memcpy(dst, src, len_src + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (len_src);
}
// int	main(void)
// {
// 	char	str[3] = "";
// 	char	*str2;

// 	str2 = "World";
// 	printf("Original str = %s\n", str);
// 	printf("%zu\n", ft_strlcpy(str, str2, 3));
// 	printf("After str = %s\n", str);
// 	return (0);
// }
