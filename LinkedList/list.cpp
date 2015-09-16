#include <iostream>
#include "list.h"

void insertafter(list *L, address P, address S) {
    address Q;
    Q=(*L).first;
    while (info(Q).id!=info(S).id) {
            Q=next(Q);
    }
    next(P)=NULL;
    next(P)=next(Q);
    next(Q)=P;

}

void dellast(list *L,address *P) {
    address Q;
    Q=(*L).first;
    while(next(next(Q))!=NULL) {
        Q=next(Q);
    }
    *P=next(Q);
    next(Q)=NULL;
    delete P;

}
