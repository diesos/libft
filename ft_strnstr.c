/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:38:50 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/08 20:19:54 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (j == needle_len - 1)
				return ((char *)&haystack[i]);
			j++;
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
// 	char	*str2;

// 	str = "Foo Bar Foo";
// 	str2 = "Bar";
// 	printf("Len of haystack : %zu\n", ft_strlen(str));
// 	printf("%s\n", ft_strnstr(str, str2, ft_strlen(str)));
// 	printf("%s\n", strnstr(str, str2, ft_strlen(str)));
// 	return (0);
// }
