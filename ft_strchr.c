/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:19:45 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/06 19:24:46 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	if (!ptr)
		return (NULL);
	i = 0;
	while (ptr)
	{
		if (*ptr == c)
			return (&(*ptr));
		ptr++;
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
