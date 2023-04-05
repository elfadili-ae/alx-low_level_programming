#include "main.h"

/**
* prime_check - prime number checker
* @n: number
* @i: divider
* Return: 1 (prime) 0 (otherwise)
*/
int prime_check(int n, int i)
{
	if (n % i == 0)

		return (0);
	i++;
	if (i < n)
		prime_check(n, i);
	return (1);
}

/**
 * is_prime_number - check if the number is prime number
 * @n: number
 * Return: 1 (prime) 0 (otherwise)
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 1)
		return (1);
	if (n % i == 0)
		return (0);
	i++;
	return (prime_check(n, i));
}
