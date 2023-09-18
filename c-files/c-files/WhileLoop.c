#include <stdio.h>

/*
 * To read every line of the file,
 * you can use a while loop:
 */

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

    /* Store the content of the file */
    char myString[100];

    /* Read the content and store it inside myString */

    if (fptr != NULL)
    {
        while (fgets(myString, 100, fptr))
        {
            printf("%s", myString);
        }
    }
    else
    {
        printf("Not able to open the file.\n");
        return 1; /* Return an error code to indicate failure */
    }

    /* Print file content */
    printf("%s", myString);

    /* Close file */
    fclose(fptr);

    return 0;
}