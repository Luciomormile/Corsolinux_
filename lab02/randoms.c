#include <stdio.h>
#include <time.h>

#include <stdlib.h>
#define MY_RAND_MIN 1
#define MY_RAND_MAX 30
#define NMAX 3
int main() {
	srand(time(NULL));

	for(int i = 0; i<NMAX; i++) {

		int r = MY_RAND_MIN +(rand() % MY_RAND_MAX);
		printf("%d ",r);

	}
	printf("\n");
	return 0;
}


