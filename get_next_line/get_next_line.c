#include "unistd.h"
#include <stdio.h>

int get_next_line(const int fd, char **line)
{
	char *p;
	int n;

	p = *line;
	while (1)
	{
		n = read(fd, p, 1);
		if (n < 0)
			return (-1);
		if (n == 0)
			return (0);
		if (*p == '\n' || *p == EOF)
		{
			*p = 0;
			return (1);
		}
		p++;
	}
}
