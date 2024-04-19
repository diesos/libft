/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:00:14 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/19 16:22:34 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	token_counter(char const *s, char set)
{
	size_t	i;
	size_t	buffer;
	size_t	token;

	token = 0;
	buffer = 1;
	while (*s)
	{
		buffer = 1;
		while (*s && *s == set)
			++s;
		while (*s && *s != set)
		{
			if (buffer)
			{
				buffer = 0;
				token++;
			}
			++s;
		}
	}
	return (token);
}

int	malloc_free(char **str_token, int pos, size_t buffer)
{
	int	i;

	i = 0;
	str_token[pos] = malloc(buffer);
	if (!str_token[pos])
	{
		while (i < pos)
		{
			free(str_token[i++]);
		}
		free(str_token);
		return (1);
	}
	return (0);
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
			if (malloc_free(str_token, i, len + 1))
				return (1);
		}
		ft_strlcpy(str_token[i], s - len, len + 1);
		++i;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	token;
	char	**str_token;

	if (!s)
		return (NULL);
	token = 0;
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
// 	char	*s;
// 	char	**str;

// 	s = "---Hello-World-How-Are-You?--de";
// 	str = ft_split(s, '-');
// 	while (*str)
// 		printf("%s\n", *str++);
// }
