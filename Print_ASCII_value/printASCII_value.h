#ifndef _prueba_
#define _prueba_

#include <stdio.h>

int main () {

	int c;

	printf("Enter a character: ");
	c = getchar();
	printf("Your ASCII value of %c = %d \n", c, c);
}

#endif