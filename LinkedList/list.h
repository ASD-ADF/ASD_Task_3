#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct infotype
{
    char no_hp[14], nama [20], alamat[100],email[50];
    int ID_customer;
};

typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct list
{
    address first;
};

void createList (list *l);
void dealokasi (address p);
address alokasi (infotype x);

void InsertFirst (list *l, address p);
void InsertLast (list *l, address p);
void InsertAfter (list *l,address q, address p);

void deleteFirst (list *l, address p);
void deleteLast (list *l, address p);
void deleteAfter (list *l,address q, address p);

address searchCustomer(list l, infotype x);
void printInfo (list l);
void insertionsort(list l);
#endif // LIST_H_INCLUDED
