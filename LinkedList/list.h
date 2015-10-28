#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct infotype{
	int id;
	char nama[15];
	char departemen[20];
	char gedung[20];
};

typedef struct elmtSingleLinkedList* address;

struct elmtSingleLinkedList{
	infotype info;
	address next;
};

struct SingleLinkedList{
	address first;
};

address Alokasi(infotype x);
void createEmptyList(SingleLinkedList *L);
bool isListEmpty(SingleLinkedList L);
void Dealokasi(address P);
address findElementList(char nama[], SingleLinkedList L);
void insertFirst(SingleLinkedList *L, infotype x);
void insertLast(SingleLinkedList *L, infotype x);
void insertAfter(SingleLinkedList *L, address Predecessor, infotype x);
void deleteFirst(SingleLinkedList *L);
void deleteLast(SingleLinkedList *L);
void deleteAfter(SingleLinkedList *L, address Predecessor);
void printAll(SingleLinkedList L);



#endif // LIST_H_INCLUDED
