#include <iostream>
using namespace std;

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#define Nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define first(L) ((L).first)



struct jam {
    int hh,mm,ss;
};

struct absen {
    pegawai pgw;
    jam jam_masuk;
};

typedef struct elmlist *address;

struct elmlist {
    absen info;
    address next;
};

struct list {
    address first;
};

address BuatData (absen Buat_absen);
void InputData (absen *Buat_absen);
void InsertFirst(list *L, address P);
void InsertLast(list *L, address P);
void InsertAfter(list *L, address P);
void deleteFirst(list *L, address P);
void deleteLast(list *L, address P);
void deleteAfter(list *L, address P);
void Jumlah (list *L);
address searchElement (list *L);
void searchData (list *L);

#endif // LIST_H_INCLUDED
