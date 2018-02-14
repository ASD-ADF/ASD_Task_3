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
    cout<<"your code here"<<endl;
    if (first(L) == NULL){
        insertFirst(L,P);
    }
    else{
       if(info(P).id < info(first(L))){
        insertFirst(L, P);
       }
       else{
            address Q = first(L);
        while (next(Q) != NULL){
            if (info(Q).id > info(P)){
                insertAfter(Q, P)
                next(Q) = NULL:
            }
            Q = next(Q);
        }
        if (next(Q) == NULL){
            insertLast(L, P);
        }
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
    cout<<"your code here"<<endl;
    address Y;
    Y = findElm(L, x);
    if (Y == first(L)){
        deleteFirst(L, Y);
    }
    else if (next(Y) == NULL){
        deleteLast(L, Y);
    }
    else{
        deleteAfter(L, Y);
    }

    //----------------------------------------
}
