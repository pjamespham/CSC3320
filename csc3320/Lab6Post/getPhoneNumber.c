#include <stdio.h>
int main(void) {

int a,b,c;

printf("Please enter a phone number [(999)999-9999)]\n");
scanf("(%d)%d-%d",&a,&b,&c);
printf("You entered: %d-%d-%d\n",a,b,c);

return 0;
}

