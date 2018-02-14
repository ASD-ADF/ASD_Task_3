#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    first(L) = NULL;

    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    info(P) = x;
    next(P) = NULL;

    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    delete(P);

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (first(L) == NULL )
    {
        first(L) = P;
        next(first(L)) = NULL;
    }
    else{
        next(P)= first(L);
        first(L) = P;
    }

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (first(L) == NULL)
    {
        first(L) = P;
        next (first(L)) = NULL;
    }
    else {
        address Q = next(first(L));
        while (Q != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (first(L) = NULL)
    {
        P = NULL;
    }
    else {
        address Q = next(Q);
        while (Q != NULL)
        {
            if (info(x)

                 == info(Q)){
                P = Q;
                next(Q) = NULL;
            }
            else{
                Q = next(Q);
            }
        }
    }

    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (first(L) == NULL)
    {
        cout<<"List Kosong"<<endl;
    }
    else {
        first(L) = next(P);
        next(P) = NULL;
        //deallocate(P);
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (first(L) == NULL)
    {
        cout<<"List Kosong"<<endl;
    }
    else {
        address Q = next(first(L));
        while (Q != NULL)
        {
            Q = next(Q);
        }
        deallocate(Q);
    }


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    address P = next(first(L));
    while (P != NULL){
        cout<<info(P)<<endl;
        P = next(P);
    }

    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if ((Prec != NULL) && (P != NULL))
    {
        address Q = next(Prec);
        next(Prec) = P;
        next(P) = Q;
    }
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if (Prec != NULL)
    {
        next(Prec) = next(P);
        deallocate(P);
    }

    //----------------------------------------
}

