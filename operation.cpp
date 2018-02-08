#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, address P) {
    /**
    * IS : List may be empty
    * PR : insert an element pointed by P into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID
    *      procedure must also check if such ID is already exists (No Duplicate ID)
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    address Q, Prec, duplicate;
    duplicate = NULL;

    duplicate = findElm(L,info(P));

    if(duplicate != NULL){
        cout<<"Can't input same ID!";
    }
    else{
        if(first(L) != NULL){
            Q = first(L);
            while(next(Q) != NULL){
                Q = next(Q);
            }
        }
        if((first(L) == NULL) || (info(P).stdntid < info(first(L)).stdntid)){
            insertFirst(L,P);
        }
        else if(info(P).stdntid > info(Q).stdntid){
            insertLast(L,P);
        }
        else{
            Prec = first(L);
            while(info(next(Prec)).stdntid <= info(P).stdntid){
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
    P = findElm(L,x);
    if(P == first(L)){
        deleteFirst(L,P);
    }
    else if(next(P) == NULL){
        deleteLast(L,P);
    }
    else{
        Prec = first(L);
        while(next(Prec) != P){
            Prec = next(Prec);
        }
        deleteAfter(Prec,P);
    }
    //----------------------------------------
}
