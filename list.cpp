//Anggota Kelompok:
//Fachri Ul Albab(1301140151)
//Alfian Pamuungkas S(1301144411
//Ezekiel Manurung(
//IF-38-01
struct user
{
    int id;
    string username;
    int NoInet;
    int NoTelp;
    string alamat;
};

struct elementlist
{
    user infotype;
    elementlist *next;
};*head, *p, *q;

void menu()
{
    int menu;
    cout<<"================"<<endl;
    cout<<"      Menu      "<<endl;
    cout<<"================"<<endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert After"<<endl;
    cout<<"3. Insert Last"<<endl;
    cout<<"4. Delete First"<<endl;
    cout<<"5. Delete After"<<endl;
    cout<<"6. Delete Last"<<endl;
    cout<<"7. View List"<<endl;
    cin>>menu;
}

void ins_first(elementlist *p)
{
    p=new elementlist;
    cout<<"ID: ";
    cin>>p->infotype.id;
    cout<<"Username: ";
    cin>>p->infotype.username;
    cout<<"NO.Internet: ";
    cin>>p->infotype.NoInet;
    cout<<"NO.Telepon: ";
    cin>>p->infotype.NoTelp;
    cout<<"Alamat: ";
    cin>>p->infotype.alamat;
    p->next=head;
    head=p;
}

void ins_after(elementlist *p,elementlist *q)
{
    p=new elementlist;
    q=new elementlist;
    cout<<"ID: ";
    cin>>p->infotype.id;
    cout<<"Username: ";
    cin>>p->infotype.username;
    cout<<"NO.Internet: ";
    cin>>p->infotype.NoInet;
    cout<<"NO.Telepon: ";
    cin>>p->infotype.NoTelp;
    cout<<"Alamat: ";
    cin>>p->infotype.alamat;
    p=head;
    p->next=NULL;
    p->next=q->next;
    q->next=p;
}

void ins_last(elementlist *p,elementlist *q)
{
    P=new elementlist;
    q=new elemenlist;
    cout<<"ID: ";
    cin>>p->infotype.id;
    cout<<"Username: ";
    cin>>p->infotype.username;
    cout<<"No.Internet: ";
    cin>>p->infotype.NoInet;
    cout<<"No.Telepon: ";
    cin>>p->infotype.NoTelp;
    cout<<"Alamat: ";
    cin>>p->infotype.alamat;
    q=head;
    while(q->next!=NULL)
        q=q->next;
}

void del_first(elementlist *p)
{
    if(head==NULL)
        cout<<"Input Data First"
    else
        p=new elementlist;
        p=head;
        head=p->next;
        p->next=NULL;
}

void del_after(elementlist *p,elementlist *q)
{
    if(head==NULL)
        cout<<"Input Data First"
    else
        p=new elementlist;
        q=new elementlist;
        p=head;
        q=p->next;
        p->next=q->next;
        q->next=NULL;
}

void del_last(elemenlist *p,elementlist *q)
{
    if(head==NULL)
        cout<<"Input Data First"
    else
        p=new elementlist;
        q=new elementlist;
        q=head;
        p=q->next;
        q->next=NULL;
}

void view_list(elemenlist *p)
{
    p=head;
    cout<<"ID: "<<p->infotype.id<<endl;
    cout<<"Username: "<<p->infotype.username<<endl;
    cout<<"NO.Internet: "<<P->infotype.NoInet<<endl;
    cout<<"NO.Telepon: "<<p->infotype.NoTelp<<endl;
    cout<<p->"Alamat: "<<infotype.alamat<<endl;
    while(p->next!=NULL)
    {
        p=head;
        cout<<"ID: "<<p->infotype.id<<endl;
        cout<<"Username: "<<p->infotype.username<<endl;
        cout<<"NO.Internet: "<<P->infotype.NoInet<<endl;
        cout<<"NO.Telepon: "<<p->infotype.NoTelp<<endl;
        cout<<p->"Alamat: "<<infotype.alamat<<endl;
        p=p->next;
    }
}
