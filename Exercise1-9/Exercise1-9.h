#ifndef _EXERCISE_1_9_
#define _EXERCISE_1_9_

#include <stdio.h>

//Copy input to output, replacing each string of one or more blanks by a single blank

int main() {

	int blank, prev_char, actual_char;

	blank = ' ';
	actual_char = getchar();
	putchar(actual_char);
	prev_char = actual_char;

	while ((actual_char = getchar()) != '\r') {

		if (actual_char != blank) {
			putchar(actual_char);
			prev_char = actual_char;
		}

		else {
			if (actual_char == prev_char) {
				prev_char = actual_char;
			}

			else {
				putchar(actual_char);
				prev_char = actual_char;
			}
		}

	}
	
}

#endif