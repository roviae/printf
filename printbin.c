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

