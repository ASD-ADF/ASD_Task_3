#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) (L).first;

using namespace std;
struct pro
{
    string nama,jenis,id,tgl;
    float harga;
};
typedef pro infotype;
typedef struct elmlist *address;
struct elmlist
{
    infotype info;
    address next;
};
struct list
{
    address first;
};

address alokasi (infotype x);
void baru (infotype *x);
void insertfirst (list *L, address P);
void insertlast(list *L,address P);
void insertafter(list *L, address P, address S);
void delfirst(list *L,address *P);
void dellast(list *L,address *P);
void delafter(list *L, address *P, address*S);
void view (list L);
address searchelm(list L, infotype x);
#endif // LIST_H_INCLUDED
