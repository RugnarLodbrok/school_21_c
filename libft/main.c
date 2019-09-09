#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void test_memchr(void)
{
	char *s1 = "";
	char *s2 = "abcdefabcdef";
	char *s3 = "11111111111111111111";

	printf("Testing memchr():\nTest1...");
	if (ft_memchr(s1, 'x', 0) == NULL)
		printf("passed.");
	else printf("FAILED.");
	printf("\nTest2...");
	if (ft_memchr(s2, 'y', 0) == NULL)
		printf("passed.");
	else printf("FAILED.");
	printf("\nTest3...");
	if ((char *)ft_memchr(s2, 'a', 1) - s2 == 0)
		printf("passed.");
	else printf("FAILED.");
	printf("\nTest4...");
	if (ft_memchr(s2, 'd', 2) == NULL)
		printf("passed.");
	else printf("FAILED.");
	printf("\nTest5...");
	if ((char *)ft_memchr(s2, 'd', 12) - s2 == 3)
		printf("passed.");
	else printf("FAILED.");
	printf("\nTest6...");
	if ((char *)ft_memchr(s2, 'f', 12) - s2 == 5)
		printf("passed.");
	else printf("FAILED.");
	printf("\nTest7...");
	if ((char *)ft_memchr(s3, '1', 20) - s3 == 0)
		printf("passed.");
	else printf("FAILED.");
	putchar('\n');
}

int main(void)
{
	char a[16];
	char *ptr;
	char *s;
	char **ss;

	printf("hello libft!\n");
	strcpy(a, "0123456789abcde");
	printf("%s\n", a);
	ptr = ft_memccpy(a, "XXXXXXYXXXXXXXX", 'Y', 16);
	printf("%s\n%s\n", a, ptr);
	printf("%d\n", 'a' - 'A');

	s = "**dsadsd*ds*ds*****dsa";
	ss = ft_strsplit(s, '*');
	printf("split(\"%s\", '%c') = [", s, '*');
	while (*ss)
		printf("\"%s\" ", *ss++);
	printf("]\n");

	printf("%d == %s\n", 4342, ft_itoa(4342));
	printf("%d == %s\n", 2147483647, ft_itoa(2147483647));
	printf("%d == %s\n", -2147483648, ft_itoa(-2147483648));
	printf("%d == %s\n", 0, ft_itoa(0));

	printf("putnbr: ");
	ft_putnbr(-2147483648);
	printf("\n");

	test_memchr();

	int i;
	i = -1;
	while (i < 530)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
			printf("FAIL on i = %d\n", i);
		i++;
	}
	printf("90 91: %c %c\n", (char)90, (char)91);
	printf("%d\n", 91 >= 'a' && 91 <= 'z');
	printf("A Z a z %d %d %d %d\n", 'A', 'Z', 'a', 'z');
}
