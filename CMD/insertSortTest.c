#include <stdio.h>
#include <stdlib.h>

//interpreted from http://rosettacode.org/wiki/Sorting_algorithms/Insertion_sort#C
void insertion_sort(int *a, int n) {
	for(size_t i = 1; i < n; ++i) {
		int tmp = a[i];
		size_t j = i;
		while(j > 0 && tmp < a[j - 1]) {
			a[j] = a[j - 1];
			--j;
		}
		a[j] = tmp;
	}
}

int main(int argc, char *argv[]) {
	int j;

	printf ("Enter n numbers: ");
	for (j = 0; j < num; j++) {
		scanf ("%d", &nums);
	}

	int a[] = {nums};
    int n = sizeof a / sizeof a[0];
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    insertion_sort(a, n);
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    return 0;
}