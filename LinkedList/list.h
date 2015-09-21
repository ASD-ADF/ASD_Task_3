#ifndef TUGAS_H_INCLUDED
#define TUGAS_H_INCLUDED
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct pegawai
{
    int id;
    string nama;
    string alamat;
    string jabatan;
    string email;
};

struct element
{
    pegawai info;
    element *next;
    element *prec;
};

struct List
{
    struct element *head;
};

void menu();
element *alokasi(element x);
element *search_data(List *L,int id);
void input_data(pegawai peg);
void create_list(List *L);
void insert_first(List *L, element *p);
void insert_after(List *L, element *p, element *prec);
void insert_last(List *L, element *p);
void delete_first(List *L,element *p);
void delete_after(List *L, element *p, element *prec);
void delete_last(List *L, element *p);
void view_all(List *L);
void search_data(List *L);
element searchSentinel(List *L, element x);
void insertionSort(List *L);

#endif // TUGAS_H_INCLUDED

