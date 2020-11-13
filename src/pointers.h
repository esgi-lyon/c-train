#include <stdlib.h>

#ifndef POINTERS_H_INCLUDED
#define POINTERS_H_INCLUDED

#define BUFF_SIZE 512

/**
 * @brief Terrible pointer example
 */
void memoryPlay()
{
  // Simple memory allocation
  float* p1 = malloc(sizeof(BUFF_SIZE));
  printf("\naddress pointed to by pointer 3 : %p", p1);
  printf("\npointer 3 address %p", &p1);
  // Allow a memory of max int authorized bits
  int* p2;
  p2 = (int*) malloc(sizeof(int));

  // dynamic allocation (avoid segmentation error)
  float* p4 = malloc(sizeof(*p4));
  if (p4 == NULL)
    goto end; // WTF goto

  printf("\npointer address %p, %.6f", (void *) &p4, *p4);

  // complex calc
  int i = 1, j = 3;
  p2 = (int *) malloc(2 * sizeof(int));
  *p2 = i;
  *(p2 + 1) = j;
  printf("\np = %ld \t *p=%d \t p+1=%ld\t*(p+1)=%d", (long) p2, *p2, (long) p2+1, *(p2+1));

  return;

  end:
    printf("\npointer is null");
    free(p4);
}

#endif
