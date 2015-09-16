#ifndef SECURITY_H_INCLUDED
#define SECURITY_H_INCLUDED

#define Nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define awal(p) (l).awal;
using namespace std;
struct  security
{
    int ids;
    string nama;
    string alamat;
    string notlp;
    string jk;
};
typedef security infotype;
typedef struct Elmlist *address;

struct Elmlist
{
    infotype info;
    address next;
};
struct list
{
    address awal;
};
address allocate (infotype x);
void buat_baru(infotype *x);
void cariid(infotype *x);
void insertfirst (list *l, address p);
void insertlast(list *l,address p);
void insertafter(list *l, address p, address s);
void deletefirst(list *l,address *p);
void deletelast(list *l,address *p);
void deleteafter(list *l, address *p, address s);
void view (list l);
address cari(list l, infotype x);

#endif
