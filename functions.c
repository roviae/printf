#include "main.h"
#include <stdarg.h>

/**
 * _printint - printf int specifiers
 *
 * Return: void
 */
void _printint(void)
{
    va_list args;
    long int n = va_arg(args, long int);
    unsigned long int num;
    int digits = 0;
    unsigned long int temp;

    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');
        num = (unsigned long int)(-n);
    } else {
        num = (unsigned long int)n;
    }

    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    while (num > 0) {
        unsigned long int digit = num % 10;
        num /= 10;
        _putchar('0' + digit);
    }

    if (n < 0) {
        _putchar('-');
    }
}

/**
 * _printunsigned - printf unsigned decimal num
 * @global: arguement list in global struct
 *
 * Return: int
 */
int _printunsigned(void)
{
        unsigned long int num = va_arg(id.args, unsigned long int);

        if (num == 0)
                num = 0;

        if (num > 0)
                {
                        _putchar(num);
                }

        return (num);
}
