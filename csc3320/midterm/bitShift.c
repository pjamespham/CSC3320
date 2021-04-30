#include <stdio.h>

int main(void) 
{
	int userNumber = 0;
	int tempShift = 0;
	int tempComplement = 0;
	printf("Enter a number to shift 3 spaces\n");
	scanf("%d",&userNumber);

	tempShift = userNumber>>3;
	tempComplement = ~userNumber;
	userNumber = tempShift - tempComplement;
	
	printf("The shifted number is: ");
	printf("%d",userNumber);
	printf("\n");
	return 0;
}

