#include "main.h"

/**
 * jack_bauer - Prints evey minute of the day of Jack
 * Return: ...
 */

void jack_bauer(void)
{
	int e, f, g, h;

	for (e = 0; e <= 2; e++)
	{
	for (f = 0; f <= 9; f++)
	{
	if ((e <= 1 && f <= 9) || (e <= 2 && f <= 3))
	{
	for (g = 0; g <= 5; g++)
	{
	for (h = 0; h <= 9; g++)
	{
	_putchar(e + '0');
	_putchar(f + '0');
	_putchar(58);
	_putchar(g + '0');
	_putchar(h + '0');
	_putchar('\n');
	}
}
