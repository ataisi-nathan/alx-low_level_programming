#include "main.h"

/**
 * print_alphabet_x10 - Prints lower case alphabet 10 times
 *
 * Return: Always 0.
 */

{
int round = 0;
char letter = 'a';
    
while (round < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
            }
_putchar('\n');
    
round++;
}
