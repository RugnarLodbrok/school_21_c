#include <stdlib.h>
#include "libft.h"

char	*re_alloc(char *ptr, size_t n)
{
	char *ret;

	if (!(ret = malloc(sizeof(char) * n)))
		return (0);
	ft_strcpy(ret, ptr);
	free(ptr);
	return (ret);
}

void	t_buff_init(t_buff *b, size_t size)
{
	b->size = size;
	b->len = 0;
	b->data = malloc(sizeof(char) * (size + 1));
}

int		t_buff_extend(t_buff *b)
{
	b->size *= 2;
	if (!(b->data = re_alloc(b->data, b->size + 1)))
		return (0);
	return (b->size);
}

int		t_buff_add_len(t_buff *b, size_t len)
{
	b->len += len;
	while (b->len > b->size)
		if (!t_buff_extend(b))
			return (0);
	return (b->len);
}
