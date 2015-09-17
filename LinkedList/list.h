#include <iostream>
using namespace std;

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#define Nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define first(L) ((L).first)

void InsertFirst(list *L, address P);
void InsertLast(list *L, address P);
void deleteFirst(list *L, address P);
void deleteLast(list *L, address P);

#endif // LIST_H_INCLUDED
