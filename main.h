#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _putchar(char c);
void _printint(void);
void _printchar(void);
void _printstr(void);
void _printbin(void);
void _printpointer(void);
void _printunsigned(void);
int _numlen(unsigned long int num);

#endif