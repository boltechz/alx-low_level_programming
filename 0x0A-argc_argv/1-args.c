#include <stdio.h>
/**
 * main - prints the number of agruments passed into it.
 * @argc: number of comman line arguments.
 * @argv: array that contains the program comman line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
