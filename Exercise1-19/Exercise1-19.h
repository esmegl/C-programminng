#ifndef _EXERCISE_1_19_
#define _EXERCISE_1_19_

#include <stdio.h>
#define MAXLINE 10   /* Maximum input line length */

// Write a function reverse(s) that reverses the character string s. 
//Use it to write a program that reverses itsinput a line at a time.
void reverse(char s[]);

int main() {

	char line[MAXLINE]; // Original array.
	int c, i, r;

	i = 0;
	printf("Input your array: \n");

	while ((c = getchar()) != EOF ) {
		
		// Checks if the line hasn't finished.
		while (c != '\n'){
			line[i] = c;
			++i;
		}
		// If the line finished start again, i = 0.
		if (c == '\n'){
			line[i] = '\0';
			i = 0;
		}
		// Print the results.
		reverse(line);
	}

}

void reverse(char s[]) {
	int r;
	for (r = MAXLINE; ; --r) {
		putchar(s[r]);
	}
}


#endif