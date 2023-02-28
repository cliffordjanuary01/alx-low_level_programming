#include "main.h"

/**
 * _isalpha - checks the alphabetic order
 * @c: the character to be checked
 * Retrun: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
