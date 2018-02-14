#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    first(L) = NULL;
    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P = new elmlist;
    //-------------your code here-------------
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
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (first(L) == NULL) {
        first(L) = P;
        next(P) = NULL;
    }
    else {
        address Q = new elmlist;
        Q = first(L);
        next(P) = Q;
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
    if (first(L) == NULL) {
        first(L) = P;
        next(P) = NULL;
    }
    else {
        address Q = new elmlist;
        Q = first(L);
        if (next(Q)==NULL) {
            next(Q) = P;
            next(P) = NULL;
        }
        else {
            while (next(Q)!=NULL) {
                Q = next(Q);
        }
            next(Q) = P;
            next(P) = NULL;
    }

    }
    //----------------------------------------
}

address findElm(List L, infotype D) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    bool ketemu = false;
    address Q = new elmlist;


    //-------------your code here-------------
    if (first(L)==NULL) {
        Q = NULL;
    }
    else {
        Q = first(L);
        while (Q!=NULL && !ketemu) {
            if (info(Q).id == D.id) {
                return Q;
                ketemu = true;
            }
            Q = next(Q);
        }
    }
    if (!ketemu) {
        Q = NULL;
    }
    //----------------------------------------
    return Q;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (first(L) == NULL) {
        cout << "List anda kosong";
    }
    else {
        P = first(L);
        if (next(P) != NULL) {
            first(L) = next(P);
            next(P) = NULL;
        }
        else {
            first(L) = NULL;
        }
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (first(L) != NULL) {
        P = first(L);
        address Q = new elmlist;
        if (next(next(P)) != NULL) {
            while (next(next(P)) != NULL) {
                P = next(P);
            }
            Q = P;
            P = next(P);
            next(Q) = NULL;
        }
        else if (next(P) != NULL) {
            Q = first(L);
            P = next(Q);
            next(Q) = NULL;
        }
        else {
            deleteFirst(L, P);
        }
    }

    else {
        cout << " List anda kosong";
    }




    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
        address Q = new elmlist;
        Q = first(L);
        while (Q != NULL) {
            view_data(info(Q));
            Q = next(Q);
    }
    //----------------------------------------
}
void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
   address Q = new elmlist;
   if (Prec != NULL && P != NULL){
    if (first(L) == NULL) {
        insertFirst(L, P);
    }
    else if (next(Prec) == NULL) {
        insertLast(L, P);
    }
    else {
        Q = next(Prec);
        next(Prec) = P;
        next(P)= Q;
    }
   }
    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    if (first(L) != NULL) {
        if (next(Prec) == NULL) {
            deleteLast(L, P);
        }
        else {
            P = next(Prec);
            if (next(P)!=NULL) {
                    address Q = new elmlist;
                    Q = next(P);
                    next(Prec) = Q;
                    next(P)= NULL;
            }
            else {
                next(Prec) = NULL;
            }
        }
    }
    else {
        cout<< "Tidak ada elemen.";
    }


    //----------------------------------------
}

