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
        infotype info = create_data();
        P = allocate(info);
        if (first(L) == NULL) {
            insertFirst(L, P);
        }
        else {
            bool duplicate = false;
            address Q = first(L);
            while ((Q!=NULL)&&(!duplicate)) {
                if (info.ID(Q) == info.ID)
                    duplicate = true;
                Q = next(Q);
            }
            if (!duplicate) {
                Q = first(L);
                while ((Q!=NULL)&&(info.ID(Q)!=info.id)) {
                    if ((info.ID(Q)<info.id)&&((info.ID(next(Q))>info.id))
                        insertAfter(Q, P);
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
        if (first(L)!=NULL){
            address Q=first(L);
            while((Q!=NULL)&&(Prec!=Q)){
                  if(info.ID(Q)==info.ID(x)){
                        Prec=Q;
                  }
                  Q=next(Q);
            }
            deleteAfter(Prec,P);
        }
    //----------------------------------------
}
