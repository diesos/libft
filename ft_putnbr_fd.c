/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:37:04 by omeoztur          #+#    #+#             */
/*   Updated: 2024/04/22 22:33:06 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	if (n == 2147483647)
	{
		ptr = "2147483647";
		ft_putstr_fd(ptr, fd);
		free(ptr);
	}
	else if (n == -2147483648)
	{
		ptr = "-2147483648";
		ft_putstr_fd(ptr, fd);
		free(ptr);
	}
	ptr = ft_itoa(n);
	ft_putstr_fd(ptr, fd);
	free(ptr);
}
