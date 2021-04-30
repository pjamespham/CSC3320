#include <stdio.h>

int main() {
	
	FILE *textFile = fopen("test.txt", "r");
	int i = 0;
	int mostFreq = 0;
	int numPosition = 0;
	char tempChar;
	int countLetters[26] = {0};
	do {
		tempChar = (char)fgetc(textFile);
		if (tempChar >= 'a' && tempChar <= 'z') {
			countLetters[tempChar - 'a']++;
		}
		else if (tempChar >= 'A' && tempChar <= 'Z') {
			countLetters[tempChar - 'A']++;
		}
	} while (tempChar != EOF);
	
	for (i = 0; i < 26; i++) {
		if (mostFreq < countLetters[i]) {
			mostFreq = countLetters[i];
			numPosition = i;
		}
	}
	printf("The most frequent letter is '%c', appearing %d times.\n", 'a'+numPosition, mostFreq);
}	
