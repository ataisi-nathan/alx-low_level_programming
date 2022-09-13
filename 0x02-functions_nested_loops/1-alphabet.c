#include "main.h"

/**
 * print_alphabet - Print alphabet in lower case 
 * followed by a new line
 *
 * Return: Always return 0
 */
void print_alphabet(void)
{
        char letter = 'a';
  
        while (letter <= 'z')
        {
                _putchar(letter);
                letter++;
        }
        _putchar('\n');
}
