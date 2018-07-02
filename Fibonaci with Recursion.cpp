#include<stdio.h>
#include<conio.h>


long fib(int a);

int main()
{
	long r;
	int n;
	
	printf("Enter the range of the Fibonaci Series to be printed.\n");
	scanf("%d", &n);
	
	r = fib(n);
	
	printf("The result id %d", r);
}

long fib(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
		return((fib(a-1))+(fib(a-2)));
	}
}
