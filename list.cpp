#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) and last(L) with Null
    */
    //-------------your code here-------------
    L.first = nullptr;
    L.last = nullptr;

    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
   address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    P->prev = nullptr;
    return P;


    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete P;
    P = nullptr;


    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (L.first == nullptr) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    if (L.first == nullptr) {
        insertFirst(L, P);
    } else {
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
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
     P = L.first;
    while (P != NULL) {
        if (P->info.id == x.id) {
            return P;
        }
        P = P->next;
    }
    return NULL;
    //----------------------------------------
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (L.first != nullptr) {
        P = L.first;
        if (L.first == L.last) {
            L.first = nullptr;
            L.last = nullptr;
        } else {
            L.first = L.first->next;
            L.first->prev = nullptr;
            P->next = nullptr;
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
   if (L.first != nullptr) {
        if (L.first == L.last) {
            deleteFirst(L, P);
        } else {
            P = L.last;
            L.last = L.last->prev;
            L.last->next = nullptr;
            P->prev = nullptr;
        }
    }


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address P = first(L);
    if (P == nullptr) {
        cout << "List kosong" << endl;
    } else {
        while (P != nullptr) {
            cout << "ID    : " << info(P).id << endl;
            cout << "Nama  : " << info(P).name << endl;
            cout << "Rank  : " << info(P).rank << endl;
            cout << "Score : " << info(P).score << endl;
            cout << "---------------------------------" << endl;
            P = next(P);
        }
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
    if (Prec != nullptr) {
        if (Prec == L.last) {
            insertLast(L, P);
        } else {
            P->next = Prec->next;
            P->prev = Prec;
            Prec->next->prev = P;
            Prec->next = P;
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
    if (Prec != nullptr && Prec->next != nullptr) {
        if (Prec->next == L.last) {
            deleteLast(L, P);
        } else {
            P = Prec->next;
            Prec->next = P->next;
            P->next->prev = Prec;
            P->next = nullptr;
            P->prev = nullptr;
        }
    }

    //----------------------------------------
}

