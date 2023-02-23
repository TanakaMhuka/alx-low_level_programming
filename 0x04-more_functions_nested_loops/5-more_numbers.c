#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
    int num, row;

    for (row = 0; row < 10; row++)
    {
        for (num = 0; num <= 14; num++)
        {
            if (num >= 10)
            {
                _putchar((num / 10) + '0');
            }
            _putchar((num % 10) + '0');
        }
        _putchar('\n');
    }
}	
