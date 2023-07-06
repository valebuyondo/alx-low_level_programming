int is_prime_number_recursive(int n, int divisor);
/**
 * is_prime_number -checks whether n is a prime number
 * @n: the number to be checked
 * Return: returns 0 when n is less or equal to 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_recursive(n, n / 2));
}
/**
 * is_prime_number_recursive - checks whether n is a prime number
 * @n: the number to be checked
 * @divisor: checks the prime number
 * Return: returns 1 when ist a prime number and 0 when not
 */
int is_prime_number_recursive(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number_recursive(n, divisor - 1));
}

