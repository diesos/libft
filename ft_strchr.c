/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:19:45 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 14:08:42 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((char)s[i])
	{
		if ((char)s[i] == (char)c)
			return (&((char *)s)[i]);
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

// 	str = "Hello";
// 	c = 'l';
// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str, c));
// 	return (0);
// }
