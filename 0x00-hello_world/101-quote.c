#include <unistd.h>

/**
 * main - entry point
 * Description: A progrom that prints a text followed by a new line to a standard error
 * Return: returns 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
