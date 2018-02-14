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

    if (first(L)==NULL){
        insertFirst(L,P);
    }else if(L.first->info.id >= P->info.id){
        insertFirst(L,P);
    }else if(L.first->info.id <= P->info.id) {
        address Q = first(L);
        while(P->info.id <= Q->info.id && next(first(L))!=NULL){
                Q = next(Q);
        }
        next(P)=next(Q);
        next(Q)=P;
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
    Prec = first(L);
    P = findElm(L,x);

    if(P != NULL){
        if(P == first(L)){
            deleteFirst(L,P);
        }else if(next(P)!=NULL){
            while(next(Prec)!=P){
                Prec = next(Prec);
            }
            next(Prec)=next(P);
            P = NULL;
        }else{
            deleteLast(L,P);
        }
    }else{
        cout<<P->info.id<<" is not exist"<<endl;
    }


    //----------------------------------------
}
