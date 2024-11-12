// Prints one pyramid of #
// Based on World 1-1 in NES Super Mario

#include <cs50.h>
#include <stdio.h>

int get_height_int(string prompt);
void pyramid(int h);

int main(void)
{
    int height = get_height_int("Height: ");
    pyramid(height);
}

// Print pyramid by filling grid with space or hash characters
void pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
      // Repeat for as long as num of columns is less than num of rows
	    for (int col = 0; col < rows; col++)
        {
            // Grid starts at 0 => rows - 1
            // Equivalent to the current grid row => i
            if (col < (rows - 1 - i))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}

// Prompt user for integer between 2 and 8
int get_height_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 2 || n > 8);
    return n;
}
