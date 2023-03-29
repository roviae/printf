#include "main.h"
#include <stdarg.h>

struct global
{
	char *format;
	int i;
	int j;
	int count;
	va_list args;
	char *str;
} id2;

/**
 * numlen - returns the length of a number
 * @num: number to be checked
 * Return: length of number
 */

int _numlen(unsigned long int num)
{
	int len = 0;

	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

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
void _printunsigned(void)
{
	int i, size;
	int *num;

	unsigned long int num = va_arg(id2.args, unsigned long int);

	if (num == 0)
		num = 0;
	size = _numlen(num);
	if (num > 0)
	{
	        for (i = 0; i < size; i++)
			puts(num % 10 + '0');
	}	                
}
