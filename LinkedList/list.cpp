#include "tugas.h"

void menu()
{
    cout<<"Data Pegawai"<<endl<<endl;
    cout<<"1. Insert Data on First"<<endl;
    cout<<"2. Insert Data on After"<<endl;
    cout<<"3. Insert Data on Last"<<endl;
    cout<<"4. Delete First Data"<<endl;
    cout<<"5. Delete After Data"<<endl;
    cout<<"6. Delete Last Data"<<endl;
    cout<<"7. View All Data"<<endl;
    cout<<"8. Search Specific Data"<<endl;
    cout<<"9. Exit"<<endl;
}

element *alokasi(pegawai x)
{
    element *p;
    p = new element;
    p->info = x;
    return p;
}

element *search_data(List *L, int id)
{
    element *p;
    p = new element;
    if((*L).head == NULL)
    {
        return NULL;
    }
    else
    {
        bool stop = false;
        p = (*L).head;
        while ( (p->info.id != id) and (stop == false ) )
        {
            if (p->next == NULL) { stop = true; }
            else { p = p->next; }
        }
        if (stop == true)
        {
            return NULL;
        }
        else
        {
            return p;
        }
    }
}

void input_data(pegawai *peg)
{
    cout<<"ID           : "; cin>>(*peg).id;
    cout<<"Nama         : "; cin>>(*peg).nama;
    cout<<"Alamat       : "; cin>>(*peg).alamat;
    cout<<"Jabatan      : "; cin>>(*peg).jabatan;
    cout<<"Email        : "; cin>>(*peg).email;
}

void create_list(List *L)
{
    (*L).head = NULL;
}


void insert_first(List *L,element *p)
{
    cout<<"Insert Data on First"<<endl<<endl;
    pegawai peg;
    input_data(&peg);
    p = alokasi(peg);
    p->next = (*L).head;
    (*L).head = p;
    cout<<endl<<"Insert Data on First Success!"<<endl;
    _getch();
}

void insert_after(List *L,element *p,element *prec)
{
    cout<<"Insert Data on After"<<endl<<endl;
    pegawai peg;
    input_data(&peg);
    p->next = prec->next;
    prec->next = p;
    cout<<endl<<"Insert Data  on After Success!"<<endl;
    _getch();
}

void insert_last(List *L,element *p)
{
    cout<<"Insert Data on Last"<<endl<<endl;
    element *q;
    pegawai peg;
    input_data(&peg);
    p = alokasi(peg);
    if ((*L).head == NULL)
    {
        p->next = NULL;
        (*L).head = p;
    }
    else
    {
        q = (*L).head;
        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
        p->next = NULL;
    }
    cout<<endl<<"Insert Data on Last Success!"<<endl;
    _getch();
}

void delete_first(List *L,element *p)
{
    cout<<"Delete First Data"<<endl;
    if ((*L).head == NULL)
    {
        cout<<"There is no data to delete!"<<endl;
    }
    else
    {
        p = (*L).head;
        (*L).head = p->next;
        p->next = NULL;
        delete p;
        cout<<endl<<"Delete First Data Success!"<<endl;
    }
    _getch();
}

void delete_after(List *L, element *p, element prec)
{
    next->prec = p;
    next->p = next->prec;
    next->p = NULL;
}

void delete_last(List *L, element *p)
{
    cout<<"Delete Last Data"<<endl;
    element *q;
    if ((*L).head == NULL)
    {
        cout<<"There is no data to delete!"<<endl;
    }
    else
    {
        q = (*L).head;
        if (q->next == NULL)
        {
            delete q;
            (*L).head = NULL;
        }
        else
        {
            while( (q->next)->next != NULL)
            {
                q = q->next;
            }
            p = q->next;
            p->next = NULL;
            q->next = NULL;
            delete p;
        }
        cout<<endl<<"Delete Last Data Success!"<<endl;
    }
    _getch();
}

void view_all(List *L)
{
    cout<<"View All Data ID and Name"<<endl<<endl;
    element *p;
    if ((*L).head == NULL)
    {
        cout<<"Empty Database"<<endl;
    }
    else
    {
        p = (*L).head;
        cout<<p->info.id<<", "<<p->info.nama<<endl;
        while(p->next != NULL)
        {
            p = p->next;
            cout<<p->info.id<<", "<<p->info.nama<<endl;
        }
    }
    _getch();
}

void search_data(List *L)
{
    int id; element *p;
    cout<<"Search Data Pegawai"<<endl<<endl;
    cout<<"Insert ID : "; cin>>id;
    p = search_data(L,id);
    if (p == NULL)
    {
        cout<<endl<<"Not found on Database!"<<endl;
    }
    else
    {
        cout<<endl<<"Nama   : "<<p->info.nama<<endl;
        cout<<"Alamat       : "<<p->info.alamat<<endl;
        cout<<"Jabatan      : "<<p->info.jabatan<<endl;
        cout<<"Email        : "<<p->info.email<<endl;
    }
    _getch();
}
