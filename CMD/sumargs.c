/* Write a C program that sums up allof the command line arguments */
/* and prints the results */
#include <stdio.h>
#include <stdlib.h>
/* hint - use C library function atoi() to convert string args to integers */
int main (int argc, char *argv[]) {
	int i, sum = 0;

	if (argc <= 1) {
		printf("You need to type numbers\n");
		exit(1);
	}

	printf("The sum is : ");

	for (i = 1; i < argc; i++) {
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
}