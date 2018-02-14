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
    cout<<"your code here"<<endl;
    if (first(L) == NULL){
        insertFirst(L,P);
    } else if (L.first -> info.id >= P -> info.id){
        insertFirst(L,P);
    }else if( L.first -> info.id <= P -> info.id) {
        bool found;
        address A = first(L);
        while(P -> info.id <= A -> info.id && next(first(L)) != NULL){
                A = next(A);
        }
        next(P) = next(A);
        next(A) = P;

    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = x.id is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    Prec = first(L);
    F = findElm(L,x);

    if(F != NULL){
        if(F == first(L)){
            deleteFirst(L,F);
        }else if(next(F) != NULL){
            while(next(Prec) != F){
                Prec = next(Prec);
            }
            next(Prec) = next(F);
            F = NULL;
        }else{
            deleteLast(L,F);
        }
    }else{
        cout << F -> info.id << " Is Not Found " << endl;
    }
    }


    //----------------------------------------

