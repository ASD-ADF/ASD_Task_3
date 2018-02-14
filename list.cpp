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


    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (first (L) == NULL)
    {
        first(L) = P;
        next(P) = NULL;
    }
    else
    {
        next (P)= first(L);
        first(L)= P;
    }


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    if (first(L) == NULL)
    {
        first(L) = P;
        next(P) = NULL;
    }
    else
    {
        address Q = first(L);
        if (next(Q) == NULL)
        {
            next(Q)= P;
            next(P)= NULL;
        }
        else
        {
            while(next(Q) != NULL)
            {
                Q = next(Q);
            }
            next(Q)=P;
            next(P)=NULL;
        }
    }



    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P = new elmlist;
    //-------------your code here-------------
    if (first(L) == NULL)
    {
        P = NULL;
    }
    else
    {
        P = first(L);
        while ( P != NULL)
        {
            if (info(P).id == x.id)
            {
                return P;
            }
            P = next(P);
        }
        return NULL;
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
    if (first(L) == NULL)
    {
       cout<<"List sudah kosong ";
    }
    else
    {
         P = first(L);
         if (next(P) != NULL)
         {
            first(L) = next(P);
            next(P) = NULL;
         }
         else
         {
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
    if(first(L)!= NULL)
    {
        address Q =first(L);
        if(next(Q) == NULL)
        {
            deleteFirst(L,P);
        }
        else
        {
            while(next(next(Q)) != NULL)
            {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) =NULL;


        }
    }
    else
    {
        cout<<"list sudah kosong";
    }



    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address P = first (L);
    while (P != NULL)
    {
        view_data(info(P));
        P=next(P);
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
    if (Prec != NULL && P != NULL)
    {
        if (first(L)==NULL)
        {
            insertFirst(L, P);
        }
        else if (next(Prec)==NULL)
        {
            insertLast(L, P);
        }
        else
        {
            Q = next(Prec);
            next(Prec) = P;
            next(P) = Q;
        }
    }

    //----------------------------------------

}
void deleteAfter(List &L,address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------- -----your code here-------------
    if (first (L) !=NULL)
    {
        if (next(Prec)==NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            P = next(Prec);
            if (next(P)!=NULL)
            {
                address Q = new elmlist;
                Q = next(P);
                next(Prec) = Q;
                next(P) = NULL;
            }
            else
            {
                next(Prec) = NULL;
            }
        }
    }
    else
    {
        cout << "Tidak ada elemen";
    }


    //----------------------------------------
}

