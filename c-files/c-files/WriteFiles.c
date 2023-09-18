#include <stdio.h>

/* Function prototype */
int writeFiles(void);

int main(void)
{
    writeFiles();

    return 0;
}

/* The w mode means that the file is opened for writing.
 *
 * To insert content to it, you can use the fprintf() function
 * and add the pointer variable (fptr in our example) and some text:
 *
 * The a mode appends content at the end of the file:
 */


int writeFiles(void)
{
    FILE *fptr;

    /* Create file */
    fptr = fopen("fileone.txt", "a");

    /* Write some text to the file */
    fprintf(fptr, "\nHi Everybody!\n");

    /* Close file */
    fclose(fptr);

    return 0;
}