#include <unistd.h>

/**
 * pchar - function entry
 * @c: the character to print
 *
 * Return: on success 1. and -1 on error.
*/

int pchar(char c)
{
return (write(1, &c, 1));
}
