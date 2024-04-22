/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:37:17 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/22 23:44:09 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[++i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	f(unsigned int i, char *c)
// {
// 	*c = *c + 32; // Convert uppercase letters to lowercase
// }

// int	main(void)
// {
// 	char	input[] = "HELLO";

// 	ft_striteri(input, &f);
// 	printf("Transformed string: %s\n", input);
// 	return (0);
// }
