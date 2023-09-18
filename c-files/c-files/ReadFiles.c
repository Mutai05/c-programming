#include <stdio.h>

/* Function prototype */
int fileHandling(void);

int main(void)
{
    fileHandling();
    return 0;
}

int fileHandling(void)
{
    FILE *fptr;

    /* Open file for reading */
    fptr = fopen("fileone.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return 1; /* Return an error code to indicate failure */
    }

    /* Store the content of the file */
    char myString[100];

    /* Read the content and store it inside myString */
    fgets(myString, 100, fptr);

    /* Print file content */
    printf("%s", myString);

    /* Close file */
    fclose(fptr);

    return 0;
}