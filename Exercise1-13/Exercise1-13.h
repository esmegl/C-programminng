#ifndef _EXERCISE_1_13
#define _EXERCISE_1_13

#include <stdio.h>

// Write a program to print a (horizontal) histogram of the lengths of words in its input. 
int main () {

	int c;

	while ((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n'){
			 putchar('\n');
		}
    	else {
      		putchar('*');
    	}

	}

}

#endif