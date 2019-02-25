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
address Prec = first(L);
    address Q = first(L);
    address P;
    P = findElm(L,x);
    if(first(L)==NULL)
    {
        insertFirst(L,P);
    }else if (first(L)!=NULL)
    {
        while (next(Q)!=NULL)
        {
            Q=next(Q);
        }
        if (info(P).id < info(first(L)).id)
        {
            insertFirst(L,P);
        }else if(info(P).id > info(Q).id)
        {
            insertLast(L,P);
        }else
        {
            while(info(Prec).id<=info(P).id)
            {
                Prec = next(Prec);
            }
            insertAfter(L,Prec,P);
        }
    }
    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    P = findElm(L,x);
    if(P==first(L)){
        deleteFirst(L,P);
    }else if (next(P)==NULL){
        deleteLast(L,P);
    }else{
        Prec = first(L);
        while(next(Prec)!= P){
            Prec=next(Prec);
        }
        deleteAfter(L,Prec,P);
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
    while (P!=NULL)
    {
        if (info(P).score>=80)
        {
            insertFirst(L2,P);
            P = next(P);
        }
        else
        {
            P = next(P);
        }
    }
    //----------------------------------------
}
