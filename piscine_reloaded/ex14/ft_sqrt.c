/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:14:59 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/05 15:17:06 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int r;
	int div;
	int avg;

	if (nb < 1)
		return (0);
	r = 1;
	while (1)
	{
		div = nb / r;
		avg = (r + div) / 2;
		if (avg == r || div == avg)
			break ;
		r = avg;
	}
	if (avg * avg == nb)
		return (avg);
	return (0);
}
