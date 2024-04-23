/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 19:26:47 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 14:01:12 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while ((char)s[i])
		i++;
	while (i >= 0)
	{
		if ((char)s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
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
// 	c = 'b';
// 	printf("%s\n", ft_strrchr(str, c));
// 	printf("%s\n", strrchr(str, c));
// 	return (0);
// }
