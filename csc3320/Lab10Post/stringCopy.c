#include <stdio.h>

void copyString(char* dest[], char* src[]);

int main() {
	
	char str1[] = "abcd";
	char str2[sizeof(str1)];
		

	
	copyString(str1, str2);
	printf("%s\n", str2);		

return 0;
}

void copyString(char dest[], char src[]) {

	int i = 0;
	while( i < sizeof(src)) {
	
	dest[i] = src[i];
	i++;
	}	
}
