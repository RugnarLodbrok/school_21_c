/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:47:30 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/06 16:47:40 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	char *s;

	s = s1 + ft_strlen(s1);
	while (n--)
		if (!(*s++ = *s2++))
			break;
	if (!n)
		*s = 0;
	return (s1);
}
