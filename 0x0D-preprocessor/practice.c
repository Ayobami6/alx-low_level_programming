#include <stdio.h>

int main(void)
{
    typedef char *string;

    string name;

    char *nemName = "Ayoooooooooooooooo";

    name = nemName;

    printf("name is %s\n", name);
}