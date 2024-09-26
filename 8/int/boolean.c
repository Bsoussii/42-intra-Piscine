/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boolean.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:23:58 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/25 15:24:58 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

# define EVEN(nbr) (nbr % 2 == 0)

int main() {
    int num1 = 50;

    if (EVEN(num1)) {
        printf("%d is even.\n", num1);
    } else {
        printf("%d is odd.\n", num1);
    }
    return 0;
}
