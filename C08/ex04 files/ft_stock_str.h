/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoussi <bsoussi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:38:39 by bsoussi           #+#    #+#             */
/*   Updated: 2024/09/23 20:38:55 by bsoussi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H


#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int	ft_strlen(char *str);
typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
