/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:53:57 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/10 17:55:48 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	is_printable;
	char	a[] = "ØøǾǿ";

	is_printable = ft_str_is_printable(a);
	printf("%d\n", is_printable);
	return (0);
}*/
