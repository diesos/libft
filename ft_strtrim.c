/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:38:33 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/25 23:34:37 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char const c, char const *set)
{
	size_t	i;

	if (!set)
		return (NULL);
	i = -1;
	if (!set)
		return (-1);
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = -1;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && check_char(s1[start], set))
		start++;
	while ((end > start) && check_char(s1[end - 1], set))
		end--;
	trim = malloc(sizeof(char) * (end - start) + 1);
	if (!trim)
		return (NULL);
	while (end > start)
	{
		trim[++i] = s1[start];
		start++;
	}
	trim[++i] = '\0';
	return (trim);
}
// int	main(void)
// {
// 	char	str[] = "    Hello World       ";
// 	char	set[] = " ";
// 	char	str2[] = "--Hello-Bg---";
// 	char	set2[] = "-";
// 	char	str3[10];
// 	char	set3[] = "-";

// 	printf("%s\n", ft_strtrim(str, set));
// 	printf("%s\n", ft_strtrim(str2, set2));
// 	printf("%s\n", ft_strtrim(str3, set3));
// 	return (0);
// }
