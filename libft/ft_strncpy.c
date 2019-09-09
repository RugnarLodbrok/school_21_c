/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:36:52 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/06 16:39:07 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *d;

	d = dst;
	while (len--)
		if (!(*d++ = *src++))
			break;
	return (dst);
}
