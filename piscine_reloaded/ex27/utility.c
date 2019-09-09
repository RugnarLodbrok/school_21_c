/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:33:05 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/05 19:33:34 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}

int	display_err(char *str, int return_value)
{
	write(2, str, ft_strlen(str));
	return (return_value);
}
