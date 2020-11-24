#include "Exercise1-19.h"

char reverse(char line[]) {

	extern char rev[];

	//printf("Inside reverse()\n"); /* Auxiliar print */
	int j = (MAXLINE - 1);
	for (int r = 0; ((r < MAXLINE) && (j >= 0)); ++r) {
		rev[r] = line[j];
		//printf("%d\t%d\n", r, j); /* Auxiliar print */
		--j;

	}
	return 0;
}