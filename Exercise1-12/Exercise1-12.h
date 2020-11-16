#ifndef _Exercise_1_12_
#define _Exercise_1_12_

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

#import <stdio.h>
// Program that prints its input one word per line.

int main () {

	int c, nw, state;
	
	state = OUT;
	while ((c = getchar()) != EOF){

		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			putchar('\n');
		}
		else {
			putchar(c);
		}

	}

}


#endif