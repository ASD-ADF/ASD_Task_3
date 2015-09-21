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
