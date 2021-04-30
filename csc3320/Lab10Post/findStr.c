#include <stdio.h>
#include <string.h>
int main() {
	
	char str1[] = "abcde";
	char str2[sizeof(str1)];
	strcpy(str2, str1);
	
	char userInput[sizeof(char)*20];
	char smallestWord[sizeof(char)*20];
	char largestWord[sizeof(char)*20];
	
	scanf("%s", &userInput);
	strcpy(smallestWord, userInput);
	strcpy(largestWord, userInput);
	
	while (strlen(userInput) != 4) {
	
	scanf("%s", &userInput);
	if (strcmp(largestWord, userInput) <= 1) {
		strcpy(largestWord, userInput);
	}
	if (strcmp(smallestWord, userInput) >= 1) {
		strcpy(smallestWord, userInput);
	}
	}

	printf("Largest word: %s\n", largestWord);
	printf("Smallest word: %s\n", smallestWord);
	
	return 0;
}

