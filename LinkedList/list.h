#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <string>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

using namespace std;

typedef struct staff{
    int id;
    string nama;
    string jabatan;
    string departemen;
    int gaji;
}infotype;

typedef struct elmlist *address;
typedef struct elmlist{
    infotype info;
    address next;
};

typedef struct list{
    address first;
};

void createList(list *L);
address allocate(infotype x);
void insertFirst(list *L, address P);
void insertLast(list *L, address P);
void insertAfter(list *L, address P, address prec);
void deleteFirst(list *L, address P);
void deleteLast(list *L, address P);
void deleteAfter(list *L, address P, address Prec);
address searchElement(list *L, infotype x);
void viewList(list L);
address searchSentinel(list *L, infotype x);


#endif // LIST_H_INCLUDED
