#include <stdio.h>
#include <stdlib.h>
//referenced from http://rosettacode.org/wiki/Sorting_algorithms/Insertion_sort#C
void insertion_sort(int *a, int n) {
	size_t i, j;
	for (i = 1; i < n; ++i) {
		int tmp = a[i];
		j = i;
		while(j > 0 && tmp < a[j - 1]) {
			a[j] = a[j - 1];
			--j;
		}
		a[j] = tmp;
	}
}
 
int main() {
	int n, m;
	int *array;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	//use of malloc creates an array of some size n
	array = (int *)malloc(sizeof(int)*n);

	int j;
	for (j = 0; j < n; j++) {
		printf("> ");
		scanf("%d", &m);
		array[j] = m;
	}
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", array[i], i == n - 1 ? "\n" : " ");
    	insertion_sort(array, n);
    for (i = 0; i < n; i++)
        printf("%d%s", array[i], i == n - 1 ? "\n" : " ");
    return 0;
}