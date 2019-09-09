/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:53:18 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/05 16:56:58 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*ptr;

	if (min >= max)
		return (0);
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (0);
	ptr = ret;
	while (min < max)
		*ptr++ = min++;
	return (ret);
}
