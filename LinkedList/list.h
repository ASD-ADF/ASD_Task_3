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
    char nim[30];
    char nama[30];
    char kelas[30];
    char jrsn [30];
    char angkatan [20] ;
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
void insertlast(list *l, address p);

void deletefirst(list *l,address p);
void deleteafter(list *l,address p,address prec);
void deletelast(list *l,address p);

void viewList(list *l);
void mahasiswa (infotype *x);
address searchElement(list *l,infotype x);


#endif // LIST_H_INCLUDED
