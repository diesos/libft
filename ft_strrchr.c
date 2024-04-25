/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:26:47 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/25 23:33:04 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	if (!s)
		return (NULL);
	i = (int)ft_strlen(s);
	ptr = (char *)s;
	while (i >= 0)
	{
		if (s[i] == c && c == '\0')
		{
			ptr = (char *)(s + i);
			return (ptr);
		}
		if (s[i] == (unsigned char)c)
		{
			ptr = (char *)s + i;
			return (ptr);
		}
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	int		c;

// 	str = "Baby";
// 	c = 'b';
// 	printf("%s\n", ft_strrchr(str, c));
// 	printf("%s\n", strrchr(str, c));
// 	return (0);
// }
