/* Write a program that counts the number of lines in a file */
#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp;
	int numLines = 0;
	//filename of 40 character string is max?
	char filename[40], sampleChar;
	//prompt use for file name
	printf("Enter file name: ");
	scanf("%s", filename);
	//open file in read mode
	fp = fopen(filename, "r");
	//get character from file and store in var sampleChar
	sampleChar = getc(fp);

	while (sampleChar != EOF) {
		int comp = strncmp(sampleChar, "\n", "");
		if (comp == 0) {
			numLines = numLines + 1;
		}
		sampleChar = getc(fp);
	}
	//close file
	fclose(fp);
	printf("There are %d lines in %s", numLines, filename);
	return 0;
}