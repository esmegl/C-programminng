#ifndef _EXERCISE_1_15_
#define _EXERCISE_1_15_

#include <stdio.h>
// Program to convert Fahrenheit to Celsius.

void fahrtocel(void);

int main () {

	fahrtocel();
}

void fahrtocel() {

	float fahr, celsius;
	float LOWER_LIMIT, UPPER_LIMIT;
	printf("Please input your value: \n");
	scanf("%f", &fahr);

	#define _LOWER_LIMIT -459 // Lowest value of temperature scale in Fahrenheit.
	#define _UPPER_LIMIT 300 // Maximum value of temperature in Fahrenheit allowed in this program.

	if (fahr < _LOWER_LIMIT)
		printf("Invalid value, keep in mind -459F is the lowest value phisically possible.\n");
	else {
		if (fahr > _UPPER_LIMIT)
			printf("Your number is too high. The maximum number allowed is 300F, please try again.\n");
		else {

			float celsius = (5.0/9.0) * (fahr-32.0); 
			printf("%3.0fF\t %6.1fC\n", fahr, celsius);       
		}

	}

}

#endif