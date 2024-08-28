#include "TXLib.h"
#include <stdio.h>

void Print (double* data, size_t sizeX, size_t sizeY);
void PrintTriangle (int* data, size_t sizeX, size_t sizeY);

//-----------------------------------------------------------------------------

int main()
{
    /*double data [][4] = {{11, 12, 13, 14},
                          {21, 22, 23, 24},
                          {31, 32, 33, 34},
                          {41, 42, 43, 44},
                          {51, 52, 53, 54}};
    Print (&data[0][0], 4, 5); */

    int triangle [][5] = {{1, 1, 1, 1, 1},
                          {1, 1, 1, 1, 1},
                          {1, 1, 1, 1, 1},
                          {1, 1, 1, 1, 1},
                          {1, 1, 1, 1, 1}};
    /*int triangle [][5] = {{0, 2, 2, 2, 2},
                          {1, 0, 2, 2, 2},
                          {1, 1, 0, 2, 2},
                          {1, 1, 1, 0, 2},
                          {1, 1, 1, 1, 0}};*/
    PrintTriangle (*triangle, 5, 5);


    return 0;
}

//-----------------------------------------------------------------------------

void Print (double* data, size_t sizeX, size_t sizeY)
{
    for (size_t y = 0; y < sizeY; y++)
    {
        for (size_t x = 0; x < sizeX; x++)
        {
            printf ("data [%d][%d] = %lg | ", y, x, *(double*)((size_t)data + (y*sizeX+x)*sizeof(double)));
        }
        printf ("\n");
    }
}

//-----------------------------------------------------------------------------

void PrintTriangle (int* data, size_t sizeX, size_t sizeY)
{
    size_t point = 0;
    scanf ("%d", &point);

    for (size_t y = 0; y <= sizeY; y++)
    {
        for (size_t x = 0; x < sizeX; x++)
        {
            if (x == point)
            {
                point++;
                break;
            }
            else
            {
                printf ("%d ", *(data + y*sizeX+x));
            }
        }
        printf ("\n");
    }
}
