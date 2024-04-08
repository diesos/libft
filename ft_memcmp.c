/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:27:04 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/08 18:38:04 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!str1 || !str2)
		return (1);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*c;

// 	str = "Bbby";
// 	c = "Baby";
// 	printf("Real function : %d\n", ft_memcmp(str, c, 4));
// 	printf("My function : %d\n", memcmp(str, c, 4));
// 	printf("Zero condition :\n");
// 	printf("%d\n", memcmp(str, c, 0));
// 	printf("%d\n", memcmp(str, c, 0));
// 	return (0);
// }
