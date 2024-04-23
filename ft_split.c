/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:00:14 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 12:11:21 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	token_counter(char const *s, char set)
{
	size_t	token;

	if (s == NULL || *s == '\0')
		return (0);
	token = 0;
	while (*s)
	{
		while (*s && *s == set)
			++s;
		if (*s == '\0')
			break ;
		if (*s)
			token++;
		while (*s && *s != set)
			++s;
	}
	printf("Total Token : %zu\n", token);
	return (token);
}

int	malloc_split(char **str_token, char const *s, char set)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == set)
			++s;
		while (*s && *s != set)
		{
			++len;
			++s;
		}
		if (len)
		{
			str_token[i] = malloc((len + 1) * sizeof(char));
			if (!str_token[i])
				return (1);
			ft_strlcpy(str_token[i++], s - len, len + 1);
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	token;
	char	**str_token;

	if (!s)
		return (NULL);
	token = token_counter(s, c);
	str_token = malloc(sizeof(char *) * (token + 1));
	if (!str_token)
		return (NULL);
	str_token[token] = NULL;
	if (malloc_split(str_token, s, c))
		return (NULL);
	return (str_token);
}

// int	main(void)
// {
// 	char	*string;
// 	char	**expected;
// 	char	**result;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	string = "      split  for   me  !       ";
// 	while (result[i])
// 	for (; i >= j; j++)
// 	{
// 		printf("%s\n", result[j]);
// 	}
// 	exit(0);
// }
