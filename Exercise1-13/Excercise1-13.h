#ifndef _Excerxise_1_13_
#define _Excerxise_1_13_

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