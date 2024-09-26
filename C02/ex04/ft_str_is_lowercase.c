/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:53:57 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/10 15:57:48 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	is_lowercase;
	char	a[] = "gjyhtTRH352465FRgdf";

	is_lowercase = ft_str_is_lowercase(a);
	printf("%d\n", is_lowercase);
	return (0);
}*/
