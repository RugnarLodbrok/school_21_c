#include <stdio.h>
#include <fcntl.h>
#include "unistd.h"
#include "get_next_line.h"

//static void print_ptr(char *s, void *p)
//{
//	printf("%s = %lu\n", s, (unsigned long) p);
//}

int main(void)
{
	int fd;
	int status;
	char *line;

	fd = open("gnl7_1.txt", O_RDONLY);
	while (1)
	{
		status = get_next_line(fd, &line);
		if (status < 0)
		{
			fprintf((FILE *) 2, "Error\n");
			return (1);
		}
		if (status == 0)
			break;
		printf("%s\n", line);
	}
	printf("---file ended---\n");
	return (0);
}
