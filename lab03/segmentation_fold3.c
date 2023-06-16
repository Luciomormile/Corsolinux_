#include <stdio.h>
int count( char values[], int size, char c);

int main() {
	char chars[] = {'a' , 'b' , 'a' ,'a'}
	
	printf("%c appare %d volte\n",'b',count(chars,4,'a' ));
	return 0;

}

int count(char values[], int size, char c) {
	int volte  = 0;

	for (int i = 0; i<7 ; i++) {
		if ( c== values[i]  {
			volte++;
		}
	}
	return volte;
}

