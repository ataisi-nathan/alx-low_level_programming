#include "main.h"

/**
 * print_alphabet_x10 - Prints lower case alphabets 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    int round = 0;
    char letter = 'a';
    
    while (letter < 10)
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
