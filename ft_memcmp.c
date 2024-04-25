/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:27:04 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/25 23:25:12 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
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
