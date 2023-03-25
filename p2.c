#include<stdio.h>

void main()
{
	int a, b, c;
	printf("Enter three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a < c)
	{
		if(a < b)
		{
			printf("a: %d is smallest\n", a);
		}
		else
		{
			printf("b: %d is smallest\n", b);
		}
	}
	else if(b < c)
		printf("b: %d is smallest\n", b);
	else
		printf("c: %d is smallest\n", c);
}
