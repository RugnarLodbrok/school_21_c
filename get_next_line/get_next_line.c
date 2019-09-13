/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:26:41 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/13 19:36:29 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"
#include "get_next_line.h"

#include <stdio.h>

char *do_chunk(t_buff *buff, char *chunk, size_t chunk_size)
{
	char *ptr;
	size_t line_size;

	ptr = ft_memchr(chunk, '\n', chunk_size);
	if (ptr)
	{
		line_size = ptr - chunk;
		t_buff_add_len(buff, line_size);
		ft_memcpy(buff->data + buff->len - line_size, chunk, line_size);
		ft_bzero(chunk, line_size + 1);
		return (ptr);
	}
	else
	{
		t_buff_add_len(buff, chunk_size);
		ft_memcpy(buff->data + buff->len - chunk_size, chunk, chunk_size);
		ft_bzero(chunk, chunk_size);
		return (0);
	}
}

int terminate(t_buff *b, char **line, int return_val)
{
	b->data[b->len] = 0;
	*line = b->data;
	return (return_val);
}

int get_next_line(const int fd, char **line)
{
	int i;
	static char chunk[BUFF_SIZE];
	static char *cursor;
	t_buff buff;

	t_buff_init(&buff, BUFF_SIZE); //todo: if alloc fails?
	if (cursor && cursor < chunk + BUFF_SIZE - 1)
		if ((cursor = do_chunk(&buff, cursor + 1, BUFF_SIZE - (cursor - chunk) - 1)))
			return (terminate(&buff, line, 1));
	while (1)
	{
		i = read(fd, chunk, BUFF_SIZE);
		if (i < 0)
		{
			free(buff.data);
			return (-1);
		}
		if (!i)
			return (0);
		if ((cursor = do_chunk(&buff, chunk, i)))
			return (terminate(&buff, line, 1));
	}
}
