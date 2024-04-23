/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:32:52 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/23 21:47:57 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!*s || !*f)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
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
