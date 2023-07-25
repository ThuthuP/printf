#include "main.h"
/**
 * is_printable - This function determines if a character is printable.
 * @c: The character to be assessed.
 *
 * Return: 1 if the character is printable, 0 otherwise.
 */
int is_printable(char c)
{
return (c >= 32 && c < 127);
}
/**
 * append_hexa_code - The buffer is appended with ASCII in hex code.
 * @buffer: The array of char used to store the outcome.
 * @i: The index at which to start appending.
 * @ascii_code: The ASCII code to convert to hexadecimal.
 *
 * Return: Always 3.
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
const char hex_map[] = "0123456789ABCDEF";
/* The hexadecimal format code is always 2 digits long */
if (ascii_code < 0)
ascii_code *= -1;
buffer[i++] = '\\';
buffer[i++] = 'x';
buffer[i++] = hex_map[ascii_code / 16];
buffer[i] = hex_map[ascii_code % 16];
return (3);
}
/**
* is_digit - Checks if a character is a digit.
* @c: The character to be evaluated.
*
* Return: 1 if the character is a digit, 0 otherwise.
*/
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}
/**
 * convert_size_number - Casts a number to the specified size.
 * @num: The number to be casted.
 * @size: The number indicating the type to be casted.
 *
 * Return: Casted value of num.
 */
long int convert_size_number(long int num, int size)
{
switch (size)
{
case S_LONG:
return (num);
case S_SHORT:
return ((short)num);
default:
return ((int)num);
}
}
/**
 * convert_size_unsgnd - It converts an unsigned integer to the provided size.
 * @num: The casted unsigned number.
 * @size: The num indicate the sort of cast  performed.
 *
 * Return: Casted value of num.
 */
unsigned long int convert_size_unsgnd(unsigned long int num, int size)
{
switch (size)
{
case S_LONG:
return (num);
case S_SHORT:
return ((unsigned short)num);
default:
return ((unsigned int)num);
}
}
