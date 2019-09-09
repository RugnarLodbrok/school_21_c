/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:38:26 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/05 16:45:14 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned long	len;
	char			*ret;
	char			*ptr;

	len = 0;
	ptr = src;
	while (*ptr++)
		len++;
	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (0);
	ptr = ret;
	while ((*ptr++ = *src++))
		;
	*ptr = 0;
	return (ret);
}
