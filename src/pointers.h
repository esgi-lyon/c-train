#include <stdlib.h>

#ifndef POINTERS_H_INCLUDED
#define POINTERS_H_INCLUDED

/**
 * @brief Terrible pointer example
 *
 */
void pointerPlay()
{
  // allocation dynamique pour éviter une erreur de segmentation
  float* p4 = malloc(sizeof(*p4));
  if (p4 == NULL)
    goto end; // WTF goto

  printf("\npointer address %p, %.6f", (void *) &p4, *p4);
  return;

  end:
    printf("\npointer is null");
    free(p4);
}

#endif
