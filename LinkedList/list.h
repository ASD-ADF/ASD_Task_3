#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define next(p) p->next
#define info(p) p->info

//Jangan lupa edit main.cpp dan list.cppnya . SEMANGAT

struct buku
{
    char judul[10],penerbit[50],pengarang[50],jenis[50];
    int stock,ID;
};

typedef buku infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct list{
    address first;
};

void createList(list *l);
void dealokasi (address p);
address alokasi (infotype x);
void insertFirst (list *l, address p);
void insertLast (list *l,address p);
void insertAfter (list *l,address q, address p);
void viewList (list l);

void deleteFirst (list &l,address p);
void deleteLast(list &l,address p);
void deleteAfter(address q, address *p)
address searchBuku(list l, infotype x);


#endif // LIST_H_INCLUDED
