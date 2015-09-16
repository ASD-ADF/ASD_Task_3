#include "list.h"

node *allocate()
{
    node *pointer;
    pointer = new node;
    return pointer;
}

//Menu
void main_menu() {
    cout<<" ========================== "<<endl;
    cout<<"|      Admin I-Gracias     |"<<endl;
    cout<<" ========================== "<<endl;
    cout<<"|1. Insert Data Mahasiswa  |"<<endl;
    cout<<"|2. Delete Data Mahasiswa  |"<<endl;
    cout<<"|3. View   Data Mahasiswa  |"<<endl;
    cout<<"|4. Exit                   |"<<endl;
    cout<<" ========================== "<<endl;
}
void insert_menu() {
    cout<<"Insert Data"<<endl<<endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert Last"<<endl;
    cout<<"3. Insert After"<<endl;
    cout<<"4. Back to Menu"<<endl;
}
void delete_menu() {
    cout<<"Delete Data"<<endl<<endl;
    cout<<"1. Delete First"<<endl;
    cout<<"2. Delete Last"<<endl;
    cout<<"3. Delete After"<<endl;
    cout<<"4. Back to Menu"<<endl;
}

void inserting(node *pointer) {
    cout<<"ID        : "; cin>>pointer->info.id;
    cout<<"Name      : "; cin>>pointer->info.nama;
    cout<<"Born      : "; cin>>pointer->info.lahir;
    cout<<"Class     : "; cin>>pointer->info.kelas;
    cout<<"Phone     : "; cin>>pointer->info.telpon;
}

node *search_Element_ID(int ID)
{
    node *p; bool last = false;
    p = allocate();
    if (head == NULL)
    {
        p = NULL;
        return p;
    }
    else
    {
        p = head;
        while ( (last == false) )
        {
            if (p->info.id == ID)
            {
                return p;
            }
            else
            {
                if (p->next == NULL)
                {
                    last = true;
                }
                else
                {
                    p = p->next;
                }
            }
        }
        p = NULL;
        return p;
    }
}

void insert_first(node *p)
{
    cout<<"Insert Data at First"<<endl<<endl;
    p = allocate();
    inserting(p);
    p->next = head; head = p;
    cout<<endl<<"Insert Success!";
    _getch();
}

void insert_last(node *p, node *q)
{
    p = allocate();
    q = allocate();
    cout<<"Insert Data at Last"<<endl<<endl;
    inserting(p);
    if (head == NULL)
    {
        p->next = head; head = p;
    }
    else
    {
        q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
        p->next = NULL;
    }
    cout<<endl<<"Insert Success!";
    _getch();
}

void insert_after(node  *p, node *prec)
{
    p = allocate();
    prec = allocate();
    int x;
    cout<<"Insert After"<<endl<<endl;
    cout<<"Insert Data After Data ID : ";
    cin>>x; cout<<endl<<endl;
    prec = search_Element_ID(x);
    if (prec == NULL)
    {
        cout<<"ID was not found!"<<endl;
    }
    else
    {
        inserting(p);
        p->next = prec->next;
        prec->next = p;
        cout<<endl<<"Insert Success!"<<endl;
    }
    _getch();
}

void delete_first(node *p)
{
    if(head == NULL)
    {
        cout<<"Data is Empty!"<<endl;
        _getch();
    }
    else
    {
        p = allocate();
        p = head;
        if(p->next == NULL)
        {
            head = NULL;
            delete p;
        }
        else
        {
            head = p->next;
            p->next = NULL;
            delete p;
        }
        cout<<"Delete Success!"<<endl;
        _getch();
    }
}

void delete_last(node *p, node *q)
{
    if(head == NULL)
    {
        cout<<"Data is Empty!"<<endl;
        _getch();
    }
    else
    {
        p = allocate();
        q = allocate();
        q = head;
        if(q->next == NULL)
        {
            head = NULL;
        }
        else
        {
            while(q->next->next != NULL) { q = q->next; }
            p = q->next;
            q->next = NULL;
            delete p;
        }
        cout<<"Delete Success!"<<endl;
        _getch();
    }
}


void delete_after(node *p, node *prec)
{
    if(head == NULL)
    {
        cout<<"Data is Empty!"<<endl;
        _getch();
    }
    else
    {
        int x;
        p = allocate();
        prec = allocate();
        cout<<"Delete After"<<endl<<endl;
        cout<<"Delete Data After Data ID : "<<endl;
        cin>>x;
        prec = search_Element_ID(x);
        if (prec == NULL)
        {
            cout<<"Data was not found!"<<endl;
        }
        else
        {
            if (prec->next == NULL)
            {
                cout<<"The Data you choose is the Last Data!"<<endl;
            }
            else
            {
                p = prec->next;
                prec->next = p->next;
                p->next = NULL;
                cout<<"Delete Success!"<<endl;
            }
        }
        _getch();
    }
}

void view_data(node *p)
{
    p = new node;
    p = head;
    if (head == NULL)
    {
        cout<<"Data Mahasiswa is Empty!"<<endl;
    }
    else
    {
        cout<<"ID       : "<<p->info.id<<endl;
        cout<<"Name     : "<<p->info.nama<<endl;
        cout<<"Born     : "<<p->info.lahir<<endl;
        cout<<"Class    : "<<p->info.kelas<<endl;
        cout<<"Phone    : "<<p->info.telpon<<endl<<endl;
        while (p->next != NULL)
        {
            p = p->next;
            cout<<"ID       : "<<p->info.id<<endl;
            cout<<"Name     : "<<p->info.nama<<endl;
            cout<<"Born     : "<<p->info.lahir<<endl;
            cout<<"Class    : "<<p->info.kelas<<endl;
            cout<<"Phone    : "<<p->info.telpon<<endl<<endl;
        }
    }
    _getch();
}
