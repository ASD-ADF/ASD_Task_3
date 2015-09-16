#include "customer.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
infotype x;

void createList (list *l)
{
    (*l).first = NULL;
};

void dealokasi (address p)
{
    free(p);
};

address alokasi (infotype x)
{
    address p;
    p = (address) malloc (sizeof(elmlist));
    p -> info = x;
    p -> next = NULL;
    return p;
};

void InsertFirst (list *l, address p)
{
    if (((*l).first) == NULL)
    {
        (*l).first = p;
    }
    else
    {
        p -> next = (*l).first;
        (*l).first = p;
    }
    getch();
};

void InsertLast (list *l, address p)
{
    address q = (*l).first;
    while (q -> next != NULL)
    {
        q = q -> next;
    }
    q -> next = p;
};

void InsertAfter (list *l,address q, address p)
{
    cout<<"Input Setelah Data ke : ";
    int j,i;
    cin>>j;
    //p = (*l).first;
    q = (*l).first;
    for (i=1;i<j;i++)
    {
        q=q->next;
        break;
    }
    p -> next = q -> next;
    q -> next = p;
};

void deleteFirst (list *l, address p)
{
    if (((*l).first) -> next == NULL)
    {
        (*l).first = NULL;
    }
    else
    {
        p = (*l).first;
        (*l).first = p -> next;
        p -> next = NULL;
    }
    dealokasi(p);
    cout<<"Data Pertama Telah Dihapus";
    getch();
};

void deleteLast (list *l, address p)
{
    address q;
    p = (*l).first;
    if (p==NULL)
    {
        cout<<"KOSONG";
    }
    else
    {
    while (p -> next != NULL)
    {
        q = p;
        p = p -> next;
    }
    q -> next = NULL;
    dealokasi(p);
    cout<<"Data Terakhir Telah Dihapus";
    }
    getch();
};

void deleteAfter (list *l,address q, address p)
{
    cout<<"Hapus Setelah Data ke : ";
    int j,i;
    cin>>j;
    //p = (*l).first;
    address r;
    q = (*l).first;
    for (i=1;i<j;i++)
    {
        q=q->next;
        break;
    }
    r = q->next;
    q->next = r->next;
    r->next = NULL;
    dealokasi(r);
};

address searchCustomer(list l, infotype x)
{
    address s;
    s = ((l).first);
    if (s==NULL)
    {
        s=NULL;
        return s;
    }
    while (s != NULL)
    {
        if (((x.ID_customer) == 0) || (x.ID_customer==(s -> info).ID_customer))
        {
            return s;
            break;
        }
        else
        {
            s=s->next;
        }
        break;
    }
    s=NULL;
    return s;
};

void printInfo (list l)
{
    address p;
    p = ((l).first);
    if (p==NULL)
    {
        cout<<"KOSONG";
        getch();
    }
    else
    {while (p != NULL)
    {
        cout << "ID Customer : " << (p -> info).ID_customer<<endl;
        cout << " Nama : " << (p -> info).nama<<endl;
        cout << " No. HP : " << (p -> info).no_hp<<endl;
        cout << " Alamat : " << (p -> info).alamat<<endl;
        cout << " E-Mail : " << (p -> info).email<<endl;
        cout<<endl;
        p = p -> next;
    }
    getch();
    }
};

void insertionsort(list l)
{
    address p=(l).first;
    address q= p;
    p = p->next;
    while(p!= NULL){
        q=(l).first;
        while(q->next != p){
            if ((q -> info).ID_customer > (p -> info).ID_customer){
                int temp = (p -> info).ID_customer;
                (p -> info).ID_customer = (q -> info).ID_customer;
                (q -> info).ID_customer = temp;
            }else{
                q = q->next;
            }
        }
        p = p->next;
    }
}
