#ifndef _BLANKS_COUNTER_
#define _BLANKS_COUNTER_

#include <stdio.h>

// Counts blanks, tabs and new lines.
// Ctrl + D = EOF.
int main(){

	int char_count, blanks, tabs, nwl, n;

	blanks = 0;
	tabs = 0;
	nwl = 0;

	while ((char_count = getchar()) != EOF) {
		if (char_count == '\n')
			++nwl;
		if (char_count == ' ')
			++blanks;
		if (char_count == '\t')
			++tabs;
	}

	printf("Blanks: %d\nTabs: %d\nNew lines: %d\n", blanks, tabs, nwl);


}

#endif