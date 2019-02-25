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

    bool doSort = false;
    int option;
    mytype searchID;
    address P = allocate(x);
    address Prec;
    address Q;
    //address check
    //if
    cout<<"[INSERT OPTION]"<<endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert Last"<<endl;
    cout<<"3. Insert After"<<endl;
    cout<<"9. Cancel"<<endl;
    cin>>option;
    switch(option){
        case 1:
            insertFirst(L,P);
            break;
        case 2:
            insertLast(L,P);
            break;
        case 3:
            cout<<"Search ID    : ";
            cin>>searchID.ID;
            Prec = findElm(L,searchID);
            if (Prec != NULL)
            {
                insertAfter(L,Prec,P);
            }
            else
            {
                cout<<"[Data not found!]"<<endl;
            }
            break;
        case 9:
            break;
        default:
            cout<<"[Wrong input!]"<<endl;
            break;
    }

    printInfo(L);

    if (doSort == true)
    {
        cout << "masuk doSort";
        P = first(L);
        while (next(P) != NULL)
        {
            P = next(P);

        }
        address R = first(L);
        while (next(R) != P)
        {
            R = next(R);
        }

        address Q = first(L);
        if (next(next(Q)) != NULL)
        {
            cout << "masuk sini woy";
            while (info(next(Q)).ID < info(P).ID)
            {
                Q = next(Q);
            }

            next(P) = next(Q);
            next(Q) = P;
            next(R) = NULL;
        }
        else if (next(Q) = P)
        {
            if (info(Q).ID > info(P).ID)
            {
                next(P) = Q;
                next(Q) = NULL;
                first(L) = P;
            }
        }

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

    infotype X;
    X.ID = id_x;
    P = findElm(L,X);
    if (P != NULL)
    {
        if (P == first(L))
        {
            deleteFirst(L, P);
        }
        else if (next(P) == NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            Prec = first(L);
            while(next(Prec) != P)
            {
                Prec = next(Prec);
            }
            deleteAfter(L, Prec, P);
        }
        cout<<"[Data deleted]"<<endl;
    }
    else
    {
        cout<<"[Data not found!]"<<endl;
    }

    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------

    P = first(L);
    while (P != NULL)
    {
        if (info(P).score > 80)
        {
            insertLast(L2,P);
        }
        P = next(P);
    }

    //----------------------------------------
}
