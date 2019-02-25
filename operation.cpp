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
    address p = findElm(L,x);
    if (p == NULL) {
        p = allocate(x);
        address q = first(L);
        while (info(next(q)) < x) {
            q = next(q);
        }
        insertAfter(L,q,p);
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
    Prec = first(L);
    while ((next(Prec) != NULL) && info(next(Prec) != id_x)) { // akan ada kesalah jika liat berisi 1
        Prec = next(Prec);
    } // asumsi id yang di cari ada di list
    if (info(next(Prec)).ID == id_x) {
        P = next(Prec);
        next(Prec) = next(P);
        deallocate(P);
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
    while ((next(Prec) != NULL) && info(next(Prec) != id_x))
    //----------------------------------------
}
