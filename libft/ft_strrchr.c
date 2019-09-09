/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:21:50 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/06 17:22:24 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char cc;
	size_t n;
	char *ptr;

	cc = (char)c;
	n = ft_strlen(s);
	ptr = (char *)s + n;
	while (n)
	{
		if (cc == *ptr)
			return (ptr);
		ptr--;
		n--;
	}
	return (0);
}
