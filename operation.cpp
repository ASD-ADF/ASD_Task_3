#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, address P) {
    address Prec = first(L);
    address Q = first(L);
    if (first(L)== NULL){
        insertFirst(L,P);
    }else if (first(L) != NULL){
        while (next(Q) != NULL){
            Q = next (Q);
        }
        if (info(P).ID < info(first(L)).ID){
            insertFirst(L,P);
        }else if (info(P).ID > info(Q).ID){
            insertLast(L,P);
        }else{
            while(info(Prec).ID <= info(P).ID){
                Prec = next(Prec);
            }
            insertAfter(Prec,P);
        }
    }
    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = x.id is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    address Q;
    P = findElm(L,x);
    if( P = first(L)){
        deleteFirst(L,P);
    }else if(next(P) == NULL){
        deleteLast(L,P);
    }else{
        while(next(Q) != P){
            Q = next(Q);
        }
    }
    deleteAfter(Q,P);
    //----------------------------------------
}
