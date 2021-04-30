#include <stdio.h>

int main() {

int letters=0;
int words=0;
int space=0;
char character;

printf("Enter a sentence: ");

while((character=getchar()) != ' '){
	if(character != ' '){
		if(!space){
		words++;
		space=1;
		}
	letters++;
}else
	space = 0;
}

printf("Average word length: %d",words);

return 0;
}

