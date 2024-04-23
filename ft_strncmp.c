/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:28:18 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 14:22:44 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	s1_len;
	size_t	s2_len;

	len = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len > s2_len)
		len = s2_len + 1;
	else
		len = s1_len + 1;
	if (n < len)
		len = n;
	return (ft_memcmp(s1, s2, len));
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*str2;

// 	str = "Helld";
// 	str2 = "Horld";
// 	printf("%d\n", ft_strncmp(str, str2, 5));
// 	printf("%d\n", strncmp(str, str2, 5));
// 	return (0);
// }
