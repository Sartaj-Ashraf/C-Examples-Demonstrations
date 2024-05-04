#include <stdio.h>

int main()

{
  int n;

  int i;

  printf("Enter a positive integer: ");
  scanf("%d\n", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d\n", i); // conditon code to print on the board
  }
}
