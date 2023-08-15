#include <unistd.h>
#include "_putchar.c"
#include "main.h"


/**
* _putchar - Writes a character to the standard output (stdout)
* @c: The character to be written
*
* Return: On success, 1. On error, -1 is returned,
* and errno is set appropriately.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/


int main(void)
{
 _putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
}
