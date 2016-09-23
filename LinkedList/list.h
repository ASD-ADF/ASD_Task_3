#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;


struct stuff
{
	int id;
	string nama;
	string pekerjaan;
	string tempat_kerja;
	double gaji;
	string transportasi;
};

typedef stuff infotype;
typedef struct elmlist *address;

struct elmlist{
        infotype info;
        address next;
};

struct List{
        address first;
};

address createElement(stuff addstuff);
void createPekerjaan (stuff *addstuff);
int countelement (List *L);
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
address findElm(List L, infotype x);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void printInfo(List L);
void insertAfter(address Prec, address P);
void deleteAfter(address Prec, address &P);


#endif // LIST_H_INCLUDED
