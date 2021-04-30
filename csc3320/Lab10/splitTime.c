#include <stdio.h>

void splitTime(long totalSeconds, int* hours, int* mins, int* secs);

int main() {
	int n, mins, hours, secs;
	printf("Enter seconds:");
	scanf("%d", &n);
	splitTime(n, &hours, &mins, &secs);	
	
	printf("Converted format: %d hour %d mins %d secs\n", hours, mins, secs );
	
	return 0;
}

void splitTime(long totalSeconds, int* hours, int* mins, int* secs) {

	*hours = totalSeconds / 3600;
	totalSeconds = totalSeconds % 3600;
	
	*mins = totalSeconds / 60;
	totalSeconds = totalSeconds % 60;
	
	*secs = totalSeconds;
}	


	
