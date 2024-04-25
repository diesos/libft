/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:27:18 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/25 23:30:53 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	dest_len;

	if (!s1 || !s2)
		return (NULL);
	dest_len = ft_strlen(s1);
	if (n <= dest_len)
		return (n + ft_strlen(s2));
	ft_strlcpy(s1 + dest_len, s2, n - dest_len);
	return (dest_len + ft_strlen(s2));
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
