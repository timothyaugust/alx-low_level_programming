#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
    int offset, i;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (offset = 0; offset < size; offset += 10)
    {
        int bytes_to_print = size - offset < 10 ? size - offset : 10;

        // Print the offset in hexadecimal
        printf("%08x: ", offset);

        // Print the hex content, 2 bytes at a time
        for (i = 0; i < 10; i++)
        {
            if (i < bytes_to_print)
                printf("%02x", *(b + offset + i));
            else
                printf("  ");

            if (i % 2 != 0)
                printf(" ");
        }

        // Print the content as characters
        for (i = 0; i < bytes_to_print; i++)
        {
            char c = *(b + offset + i);
            printf("%c", isprint(c) ? c : '.');
        }

        printf("\n");
	}
}

