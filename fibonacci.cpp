#include <stdio.h>

int fibonacci ( int n)
{	
	int i, fib, p1, p2;
	
	if(n==1 || n==2)
	{
		return 1; //fib = 1;
	}
	else
	{
		p1=1;
		p2=1;
		for(i=3; i<=n; i++)
		{
			fib = p1 + p2;
			p1 = p2;
			p2 = fib;			
		}			
	}
	return fib;
			
}

int main()
{
	int n, fib, p1, p2;
	printf("Digite um Numero: ");
	scanf("%d", &n);
	fib = fibonacci(n);
	printf("Resultado FIBONACCI : %d", fib);
	
}