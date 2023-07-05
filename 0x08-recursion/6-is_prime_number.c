/**
 * prime - Function to be used recursively.
 * @n: The value to increase.
 * @termination: The value to check.
 * Return: 1 when input value prime number, else 0.
 */
int prime(int n, int termination)
{
	if (termination % n == 0 || termination < 2)
		return (0);

	else if (n == termination - 1)
		return (1);

	else if (termination > n)
		return (prime(n + 1, termination));

	return (1);
}
/**
 * is_prime_number - Function that gets 1 when the input is a prime number,
 * else return 0.
 * @n: The prime number value.
 * Return: 1 when input value prime number, else 0.
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
