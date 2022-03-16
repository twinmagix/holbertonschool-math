/*
* 0-display.c
* Author: Sazi Ndwandwe
* Date: March 16, 2022
*/
#include "holberton.h"
#include <stdio.h>

/**
* conjugate - return the conjugate
* @c: structure complex
* Return: complex
*/

complex conjugate(complex c)
{
c.im *= -1;
return (c);
}
