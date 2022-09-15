#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character 
 *
 * Return: gives boolean
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
		return (0);
}
