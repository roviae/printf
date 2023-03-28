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
 * printunsigned - prints unsigned int
 * Return: void
*/

void _printunsigned(void)
{
	unsigned int num, div, length;
	
	num = va_arg(id.args, unsigned int);
	div = 1;
	length = 0;
	/*This loop checks number of digits in that number*/
	while (num / div > 0)
	{
		div = div * 10;
		length++;
	}
	div = div / 10;
	/*This loop prints the unsigned number*/
	while (div > 0)
	{
		_putchar((num / div) + '0');
		num = num % div;
		div = div / 10;
		id.count++;
	}
}
