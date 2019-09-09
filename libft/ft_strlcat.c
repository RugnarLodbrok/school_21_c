/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:04:10 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/06 17:08:11 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
	char *d;
	size_t d_len;

	d_len = ft_strlen(dst);
	d = dst + d_len;
	n -= d_len;
	while (n-- > 1)
		if (!(*d++ = *src++))
			return (ft_strlen(src) + d_len);
	*d = 0;
	return (ft_strlen(src) + d_len);
}
