#include <stdio.h>

int main(void)
{
	char *string = "Ayobami";
	unsigned int sum = 0; 
	for (int i = 0;  string[i] != '\0';  i++)
	{
		sum += string[i];
	}
	printf("%d\n", sum);
}

