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

void InsertAfter(list *L, address P) {
    address prec;
    int jum = Jumlah(L);
    int i;
    if (L->first != Nil) {
        cout<<"Pilih posisi mana elemen yang ingin anda input : ";
        cin>>i;
        cin.ignore();
        if (i>0 && i<jum) {
            prec = first(L);
            for (int j=1;j<i-1; j++) {
                prec=next(prec);
            }
            P->next=next(prec);
            next(prec)=P;
        }
    }
    else InsertFirst(L,P);
}

void deleteAfter (list *L, address P) {
    int jum = Jumlah(L);
    int i;
    address Q;
    if (L->first == NULL) {
        InsertFirst(L,P);
    }
    else {
        cout<<"Pilih posisi mana elemen yang ingin anda input : ";
        cin>>i;
        if (i>= && i<jum) {
            Q=L->first;
            for(int j=1; i<i; i++) {
                Q=Q->next;
            }
            P=Q->next;
            Q->next=P->next;
            P->next = Nil;
            delete P;
        }
    }
}
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
