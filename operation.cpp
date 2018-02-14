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
    bool ada = false;
    bool ketemu = false;
    address Q = new elmlist;
    if (first(L)==NULL)
    {
        insertFirst(L, P);
    }
    else
    {
        Q = first(L);
        while (Q !=NULL)
        {
            if (info(Q).id==info(P).id)
            {
                ada = true;
            }
            Q = next(Q);
        }
    }
    if (!ada)
    {
        if (first(L)!=NULL)
        {
            if (info(P).id<info(first(L)).id)
            {
                insertFirst(L,P);
            }
            else
            {
                Q = first(L);
                while(Q!=NULL && !ketemu)
                {
                    if(next(Q)!=NULL)
                    {
                        if(info(P).id < info(next(Q)).id)
                        {
                            insertAfter(L, Q, P);
                            ketemu = true;
                        }
                    }
                    else
                    {
                        insertLast(L, P);
                        ketemu = true;
                    }
                    Q = next(Q);
                }
            }
        }
    }
    else
    {
        cout << "ID yang dimasukkan sudah ada! " << endl;
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
    Prec = findElm(L, x);
    if (Prec!=NULL)
    {
        if(Prec==first(L))
        {
            deleteFirst(L, P);
        }
        else if(next(Prec)==NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            address Q = new elmlist;
            Q = first(L);
            while (next(Q)!=Prec)
            {
                Q = next(Q);
            }
            P = next(Q);
            Prec = next(P);
            next(Q) = Prec;
            next(P) = NULL;
        }
        deallocate(P);
    }


    //----------------------------------------
}
