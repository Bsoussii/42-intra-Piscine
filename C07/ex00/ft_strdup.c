/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:05:48 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/23 13:28:29 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i] != 0)
		dup[i] = src[i];
	i++;
	dup[i] = 0;
	return (dup);
}

int	main(void)
{
	char	str[] = " ";
	int	length = ft_strlen(str);

	printf("Length of the string: %d\n", length);
	char	*duplicate = ft_strdup(str);

	if (duplicate != NULL)
	{
		printf("Original String: %s\n", str);
		printf("Duplicated String: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
	return (0);
}
