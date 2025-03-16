#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - funcion auxiliar
 * @s: puntero
 * Return: retorna len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - funcion auxiliar
 * @dest: puntero
 * @src: puntero
 * Return: retorna dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - Creates a new dog t
 * @name: nombre
 * @age: edad
 * @owner: propietario
 * Return: return new d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *n_copy, *o_copy;
	int n_len, o_len;

	if (!name || !owner)
	{
		return (NULL);
	}
	n_len = _strlen(name) + 1;
	o_len = _strlen(owner) + 1;
	new_d = malloc(sizeof(dog_t));
	if (!new_d)
	{
		return (NULL);
	}
	n_copy = malloc(n_len);
	if (!n_copy)
	{
		free(new_d);
		return (NULL);
	}
	_strcpy(n_copy, name);
	o_copy = malloc(o_len);
	if (!o_copy)
	{
		free(n_copy);
		free(new_d);
		return (NULL);
	}
	_strcpy(o_copy, owner);
	new_d->name = n_copy;
	new_d->age = age;
	new_d->owner = o_copy;

	return (new_d);
}
