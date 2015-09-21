#include "list.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//SEMANGAT !! Jangan lupa edit main.cppnya

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
    address p= new elmlist;
    p = (address) malloc (sizeof(elmlist));
    info(p)= x;
    next(p) = NULL;
    return p;
};

void insertFirst (list *l, address p)
{
      if ((*l).first == NULL)
    {
        (*l).first = p;
    }
    else
    {
        next(p) = (*l).first;
        (*l).first = p;
    }
    
};

void insertLast (list *l, address p)
{
  address q = (*l).first;
    if ((*l).first == NULL)
    {
        (*l).first = p;
    }
    else
    {

        while (next(q) != NULL)
        {
            q = next(p);
        }
        next(q) = p;
    }
  
};

void insertAfter (list *l, address p, address prec)
{
   next(p) = next(q);
    next(q) = p;
  
};


void deleteFirst (list &l, address p)
{
        if(next(first(l))==NULL)
            {
                (*l).first=NULL;
            }
            else
            {
                 p=(*l).first;
                 (*l).first=next(p);
                 next(p)=NULL;
            }
            dealokasi(p);
};


void deleteLast (list &l, address p)
{
                address q;
                while (next(p)!=NULL)
                {
                    q=p;
                    p=next(p);
                }
                next(q)=NULL;
                dealokasi(p);
};

void deleteAfter(address q, address *p)
{
            next(q)=next(*p);
            next(*p)=NULL;
            dealokasi(*p);
};

address searchBuku(list l, infotype x)
{
    address c;
    c = ((l).first);
    if (c==NULL)
    {
        c=NULL;
        return c;
    }
    while (c != NULL)
    {
        if (((x.ID) == 0) || (x.ID==(info(c)).ID))
        {

            return c;
            break;
        }
        else
        {
            c=next(c);
        }
        break;
    }
    c=NULL;
    return c;
};


void input_data (infotype *x)
{
    cout <<"ID : ";
    cin>> (*x).ID;
    cout<<endl<<"Input Judul : ";
    cin>> (*x).judul;
    cout<<endl<<"Input Pengarang : ";
    cin>> (*x).pengarang;
    cout<<endl<<"Input Penerbit : ";
    cin>> (*x).penerbit;
    cout<<endl<<"Input Jenis : ";
    cin>> (*x).jenis;
    cout<<endl<<"Stock : ";
    cin>> (*x).stock;
};

void viewList (list l)
{
    address p;
    p = ((l).first);
    if (p==NULL)
    {
        cout<<"KOSONG";
        getch();
    }
    else
    {
        while (p != NULL)
        {
            cout << "ID Buku : " << (info(p)).ID<<endl;
            cout << " Judul : " << (info(p)).judul<<endl;
            cout << " Penerbit : " << (info(p)).penerbit<<endl;
            cout << " Pengarang : " << (info(p)).pengarang<<endl;
            cout << " Jenis : " << (info(p)).jenis<<endl;
            cout << " Stock : " << (info(p)).stock<<endl;
            cout<<endl;
            p = next(p);
        }
        getch();
    }
};


