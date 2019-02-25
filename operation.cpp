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

//    -------------your code here-------------
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
            if (info(P).ID <= info(first(L)).ID)
            {
                insertFirst(L,P);
            }
            else if (info(P).ID >= info(last).ID)
            {
                insertLast(L,P);
            }
            else
            {
                Q = first(L);
                while (info(next(Q)).ID < info(P).ID)
                {
                    Q = next(Q);
                }
                insertAfter(L,Q,P);
            }
        }
        else
        {
            cout << "New Data is Duplicate ID"<<endl;
        }
    }
    // ----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    if (first(L) == NULL){
        cout << "list Kosong" <<endl;
    }else{
        infotype X;
        X.ID = id_x;
        address P = findElm(L, X);
        if ( P == first(L)){
            deleteFirst(L,P);
            deallocate(P);
        }else {
            address Prec = first(L);
            while(next(Prec)!=P){
            Prec = next(Prec);
            }
            deleteAfter(L,Prec,P);
            deallocate(P);
        }
    }
    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P = first(L);
    //-------------your code here-------------
    if (first(L) == NULL){
        cout<<"List Kosong"<<endl;
    }else{
        while (P!=NULL){
            if (info(P).score>80){
                insertFirst(L2,allocate(info(P)));
               }
            P = next(P);
        }
    }
    //----------------------------------------
}
