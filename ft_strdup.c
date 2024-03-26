/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:08:01 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/28 09:30:28 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (!dest)
		return (dest);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_strcpy(str, src));
}

/* #include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"),
			ft_strdup("Test")) == 0 ? "OK" : "Fail");
	printf("%s\n", strcmp(strdup("1esg"),
			ft_strdup("1esg")) == 0 ? "OK" : "Fail");
} */
