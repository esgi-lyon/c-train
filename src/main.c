#include <stdio.h>
#include <string.h>
#include "functions.h"
#include "types.h"
#include "pointers.h"

int main(int argc, char **argv)
{
  int p = 4;
  printf("Address of var is: %p", &p);
  printf("\n%d", Sum(p, 4));
  struct Books Book1;
  strcpy(Book1.author, "Nuha Ali"); 
  Book1.id = 1;
  pointerPlay();

  return TRUE;
}