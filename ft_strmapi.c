/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:32:52 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 22:47:07 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	f(unsigned int i, char c)
// {
// 	return (c + 32);
// }
// int	main(void)
// {
// 	char	input[] = "HELLO";
// 	char	*result;

// 	result = ft_strmapi(input, &f);
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	printf("Original string: %s\n", input);
// 	printf("Transformed string: %s\n", result);
// 	free(result);
// 	return (0);
// }
