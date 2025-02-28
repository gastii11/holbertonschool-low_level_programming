#include "main.h"
#include <limits.h>
/**
 * _atoi - cadena a entero
 * @s: puntero
 *
 * Return: retorn g * j
 */
int _atoi(char *s)
{
	int g = 0;
	int j = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			j *= -1;
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		if (g > INT_MAX / 10 ||
			(g == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			return (j == 1 ? INT_MAX : INT_MIN);
		}
		g = g * 10 + (s[i] - '0');
		i++;
	}

	return (g * j);
}
