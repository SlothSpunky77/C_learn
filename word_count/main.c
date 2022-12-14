#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	int w_index = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			if(1 == w_index) 
				--nw;
			w_index = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
			++w_index;
		}
		else
			++w_index;
	}
	printf("\nNew line count: %d\nWord count: %d\nCharacter count: %d\n", nl, nw, nc);
}
