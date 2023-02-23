#include "main.h"

/**
 * mul - input
 * Description: multiplies 2 numbers
 * @a: first number
 * @b: second number
 * Return: the answer
 */
int mul(int a, int b)
{
    int result = 0;
    int i;
    
    if (b < 0) {
        a = -a;
        b = -b;
    }
    
    for (i = 0; i < b; i++) {
        result += a;
    }
    
    return result;
}
