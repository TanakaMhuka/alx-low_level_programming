#include <stdio.h>

int main(void)
{
	char text[]="_putchar\n";
	for(int	i=0;text[i]!='\n';i++)
	{
		putchar(text[i]);
	}
	return 0;	
}
