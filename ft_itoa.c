/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:22:02 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/19 16:23:20 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_nb(int n)
{
	unsigned long	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned long	len;
	long			tmp;
	char			*result;

	len = len_nb(n);
	tmp = n;
	if (n < 0)
		tmp *= -1;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = 0;
	if (tmp == 0)
		result[0] = '0';
	else
	{
		while (tmp != 0)
		{
			result[--len] = (tmp % 10) + '0';
			tmp = ((tmp - (tmp % 10)) / 10);
		}
		if (n < 0)
			result[--len] = '-';
	}
	return (result);
}
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(5644455));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-566));
// }
