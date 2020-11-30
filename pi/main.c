#include <stdio.h>
#include <string.h>
#include "pi.h"
#include "amoi.h"

int main()
{
  for (int n = 10; n <= 100000000; n*=10)
    printf("\t n = %7i : pi= %.14f\n", n, Leibniz(n));
}
