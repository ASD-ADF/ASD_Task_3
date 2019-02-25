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
    address P, Q;
    P = allocate(x);
    if (first(L)== NULL)
    {
        insertFirst(L,P);
    }
    else
    {
        Q = findElm(L, info(P));
        if (Q == NULL)
        {
            address last = first(L);
            while (next(last)!= NULL)
            {
                last = next(last);
            }
            if ((info(P).ID) <= (info(first(L)).ID))
            {
                insertFirst(L,P);
            }
            else if ((info(P).ID) >= (info(last).ID))
            {
                insertLast(L,P);
            }
            else
            {
                Q = first(L);
                while ((info(next(Q)).ID) < (info(P).ID))
                {
                    Q = next(Q);
                }
                insertAfter(L,Q,P);
            }
        }
        else
        {
            cout << "[Duplikat ID]"<<endl;
        }
    }
    //----------------------------------------

    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    infotype x;
    x.ID = id_x;
    P = findElm(L, x);
    if (P != NULL)
    {
        if (P == first(L))
        {
            deleteFirst(L, P);
        }
        else if (next(P) == NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            Prec = first(L);
            while(next(Prec) != P)
            {
                Prec = next(Prec);
            }
            deleteAfter(L, Prec, P);
            //Prec = prev(P);
            //deleteAfter(L, Prec, P);
        }
    }
    else
    {
        cout << "[ID tidak ditemukan]"<<endl;
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
    List LTemp;
    createList(LTemp);
    while(first(L) != NULL)
    {
        deleteFirst(L,P);
        if (info(P).score > 80)
        {
            insertAndSort(L2,info(P));
        }else{
            insertAndSort(LTemp,info(P));
        }
    }
    L = LTemp;
    //----------------------------------------
}
