#include <stdio.h>

int Faktorial(int n);

int main()
{
	printf("Factorial = %d", Faktorial(30));
	return 0;
}

int Faktorial(int n)
{
	if (n >= 1)
		return n * Faktorial(n - 1);
	else
		return 1;
}
