#include <stdio.h>

int fact(int x);

int main()
{
	printf("%d\n", fact(5));
}


int fact(int x)
{
	if(x == 1)
		return 1;
	else
		return x * fact(x - 1);
}
