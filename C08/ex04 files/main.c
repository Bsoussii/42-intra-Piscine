/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:26:48 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/23 21:27:22 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

int	main()
{
	int	i = 0;
	int	count = 3;
	char	*arr[] = ("hello", "MF");
	t_stock_str *result;
	result = ft_strs_to+tab(count, arr);
	while (i < count)
	{
		printf("%s\n", result[i].copy);
		printf("%d\n", result[i].size);
		printf("%s\n", result[i].str);
		i++;
	}
	free(result);
	return (0);
}
