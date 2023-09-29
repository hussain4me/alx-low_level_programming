#include <unistd.h>

/**
 *  This is my _putchar.c
*/


int _putchar(cahr c)
{
 return write(STDOUT_FILENO, &c, 1);
}
