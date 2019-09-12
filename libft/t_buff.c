#include <stdlib.h>
#include "libft.h"

char	*re_alloc(char *ptr, int n)
{
	char *ret;

	if (!(ret = malloc(sizeof(char) * n)))
		return (0);
	ft_strcpy(ret, ptr);
	free(ptr);
	return (ret);
}

void	t_buff_init(t_buff *b, int len)
{
	b->len = len;
	b->buff = malloc(sizeof(char) * (len + 1));
}

int		t_buff_extend(t_buff *b)
{
	b->len *= 2;
	b->buff = re_alloc(b->buff, b->len + 1);
	if (!b->buff)
		return (-1);
	return (b->len);
}
