#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define nil NULL
#define next(p) (p)->next
#define info(p) (p)->info
#define first(l) ((l).first)

using namespace std;

struct infotype
{
    char id[30];
    char nama[30];
    char merk[30];
    char warna [30];
    char napem [20] ;
};

typedef struct elmlist *address;

typedef struct elmlist
{
    infotype info;
    address next;
};

typedef struct list
{
    address first;
};

void insertfirst(list *l, address p);
void insertafter(list *l, address p, address prec);


#endif // LIST_H_INCLUDED
