#ifndef _EXERCISE_1_19_
#define _EXERCISE_1_19_

#include <stdio.h>
#define MAXLINE 10   /* Maximum input line length */

// Write a function reverse(s) that reverses the character string s. 
//Use it to write a program that reverses itsinput a line at a time.
void reverse(char line[]);

int main() {

	char line[MAXLINE];
	int c, i, r;

	// Initialize the list.
	for (i = 0; i <= MAXLINE; ++i)
		line[i] = 0;

	i = 0;

	//Debuggin' in progress
	// Until here the code executes correctly
	printf("Input your array: \n");

	while ((c = getchar()) != EOF ) {
		
		// Checks if the line hasn't finished.
		while ((c != '\n') && (i < MAXLINE)){
			printf("%d\n", i);
			line[i] = c;
			++i;
		}

		// If the line finished start again, i = 0.
		if (c == '\n'){
			i = 0;
		}
	}

	// Print the results.
	reverse(line);

}

void reverse(char line[]) {
	int r, i;
	char rev[MAXLINE];

	i = MAXLINE;

	for (r = 0; r <= MAXLINE ; ++r) {
		if ( i >= 0){
			rev[r] = line[i];
			--i;
		}

	}
	printf("%d\n ", rev[r]);
}


#endif