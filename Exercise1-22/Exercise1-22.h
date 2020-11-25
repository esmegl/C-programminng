#ifndef _EXERCISE_1_22
#define _EXERCISE_1_22

#include <stdio.h>

/* Write a program to ‘‘fold’’ long input lines into two or more shorter lines
 after the last non-blank characterthat occurs before the n-th column of input. 
 Make sure your program does something intelligent with very long lines, and ifthere 
 are no blanks or tabs before the specified column. */

#define MAXCHAR 80 /* Maximum number of columns */
#define MAXLINE 10 /* Maximum number of lines */



int main (){

	char c, prev_c;
	int num_line = 0;
	int num_char = 0;

	while (((c = getchar()) != EOF) && (num_line <= MAXLINE) ){ /* Main loop */

		while ((c != '\n') && (num_char <= MAXCHAR)){ /* Makes sure the line hasn't finished and there is <= 80 characters */
			if ((c != ' ') || (c != '\t')){	/* If there is not a blank or tab prints c */
				putchar(c);
				++num_char;
				c = getchar();
			}
			prev_c = c;
			else {
				printf("\n");
				c = getchar();
			}
		}
		num_char = 0;
		++num_line;
	}

	return 0;
}

#endif