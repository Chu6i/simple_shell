#include <stdio.h>

/**
 * fibonacci - recursive function that generates Fibonacci sequence
 * @num: current number in sequence
 * @prev: previous number in sequence
 * @limit: upper limit for sequence
 *
 * Return: void
 */
void fibonacci(int num, int prev, int limit)
{
	if (num > limit)
		return;
	printf("%d, ", num);
	fibonacci(num + prev, num, limit);
}

/**
 * main - entry point for program
 *
 * Return: 0 on success
 */
int main(void)
{
	int limit;

	printf("Enter the upper limit for the Fibonacci sequence: ");
	scanf("%d", &limit);
	fibonacci(1, 0, limit);
	printf("\n");

	return (0);
}
