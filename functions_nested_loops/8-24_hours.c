#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
	{
		_putchar((hour / 10) + '0');    /* Print tens of hours */
		_putchar((hour % 10) + '0');    /* Print units of hours */
		_putchar(':');
		_putchar((minute / 10) + '0');  /* Print tens of minutes */
		_putchar((minute % 10) + '0');  /* Print units of minutes */
		_putchar('\n');
		}
	}
}
