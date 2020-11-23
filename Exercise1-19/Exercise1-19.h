#ifndef _EXERCISE_1_19_
#define _EXERCISE_1_19_

#include <stdio.h>
#define MAXLINE 10  /* Maximum input line length */

// Write a function reverse(s) that reverses the character string s. 
//Use it to write a program that reverses its input a line at a time.
char reverse(char line[], char rev[]);

int main() {

	char line[MAXLINE + 1];
	char c;
	char rev[MAXLINE + 1]; /* rev[] will store the array line[] in an inverse order. */

	for (int i = 0; (i <= MAXLINE); ++i) /* Innitialize rev[] */
		rev[i] = '\0';

	printf("Input your array: \n");

	for (int i = 0; (i <= MAXLINE); ++i) /* Initializes line[] */
		line[i] = '\0';
	
	while ((c = getchar()) != EOF) { /* Main loop */
		int j = 0;
		
		while ((c != '\n') && (j < MAXLINE)){ /* Checks if the line hasn't finished and the string doesn't have more than 10 characters. */
			line[j] = c;
			++j;
			c = getchar();
			printf("%d\n", j);
		}

		printf("Line is: \n");
		printf("%s\n", line); /* Print line[] */
		reverse(line, rev); 
		

	}


} /* End of main(). */

//Debuggin' in progress
char reverse(char line[], char rev[]) {

	printf("Inside reverse()\n");
	int j = (MAXLINE - 1);
	for (int r = 0; ((r < MAXLINE) && (j >= 0)); ++r) {
		rev[r] = line[j];
		printf("%d\t%d\n", r, j);
		--j;

	}
	printf("Reverse is: \n");
	printf("%s\n", rev); /* Print rev[] */
	return 0;
}


#endif