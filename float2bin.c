#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  float f = 2.5f;
  int i;
  i = *((int *)&f);
  printf("float=%16.8e\n",f);
  printf("int=%08x\n",i);

  i = 0x52300000;
  f = *((float *)&i);
  printf("int=%08x\n",i);
  printf("float=%16.8e\n",f);

  printf("log2=%f\n", log(f)/log(2));

  return 0;
}
