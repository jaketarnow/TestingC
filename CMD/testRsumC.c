#include <stdio.h>
#include <stdlib.h>

int sum(int *a, int n) {
	if (n < 0)
		return 0;
	else
		return a[n] + sum(a, n-1);
}

int main() {
	int n, m, j, i;
	int *array;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	//use of malloc creates an array of some size n
	array = (int *)malloc(sizeof(int)*n);

	for (j = 0; j < n; j++) {
		printf("> ");
		scanf("%d", &m);
		array[j] = m;
	}
    for (i = 0; i < n; i++)
        printf("%d%s", array[i], i == n - 1 ? "\n" : " ");
    printf("%s%d\n", "Sum: ", sum(array, n));
    return 0;
}