/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:40:42 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/05 16:36:47 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		if (!(*s1 && *s2))
			break ;
		s1++;
		s2++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	**qsort_iteration(char **ptr, int i, int *reverse)
{
	if (!*reverse)
	{
		if (ft_strcmp(*ptr, *(ptr + i)) > 0)
		{
			ft_swap(ptr, ptr + i);
			*reverse = !*reverse;
			ptr = ptr + i;
		}
	}
	else
	{
		if (ft_strcmp(*ptr, *(ptr - i)) < 0)
		{
			ft_swap(ptr, ptr - i);
			*reverse = !*reverse;
			ptr = ptr - i;
		}
	}
	return (ptr);
}

void	ft_qsort_strings(char **tab, int size)
{
	char	**p;
	int		i;
	int		reverse;

	i = size - 1;
	p = tab;
	reverse = 0;
	while (i > 0)
	{
		p = qsort_iteration(p, i, &reverse);
		i--;
	}
	if (p - tab > 1)
		ft_qsort_strings(tab, (int)(p - tab));
	if (tab + size - p - 1 > 1)
		ft_qsort_strings(p + 1, (int)(tab + size - p - 1));
}

int		main(int ac, char **av)
{
	char	**argv;
	int		len;
	char	*str;

	ac++;
	len = 0;
	av++;
	argv = av;
	while (*av++)
		len++;
	ft_qsort_strings(argv, len);
	while (*argv)
	{
		str = *argv++;
		while (*str)
			ft_putchar(*str++);
		ft_putchar('\n');
	}
	return (0);
}
