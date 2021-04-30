#include <stdio.h>

int main() {
	
int numbers[5] = {1,2,3,4,5};
int i = 0;

printf("numbers = %p\n", numbers);

 do {
printf("numbers[%u] = %p\n", i, (void *)(&numbers[i]));
i++;
} while(i < 5);
	return 0;

int lengthOfArray = (sizeof (numbers) / sizeof (numbers[0]));
printf("The length of the array is: %d", lengthOfArray);

}
