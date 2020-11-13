#include <stdio.h>
#include <string.h>
#include "functions.h"
#include "types.h"
#include "pointers.h"
#include "bit.h"

int main(int argc, char **argv)
{
  if (argc > 0) {
    char const *option =  argv[1];
    printf("opt : %s", option);
  }

  int p = 4;
  printf("\nAddress of var is: %p", &p);
  printf("\n%d", Sum(p, 4));
  struct Books Book1;
  strcpy(Book1.author, "Nuha Ali");
  Book1.id = 1;

  printf("\nWeektype day id : %d", Mon);

  pointerPlay();
  bitPlay();

  return TRUE;
}
