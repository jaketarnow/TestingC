/* show how to use C strings */
#include <stdio.h> /* for printf, etc. */
#include <string.h> /* for str functions */
#include <stdlib.h> /* for malloc and free */

/* static memory allocation */

char *s1 = "This is string one";
char *s2 = "and this is string two";

char t1[256];
char t2[256];

int main(int argc, char *argv[]) {
	char *p1;

	/* basics */

	printf("string s1 = %s\n", s1);
	printf("length of s1 = %lu\n", strlen(s1));

	/* copying */

	strcpy(t1, s1); //s1 must be null terminated

	printf("string t1 = %s\n", t1);
	printf("length of string t1 = %lu\n", strlen(t1));

	/* concatenation */

	strcpy(t2, s1);
	strcat(t2, " "); //adds a space
	strcat(t2, s2);

	printf("string t2 = %s\n", t2);
    printf("length of string t2 = %lu\n", strlen(t2));

    /* comparison */

    printf("is s1 equal to s1? strcmp = %d\n", strcmp(s1, s1));
    printf("is s1 equal to t1? strcmp = %d\n", strcmp(s1, t1));
    printf("is s1 equal to t2? strcmp = %d\n", strcmp(s1, t2));

    /* see the "n" versions of the str functions */

    /* dynamic memory allocation */
    p1 = (char *) malloc(256);

    strcpy(p1, t2);
    printf("string p1 = %s\n", p1);
    printf("length of string p1 = %lu\n", strlen(p1));

    free(p1);

    return 0;
}