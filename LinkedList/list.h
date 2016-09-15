#ifndef SINGLELINKLIST_H_INCLUDED
#define SINGLELINKLIST_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#define nil NULL
#define next(p) (p)->next
#define info(p) (p)->info
#define first(l) ((l).first)

using namespace std;

typedef struct infotype
{
    char jur[20];
    char ketua[20];
    char fak[20];
    int jmlang;
    int jmldiv;
};
typedef struct tElmlist *address;

typedef struct tElmlist
{
    infotype info;
    address next;
};
typedef struct list
{
    address first;
};

void createlist(list *l);
void dealokasi (address p);
address alokasi(infotype x);

void insertfirst(list *l, address p);
void insertlast(list *l, address p);
void insertafter(list* l,address q, address p);

void deletefirst(list *l,address p);
void deletelast(list *l,address p);
void deleteafter(list *l,address q,address *p);

address searchdata(list l, infotype x);
address searchDatabefore(list l, infotype);
void updatedata(address p, infotype y);
void printinfo(list l);
void inputdata(infotype x);
void menuapp();

#endif // SINGLELINKLIST_H_INCLUDED
