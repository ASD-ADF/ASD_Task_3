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
    address P = allocate(x);
    if (first(L) == NULL){
        insertFirst(L, P);
    }
    else{
        address cek = findElm(L, info(P));
        if (cek == NULL){
            address ceklast = first(L);
            while (next(ceklast)!= NULL)
            {
                ceklast = next(ceklast);
            }

            if (info(P).id <= info(first(L)).id)
            {
                insertFirst(L,P);
            }
            else if (info(P).id >= info(ceklast).id)
            {
                insertLast(L,P);
            }
            else
            {
                cek = first(L);
                while (info(next(cek)).id < info(P).id)
                {
                    cek = next(cek);
                }
                insertAfter(L,cek,P);
            }
       }
       else{
        cout<<"ID is already there \n";
       }
    }
}



void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    infotype x;
    x.id = id_x;
    Prec = findElm(L, x);
    if (first(L) == NULL){
        cout<<"list empty"<<endl;
    }
    else{
        if (Prec == first(L)){
            deleteFirst(L, Prec);
        }
        else if (next(Prec) == NULL){
            deleteLast(L, Prec);
        }
        else{
            P = first(L);
            while(next(P) != Prec){
                P = next(P);
            }
            deleteAfter(L, P, Prec);
        }
    }
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    if(first(L) != NULL)
    {
        address P, akhir, sebelum;
        P = first(L);
        akhir = first(L);
        while (P != NULL)
            {
                if (info(P).score > 79)
                {
                    if(P == first(L))
                    {
                        deleteFirst(L, P);
                        insertFirst(L2, P);
                    }
                    else
                    {
                        sebelum = first(L);
                        while (next(sebelum) != P)
                        {
                            sebelum = next(sebelum);
                        }
                        deleteAfter(L, sebelum, P);
                        insertLast(L2, P);
                    }
                }
                P = next(P);
            }
    }
}
