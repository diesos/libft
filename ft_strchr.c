/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:19:45 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/25 23:28:38 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
		return (ft_memchr(s, c, ft_strlen(s) + 1));
	else
		return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*str2;
// 	int		c;

// 	str = NULL;
// 	str2 = "Hello";
// 	c = 'l';
// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", ft_strchr(str2, c));
// 	printf("Real : %s\n", strchr(str, c));
// 	printf("Real :%s\n", strchr(str2, c));
// 	return (0);
// }
