#include <stdio.h>

int main (void)
{
	printf("Please enter the factorial you want to calculate\n");
	int fact = 0;
	scanf("%d",&fact);

	int sum = fact;
	fact = fact-1;
	while (fact > 0)
	{
	
	sum = sum * (fact);
	fact = fact-1;
	
	}
	printf("The product of the factorial is: ");
	printf("%d\n", sum);
	return 0;
}

