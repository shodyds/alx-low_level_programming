#include "dog.h"

/**
 * _strlen - Function count number of characters
 * @s: pointer to the first element of the character
 * Return: lenght of character
 */
int _strlen(char *s)
{
        int count = 0;

        while (*s != '\0')
        {
                count++;
                s++;
        }
        return (count);
}
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
        int l = 0;
        int x = 0;

        while (*(src + l) != '\0')
        {
                l++;
        }
        for ( ; x < l ; x++)
        {
                dest[x] = src[x];
        }
        dest[l] = '\0';
        return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;
	
	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (len1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (len2 + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}
	_strcpy((*dog).name, name);
	_strcpy((*dog).owner, owner);
	(*dog).age = age;
	return (dog);
}
