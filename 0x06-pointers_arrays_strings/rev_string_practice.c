#include <stdio.h>

void reverse_array(int *a, int n);

int main(void)
{
    int list[7] = {1, 2, 3, 4, 5, 6, 7};

    reverse_array(list, 7);
}

void reverse_array(int *a, int n)
{
    int i;

    for (i = 0; i < n && a[i] != '\0'; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    int j = 0;

    while (a[i] != a[0])
    {
        if (i != 0 && i != 7)
            printf(", ");
        --i;
        printf("%d", a[i]);
    }
    printf("\n");
}