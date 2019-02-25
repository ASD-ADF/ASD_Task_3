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

    //-------------your code AChere-------------
   address P;
    P = allocate(x);
    if (first(L)== NULL)
    {
        insertFirst(L,P);
    }
    else
    {
        address Q = findElm(L, info(P));
        if (Q == NULL)
        {
            address last = first(L);
            while (next(last)!= NULL)
            {
                last = next(last);
            }

            if (info(P).id <= info(first(L)).id)
            {
                insertFirst(L,P);
            }
            else if (info(P).id >= info(last).id)
            {
                insertLast(L,P);
            }
            else
            {
                Q = first(L);
                while (info(next(Q)).id < info(P).id)
                {
                    Q = next(Q);
                }
                insertAfter(L,Q,P);
            }
        }
        else
        {
            cout << "Duplikat";
        }
    }
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
        if (info(P).score >= 80)
        {
            insertFirst(L2,P);

        }
        P = next(P);
    }
    //----------------------------------------
}
