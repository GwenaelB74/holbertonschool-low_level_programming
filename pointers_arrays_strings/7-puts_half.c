#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a newline
 * @str: The input string to be processed
 *
 * Description: This function calculates the starting index based on the length
 * of the string and prints the characters from that index to the end.
 */
void puts_half(char *str)
{
    int length = 0;
    int start;

    while (str[length])
    {
        length++;
    }

    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length + 1) / 2;
    }

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}

