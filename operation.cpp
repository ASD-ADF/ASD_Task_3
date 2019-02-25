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
    address P = allocate(x);
    if (first(L) == NULL) {
        insertFirst(L,P);
    } else {
        address Q = findElm(L,x);
        if (Q == NULL){
            Q = first(L);
            while (info(Q).ID < info(P).ID && Q != last(L)) {
                Q = next(Q);
            }
            if (Q == first(L) && Q != last(L)) {
                insertFirst(L,P);
            } else if (Q == last(L)) {
                if (info(P).ID > info(Q).ID) {
                    insertLast(L,P);
                } else {
                    address R = prev(Q);
                    insertAfter(L,R,P);
                }
            } else {
                address R = prev(Q);
                insertAfter(L,R,P);
            }
        } else {
            cout<<"ID already exists"<<endl;
        }
    }
    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    if (first(L) != NULL) {
        infotype x;
        x.ID = id_x;
        P = findElm(L,x);
        if (P != NULL) {
            if (P == first(L)) {
                deleteFirst(L,P);
            } else if (P == last(L)) {
                deleteLast(L,P);
            } else {
                Prec = prev(P);
                deleteAfter(L,Prec,P);
            }
            deallocate(P);
        } else {
            cout<<"Data not found"<<endl;
        }
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
    while (first(L) != NULL) {
        deleteFirst(L,P);
        if (info(P).Score > 80) {
            insertAndSort(L2,info(P));
        } else {
            insertAndSort(LTemp,info(P));
        }
    }
    L = LTemp;
    //----------------------------------------
}
