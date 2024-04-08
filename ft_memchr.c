/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:02:10 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/08 18:25:50 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	if (!ptr || n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char *)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
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
