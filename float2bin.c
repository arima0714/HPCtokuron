#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float f = 2.5f;
  int i;
  i = *((int *)&f);
  printf("float=%16.8e\n",f);
  printf("int=%08x\n",i);

  return 0;
}
