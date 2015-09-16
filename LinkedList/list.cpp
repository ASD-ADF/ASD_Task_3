#include <iostream>
#include "list.h"

void delfirst(list *L,address *P){
    *P=(*L).first;
    (*L).first=next((*L).first);
    next(*P)=NULL;
    delete P;
}

void delafter(list *L, address *P, address*S){
address Q;
    Q=(*L).first;
    while(Q!=*S) {
        Q=next(Q);
    }
    *P=next(Q);
    next(Q)=NULL;
    delete P;
}
