#include <stdio.h>
#include <unistd.h>
/**
 * main -Prints out the last part of a quote in thhe standard error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dore Korpar, 2015-10-19\n", 58);
	return (1);
}
