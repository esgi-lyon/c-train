#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

typedef struct Books {
    char title[50];
    char author[50];
    int id;
} Books;


// custom types
typedef int *pt_int;



#endif

// aliases types
#define TRUE 0;
#define FALSE 1;