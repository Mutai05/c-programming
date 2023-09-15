#include <stdio.h>

/*
 * A multidimensional array is basically an array of arrays.
 * A 2D array is also known as a matrix (a table of rows and columns).
 */

int twoDarrays()
{
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
}

/*
 * To access an element of a two-dimensional array,
 * you must specify the index number of both the row and column.
 */

int accessElements()
{
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    printf("%d\n", matrix[0][2]);
}

/*
 * To change the value of an element,
 * refer to the index number of the element in each of the dimensions:
 * The following example will change the value of the element
 * in the first row (0) and first column (0):
 */

int changeElement()
{
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    matrix[0][0] = 9;

    printf("%d\n", matrix[0][0]);
}

int main()
{
    twoDarrays();
    accessElements();
    changeElement();

    return (0);
}
