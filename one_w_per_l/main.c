#include <stdio.h>
int main()
{
	int i;
	while ((i = getchar()) != EOF)
		if (i == ' ' || i == '\t')
		{
			putchar('\n');
		}
		else
		{
			putchar(i);
		}
}




