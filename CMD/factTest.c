#include <stdio.h>
#include <stdlib.h>

int fact_iterative(int num) {
	int fact = 1;
	int i;

	for (i = 1; i<= num; i++) {
		fact*=i;
	}
	return fact;
}

int main(int argc, char *argv[]) {
	int num;

	printf ("Enter a number: ");
  	scanf ("%d", &num);

  	printf("Factorial is: %d\n", fact_iterative(num));
	return 0;
}
