/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:32:53 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/06 17:33:36 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char *hay;
	char *nee;

	if (!*needle)
		return (char *)(haystack);
	while (*haystack++ && n--)
	{
		hay = (char *)haystack - 1;
		nee = (char *)needle;
		while (1)
		{
			if (!*hay)
				if (!*nee)
					return (char *)(haystack - 1);
				else
					return (0);
			else if (!*nee)
				return (char *)(haystack - 1);
			if (*hay != *nee)
				break ;
			hay++;
			nee++;
		}
	}
	return (0);
}
