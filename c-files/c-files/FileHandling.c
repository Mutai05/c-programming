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

    /* Create file */
    fptr = fopen("filename.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening the file.\n");
        return 1; /* Return an error code to indicate failure */
    }

    /* Close file */
    fclose(fptr);

    return 0;
}