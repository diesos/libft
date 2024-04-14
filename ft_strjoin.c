/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:41:20 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/14 17:28:11 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char const *)s2));
	if (!s2)
		return (ft_strdup((char const *)s1));
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (s1[++i])
		ptr[i] = s1[i];
	j = -1;
	while (s2[++j])
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	s1[] = "Hello";
// 	char	s2[] = "World";

// 	printf("%zu\n", ft_strlen(s1));
// 	printf("%zu\n", ft_strlen(s2));
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }
