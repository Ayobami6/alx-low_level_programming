#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
    int total, i, j;
    int num;

    total = 0;
    if (argc > 1)
    {
        for (i = 1; argv[i]; i++)
        {
            for (j = 0; argv[i][j] != '\0'; j++)
            {
                if (argv[i][j] >= '0' && argv[i][j] <= '9')
                {
                    num = atoi(argv[i]);
                    total += num;
                }

                else
                {
                    printf("Error\n");
                    return (1);
                }
            }
        }
    }
    printf("%d\n", total);
    return (0);
}
