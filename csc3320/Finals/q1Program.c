#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printfile(FILE* fileptr);
int countWords(FILE* fileptr);
int countChar(FILE* fileptr);
int countLines(FILE* fileptr);
int main() {

	FILE* readDoc = fopen("finalsTextDoc.txt","r");
 //	printfile(readDoc);
 	int numChar, numWords, numLine;

	numWords = countWords(readDoc);
	readDoc = fopen("finalsTextDoc.txt", "r");
	numChar = countChar(readDoc);
	readDoc = fopen("finalsTextDoc.txt", "r");
	numLine = countLines(readDoc);
		
	printf("Number of characters: %d\n", numChar);
	printf("Number of words: %d\n", numWords);
	printf("Number of lines: %d\n", numLine);






	fclose(readDoc);
	return 0;
}

void printfile(FILE* fileptr) {
	char ch;

	while((ch = fgetc(fileptr)) != EOF) {
		printf("%c", ch);
	}
}

int countChar(FILE* fileptr) {
	char ch;
	int counter = 0;
	while((ch = fgetc(fileptr)) != EOF) {
		if (ch != '\n' || ch != '\t') {
			counter++;
		}
		

	}	
	return counter;
}


int countWords(FILE* fileptr) {
	char ch;
	int counter = 0;
	
	while ((ch=fgetc(fileptr)) != EOF) {
		
		if ( ch == ' ') {

			counter++;
		}	
	}
	return counter;
}


int countLines(FILE* fileptr) {
	char ch;
	int counter = 0;
	
	while ((ch=fgetc(fileptr)) != EOF) {
		
		if ( ch == '\n') {

			counter++;
		}	
	}
	return counter;
}
