#include "main.h"

/**
 * printbin - unsigned int argument is converted to binary
 * Return: void
*/

void _printbin(void)
{
	unsigned int num, div, length;
	
	num = va_arg(id.args, unsigned int);
	div = 1;
	length = 0;
	/*This loop checks number of digits in that number*/
	while (num / div > 0)
	{
		div = div * 2;
		length++;
	}
	div = div / 2;
	/*This loop prints the binary number*/
	while (div > 0)
	{
		if (num / div == 0)
			_putchar('0');
		else
		{
			_putchar('1');
			num = num - div;
		}
		div = div / 2;
		id.count++;
	}
}

/**
 * printpointer - prints the address of a pointer
 * Return: void
*/

void _printpointer(void)
{
	void *p = va_arg(id.args, void *);
	int i, digit;
	char hex_digits[] = "0123456789abcdef";
	int num_digits = sizeof(unsigned long int) * 2;
	unsigned long int value = (unsigned long int)p;
	
	_putchar('0');
	_putchar('x');
	for (i = num_digits - 1; i >= 0; i--)
	{
		digit = (value >> (i * 4)) & 0xf;
		_putchar(hex_digits[digit]);
	}	
}