#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (; *(str + i) != '\0'; i += 2)
	{
		if (*(str + i) == NULL)
			break;

		_putchar(*(str + i));
	}
	_putchar('\n');
}