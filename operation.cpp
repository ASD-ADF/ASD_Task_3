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
    if (first(L)!=NULL) {
        address Q = findElm(L, x);
        if (Q==NULL) {
            address P = allocate(x);
            if (info(P).Id<info(first(L)).Id) {
                insertFirst(L, P);
            } else if (info(P).Id>info(last(L)).Id) {
                insertLast(L, P);
            } else {
                Q = first(L);
                while ((next(Q)!=NULL)&&(info(next(Q)).Id<info(P).Id)) {
                    Q = next(Q);
                }
                insertAfter(L, Q, P);
            }
        }
    } else {
        address P = allocate(x);
        insertFirst(L, P);
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
    x : infotype
    next.Id == x_id
    p = findelm(L,x)
    */
    infotype x;
    x.Id = id_x;
    P = findElm(L, x);
    if (P!=NULL) {
        if (P==first(L)) {
            deleteFirst(L, P);
        } else if (P==last(L)) {
            deleteLast(L, P);
        } else {
            Prec = prev(P);
            deleteAfter(L, Prec, P);
        }
        deallocate(P);
    } else {
        cout << "ID not found" << endl;
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
    while (first(L)!=NULL) {
        deleteFirst(L, P);
        if (info(P).score>80) {
            insertLast(L2, P);
        } else {
            insertLast(LTemp, P);
        }
    }
    L = LTemp;
    //----------------------------------------
}
