/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:02:10 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 14:11:30 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s)
	{
		while (n--)
		{
			if (*(unsigned char *)s == (unsigned char)c)
				return ((unsigned char *)s);
			s++;
		}
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	int		c;

// 	str = "Baby";
// 	c = 'a';
// 	printf("%p\n", ft_memchr(str, c, 4));
// 	printf("%p\n", memchr(str, c, 4));
// 	return (0);
// }
