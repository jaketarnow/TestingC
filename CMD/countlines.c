/* Write a program that counts the number of lines in a file */
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int count = 0;
    char filename[40];
    char sampleChar;
 
    printf("Enter file name: ");
    scanf("%s", filename);
 
    // Open the file
    fp = fopen(filename, "r");
 
    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s", filename);
        return 0;
    }

    for (sampleChar = getc(fp); sampleChar != EOF; sampleChar = getc(fp)) {
    	if (sampleChar == '\n') {
    		count = count + 1;
    	}
    }
    // Close the file
    fclose(fp);
    printf("The file %s has %d lines\n", filename, count);
 
    return 0;
}