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
    P->info = x;
    P->next = nullptr;
    P->prev = nullptr;

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
    if (L.first != nullptr){
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    } else {
        L.first = P;
        L.last = P;
    }


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    if (L.first != nullptr){
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    } else {
        insertFirst(L, P);
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
    if (L.first != nullptr) {
        P = L.first;
        while (P != nullptr && P->info.id != x.id) {
            P = P->next;
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
    if (L.first != nullptr){
        P = L.first;
        if (L.first != L.last)
        {
            L.first = P->next;
            L.first->prev = nullptr;
            P->next = nullptr;
        } else {
            L.first = nullptr;
            L.last = nullptr;
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
    if (L.last != nullptr)
    {
        if (L.first == L.last)
        {
            deleteFirst(L, P);
        } else {
            P = L.last;
            L.last = P->prev;
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
    address P;
    P = L.first;
    if (P == nullptr)
    {
        cout << "List kosong" << endl;
    } else
    {
        while (P != nullptr)
        {
            view_data(P->info);
            P = P->next;
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
        if (Prec == L.last)
        {
            insertLast(L, P);
        } else
        {
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
    if (Prec != nullptr && Prec->next != nullptr)
    {
        if (Prec->next == L.last)
        {
            deleteLast(L, P);
        } else
        {
            P = Prec->next;
            Prec->next = P->next;
            P->next->prev = Prec;
            P->next = nullptr;
            P->prev = nullptr;
        }
    }

    //----------------------------------------
}

