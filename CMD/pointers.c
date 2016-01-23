/* pointers.c - pointer usage examples */
#include <stdio.h>

struct foo {
	int x, y, z;
	char name[32];
};

int x;

int main(int argc, char *argv[]) {
	int y;
	int *p1;
	int *p2;

	x = 1;
	y = 2;

	printf("x = %d, y = %d\n", x, y);

	p1 = &x;
	p2 = &y;

	(*p1) = 101;
	(*p2) = 102;

	printf("x = %d, y = %d\n", x, y);

	printf("p1 = %p, p2 = %p\n", p1, p2);

	return 0;
}