/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:29:35 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/24 16:36:26 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	result;
	size_t	sign;
	char	*ptr;

	ptr = (char *)str;
	sign = 1;
	i = 0;
	result = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = result * 10 + ptr[i++] - '0';
		if (result > 9223372036854775807)
			return (check_overflow(sign));
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*num;
// 	char	*num2;
// 	char	*num3;
// 	int		i;

// 	i = 0;
// 	num = "9223372036854775810";
// 	num2 = "9223372036854775803";
// 	num3 = "              44";
// 	printf("Real atoi :%d | My atoi : %d\n ", atoi(num), ft_atoi(num));
// 	printf("Real atoi :%d | My atoi : %d\n", atoi(num2), ft_atoi(num2));
// 	printf("Real atoi :%d | My atoi : %d\n", atoi(num3), ft_atoi(num3));
// 	while (num[i])
// 	{
// 		printf("%c", num[i]);
// 		i++;
// 	}
// }
