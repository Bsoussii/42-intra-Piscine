/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:40:14 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/09 13:10:01 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 25;
	b = 6;
	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d, \ndiv : %d, mod : %d", a, b, div, mod);
}
