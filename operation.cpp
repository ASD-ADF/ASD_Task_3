#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert a new element into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID.
    *      procedure must also check if such ID is already exists (No Duplicate ID).
    *      If new data has duplicate ID, new data is rejected.
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    address P,Q;
    P = allocate(x);
    if (first(L)==NULL || info(P).ID < info(first(L)).ID){
        insertFirst(L,P);
    } else {
        Q=first(L);
        while (info(Q).ID < info(P).ID && Q!=NULL){
            Q = next(Q);
            cout<<"xxx ";
        }
        cout<<"yyy ";
        insertAfter(L,Q,P);
    }
    //----------------------------------------
}


void deletebyID(List &L, int x_id) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Q, P;
    //-------------your code here-------------
    infotype x;
    x.ID=x_id;
    P = findElm(L,x);
    if(P==first(L)){
        deleteFirst(L,P);
    }else if (next(P)== NULL){
        deleteLast(L,P);
    }else{
        Q = first(L);
        while(next(Q)!= P){
            Q=next(Q);
        }
        deleteAfter(L,Q,P);
    }
    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------
    createList(L2);
    P = first(L);
    while (P!=NULL){
        if (info(P).score>=80){
            insertFirst(L2,P);
            P = next(P);
        } else {
            P = next(P);
        }
    }
    //----------------------------------------
}
