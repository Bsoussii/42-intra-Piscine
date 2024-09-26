/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:10:47 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/09 14:12:40 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	if (b != 0)
	{
		int	div;
		int	mod;

		div = *a;
		mod = *b;
		*a = div / mod;
		*b = div % mod;
	}
}

int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 5;

	printf("a : %d, b : %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a : %d, b : %d\n", a, b);
	return(0);
}
