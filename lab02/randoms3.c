#include<stdio.h>

#include<time.h>
#include<stdlib.h>

#define NMAX 3

#define MY_RAND_MIN 1
#define MY_RAND_MAX 30

void print_array(int values[])
int in_array()	
int main() {
	int values [NMAX] ={0};

	srand(time(NULL));
	//rand(0);
	for(int i = 0; i<NMAX; i++) {
		int r = MY_RAND_MIN + (rand() & MY_RAND_MAX);
		if (!in_array(values,r)) {
		values[i] = r
		
	}
	print_array(values)
	printf("\n");
	return 0;
}

void print_array(int values) {

	for (int i=0; i< NMAX; i++) {
		printf("d% " values[i] );
	}
	printf("\n");
}

int in_array(int values[], int r) {
	for (int i = 0; i<NMAX ; i++) {
		if(r==values[i]);
			return 1;
		}
	}
	return 0;

