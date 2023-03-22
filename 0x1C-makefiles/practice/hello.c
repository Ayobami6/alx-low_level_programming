#include <stdio.h>
#include <stdlib.h>

/* typedef char *string; */
int main(void)
{
  typedef char *string;

  string input;
  /* char name; */
  /* char s[4]; */
  /* input = "Ayo"; */
  printf("Enter input: ");
  scanf("%s", input);
  printf("Hello, %s\n", input);

}
