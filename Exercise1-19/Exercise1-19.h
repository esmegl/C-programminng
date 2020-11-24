#ifndef _EXERCISE_1_19_
#define _EXERCISE_1_19_

#include <stdio.h>
#define MAXLINE 10  /* Maximum input line length */

// Write a function reverse(s) that reverses the character string s. 
//Use it to write a program that reverses its input a line at a time.

char rev[MAXLINE + 1]; /* Stores the elements in reverse order */

char reverse(char line[]);

int main() {

	extern char rev[];

	char line[MAXLINE + 1];
	char c;

	for (int i = 0; (i <= MAXLINE); ++i) /* Innitialize rev[] */
		rev[i] = '\0';

	printf("Input your array: \n");

	for (int k = 0; (k <= MAXLINE); ++k) /* Initializes line[] */
		line[k] = '\0';
	
	while ((c = getchar()) != EOF) { /* Main loop */
		int j = 0;
		
		while ((c != '\n') && (j < MAXLINE)){ /* Checks if the line hasn't finished and the string doesn't have more than 10 characters. */
			line[j] = c;
			++j;
			c = getchar();
			//printf("%d\n", j); /* Auxiliar print */
		}

		printf("Line is: \n");
		printf("%s\n", line); /* Print line[] */
		reverse(line); 
		printf("Reverse is: \n");
		for (int h = 0; (h < MAXLINE); ++h)
			putchar(rev[h]); /* Print rev[] */
			printf("\n");
		

	}


} /* End of main(). */



#endif