/*
File Content:
Hello File Handling in C
*/
#include<stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    // Create and open file in write mode
    fp = fopen("data.txt", "w");

    // Write string into file
    fprintf(fp, "Hello File Handling in C");

    // Close file
    fclose(fp);

    // Open file in read mode
    fp = fopen("data.txt", "r");

    // Read string from file
    fgets(text, 100, fp);

    // Display file contents
    printf("File Content:\n%s", text);

    // Close file
    fclose(fp);

    return 0;
}
