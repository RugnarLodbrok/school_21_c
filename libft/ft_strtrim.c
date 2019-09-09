/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:43:50 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/09 17:57:46 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char *ft_strtrim(char const *s)
{
	unsigned int i;
	char *dst;

	while (isspace(*s))
		s++;
	i = ft_strlen(s);
	while (isspace(*(s + i - 1)))
		i--;
	if (!(dst = malloc(sizeof(char) * (i + 1))))
		return (0);
	return(ft_strncpy(dst, s, i));
}
