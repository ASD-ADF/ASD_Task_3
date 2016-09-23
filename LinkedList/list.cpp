#include "list.h"
#include <iostream>

using namespace std;

address createElement(stuff addstuff)
{
    address P;
    P = new elmlist;
    P -> next = NULL;
    P -> info.id = addstuff.id;
    P -> info.nama = addstuff.nama;
    P -> info.pekerjaan = addstuff.pekerjaan;
    P -> info.tempat_kerja = addstuff.tempat_kerja;
    P -> info.gaji = addstuff.gaji;
    P -> info.transportasi = addstuff.transportasi;
    return P;
}

void createPekerjaan (stuff *addstuff)
{
    cout<<"Silahkan masukkan ID anda : ";
    cin>>addstuff->id;
    cout<<"Silahkan masukkan nama anda : ";
    cin>>addstuff->nama;
    cout<<"Silahkan masukkan pekerjaan anda : ";
    cin>>addstuff->pekerjaan;
    cout<<"Silahkan masukkan tempat kerja anda : ";
    cin>>addstuff->tempat_kerja;
    cout<<"Silahkan masukkan berapa nominal gaji anda : ";
    cin>>addstuff->gaji;
    cout<<"Silahkan masukkan transportasi apa yang anda gunakan ke tempat kerja anda : ";
    cin>>addstuff->transportasi;
}

int countelement (List *L)
{
    int count = 1;
    address q;
    q = L->first;
    if(L->first == NULL)
    {
        return 0;
    }
    while (q->next != NULL)
    {
        q = q->next;
        count++;
    }
    return count;
}
void createList(List &L)
{
        L.first = NULL;
}

address alokasi(infotype x)
{
    address P;
        P = new elmlist;
        P ->info = x;
        P ->next = NULL;
    return P;
}

void dealokasi(address &P)
{
        delete(&P);
}

void insertFirst(List &L, address P)
{
        if(L.first != NULL)
        {
            P = L.first;
        }
        else
        {
            P->next = L.first;
            L.first = P;
        }
}

void insertLast(List &L, address P)
{
        if(L.first == NULL)
            L.first = P;
        else
        {
            address q;
            q = L.first;
            while(next(q) != NULL)
                q = next (q);
                P->next = NULL;
                q->next = P;
        }
}

address findElm(List L, infotype x)
{
    address P;
    P = L.first;
    while ((info(P).id != x.id)&& (next(P) != NULL))
    {
            P = next(P);
    }
    if((next(P) == NULL) && (info(P).id != x.id))
    {
        return NULL;
    }
    else
    {
        return P;
    }
}

void deleteFirst(List &L, address &P)
{
        P = L.first;
        if (P != NULL)
        {
            if(L.first -> next == NULL)
            {
                L.first = NULL;
                delete P;
            }
            else
            {
                L.first = P -> next;
                P -> next = NULL;
                delete P;
            }
        }
}

void deleteLast(List &L, address &P)
{
    address q;
    P = L.first;
    if(P!= NULL)
    {
        if(P->next == NULL)
        {
            deleteFirst(L,P);
        }
    }
    else{
        while (P->next != NULL)
        {
            q=P;
            P=P->next;
        }
        q->next = NULL;
        delete P;
    }
}

void printInfo(List L)
{
        address P ;
        P = L.first;
        int i=1;
        while (P != NULL){
            cout<<"Karyawan ke-"<<i<<endl;
            i++;
            cout<<"ID               : "<<(P->info).id<<endl;
            cout<<"Nama             : "<<(P->info).nama<<endl;
            cout<<"Pekerjaan        : "<<(P->info).pekerjaan<<endl;
            cout<<"Tempat kerja     : "<<(P->info).tempat_kerja<<endl;
            cout<<"Gaji             : "<<(P->info).gaji<<endl;
            cout<<"Transportasi     : "<<(P->info).transportasi<<endl;
            P = P -> next;
        }
}


void insertAfter(address Prec, address P)
 {
    Prec = L.first;
    while((info(Prec)!=x)&(Prec ->next !=NULL))
        Prec = Prec -> next;
        P->next = Prec ->next;
        Prec ->next = P;
        if(info(P)==x)
        {
          return P;
        }
        else
        {
            return NULL;
        }
}

void deleteAfter(address Prec, address &P)
{
        Prec -> next = P;
        next P = Prec -> next;
        next P = NILL;
}

