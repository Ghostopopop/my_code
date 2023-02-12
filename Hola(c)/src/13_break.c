#include <stdio.h>
int main()
{
  int i;

  for (i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      break;
    }
    printf("%d\n", i);
  }

  int j = 0;

  while (j < 10)
  {
    if (j == 4)
    {
      break;
    }
    printf("%d\n", j);
    j++;
  }

  return 0;
}