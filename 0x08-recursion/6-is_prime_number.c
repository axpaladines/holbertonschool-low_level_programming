#include "main.h"

/**
* prime - function in is_prime
* @a: number to check prime
* @b: auxiliar number
* Return: b if is a divisor of a
*/

int prime(int a, int b)
{
	if (a  % b == 0 && b != a)
		return (0);
	else if (b < a)
		return (prime(a, b + 1));
	else
		return (1);
}

/**
* is_prime_number - return the input integer
* @n: number to check
* Return: if is prime
*/

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else
		return (prime(n, i));
}
