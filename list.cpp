#include "list.h"
#include "my_data.h"

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    first(L)=NULL;
    //----------------------------------------
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    P=new elmlist;
    P->info=x;
    next(P)=NULL;

    //----------------------------------------
    return P;
}

void deallocate(address &P)
{
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    if(first(L)==NULL)
    {
        first(L)=P;
    }
    else
    {
        next(P)=first(L);
        first(L)=P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    if(first(L)==NULL)
    {
        insertFirst(L,P);
    }
    else
    {
        address Q=first(L);
        while(Q!=NULL)
        {
            Q=next(Q);
        }
        next(Q)=P;
    }

    //----------------------------------------
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    P=first(L);
    bool found=false;
    while(P->info.ID!=x.ID&&!found)
    {
        if(P->info.ID==x.ID)
        {
            found=true;
        }
        P=next(P);
    }
    if(found)
        return P;

    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    if(first(L)==NULL)
    {
        cout<<"List kosong";
    }
    else
    {
        if(next(first(L))==NULL)
        {
            P=first(L);
            first(L)=NULL;
            deallocate(P);
        }
        else
        {
            P=first(L);
            first(L)=next(P);
            deallocate(P);
        }
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    if(first(L)==NULL)
    {
        cout<<"List kosong";
    }
    else
    {
        if(next(first(L))==NULL)
        {
            P=first(L);
            first(L)=NULL;
            deallocate(P);
        }
        else
        {
            address Q=first(L);
            while(next(next(Q))!=NULL)
            {
                Q=next(Q);
            }
            P=next(Q);
            next(Q)=NULL;
            deallocate(P);
        }
    }
    //----------------------------------------
}

void printInfo(List L)
{
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    address P=first(L);
    int i=1;
    while(P!=NULL)
    {
        cout<<i<<". "<<"ID = "<<P->info.ID<<endl;
        cout<<"   Nama = "<<P->info.name<<endl;
        cout<<"   Kelas = "<<P->info.kelas<<endl;
        cout<<"   IPK = "<<P->info.IPK<<endl;
        cout<<"========================================"<<endl;
        i++;
        P=next(P);
    }
    //----------------------------------------
}


void insertAfter(address Prec, address P)       //HARUS DIROMBAK INSERT AFTER NYA. KARNA GAK ADA MEMBANDINGKAN NILAI
{
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    List L;
    infotype x;
    address a=findElm(L,x);
    Prec=first(L);

    if(first(L)==NULL)
    {
        insertFirst(L,P);
    }
    else   //           first(L)!=NULL
    {
        if(next(first(L))==NULL)
        {
            next(first(L))=P;
        }
        else       //      next(first(L))!=NULL; (punya elemen >1)
        {
            if(a==NULL)
            {
                cout<<"ID tidak ditemukan ";
            }
            else
            {
                while(Prec->info.ID!=a->info.ID)
                {
                    Prec=next(Prec);
                }
                if(next(Prec)==NULL)
                {
                    insertLast(L,P);
                }
                else                        // next(Prec)!=NULL (masih ada elemen setelah Prec)
                {
                    next(P)=next(Prec);
                    next(Prec)=P;
                }
            }
        }
    }

    //----------------------------------------

}
void deleteAfter(address Prec, address &P)
{
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;
    infotype x;
    List L;
    address a=findElm(L,x);
    Prec=first(L);

    if(first(L)==NULL)
    {
        cout<<"List kosong";
    }
    else  // first(L)!=NULL (list ada elemennya)
    {
        if(next(first(L))==NULL)     // list cuma punya 1 elemen
        {
            if(first(L)->info.ID==a->info.ID){
                deleteFirst(L,P);
            }else{
                cout<<"ID tidak ditemukan";
            }
        }
        else                        // list punya >1 elemen
        {
            if(a==NULL)
            {
                cout<<"ID tidak ditemukan ";
            }else{
                while(next(Prec)!=a)
                {
                    Prec=next(Prec);
                }
                if(next(next(Prec))==NULL){
                    deleteLast(L,P);
                }else{
                    P=next(Prec);
                    next(Prec)=next(P);
                }

            }

    //----------------------------------------
        }
    }
}
