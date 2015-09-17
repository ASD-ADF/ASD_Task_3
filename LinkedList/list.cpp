#include<iostream>
#include"list.h"

using namespace std;
void InsertFirst(list *L, address P) {
    next(P) = (*L).first;
    (*L).first = P;
};

void InsertLast(list *L, address P) {
    address Q;
    Q= L->first;
    if (Q->next == Nil){
        InsertFirst(L,P);
    }
    else {
        while (Q->next != Nil) {
            Q=next(Q);
        }
        Q->next=P;
    }
};

void deleteFirst (list *L, address P) {
    if (((L).first)!=Nil) {
        P=((L).first);
        L->first=P->next;
        P->next=Nil;
        delete P;
    }
}

void deleteLast (list *L, address P) {
    address Q;
    if (L->first == NULL) {
        InsertFirst(L,P);
    }
    else {
        P= L->first;
        while (P->next != Nil) {
            Q = P;
            P = P->next;
        }
        Q->next=NULL;
        delete P;
    }
}
