#include "list.h"

using namespace std;

address Alokasi(infotype x){
	address P= (address) malloc(sizeof(elmtSingleLinkedList));
	info(P)=x;
	next(P)=Nil;
}

void createEmptyList(SingleLinkedList *L){
	first(*L)=Nil;
}

bool isListEmpty(SingleLinkedList L){
	return first(L)==Nil;
}

void Dealokasi(address P){
	free(P);
}

void insertFirst(SingleLinkedList *L, infotype x){
	address P= Alokasi(x);
	if(first(*L)==Nil){
		first(*L)=P;
	}
	else{
		next(P)=first(*L);
		first(*L)=P;
	}
}

void insertLast(SingleLinkedList *L, infotype x){
	address P=Alokasi(x);
	if(isListEmpty (*L)==true){
		first(*L)=P;
	}
	else{
		address Q= first(*L);
		while (next(Q)!=Nil){
			Q=next(Q);
		}
		next(Q)=P;
	}
}

void insertAfter(SingleLinkedList *L, address Predecessor, infotype x){
	address P= Alokasi(x);
	if(next(Predecessor)!=Nil){
		next(P)=next(Predecessor);
		next(Predecessor)=P;
	}
	else{
		next(Predecessor)=P;
	}
}

void deleteFirst(SingleLinkedList *L){
	address P=first(*L);
	first(*L)=next(first(*L));
	next(P)=Nil;
	Dealokasi(P);
}

void deleteLast(SingleLinkedList *L){
	address Q=first(*L);
	while (next(next(Q))!=Nil){
		Q=next(Q);
	}
	address P=next(Q);
	next(Q)=Nil;
	Dealokasi(P);
}

void deleteAfter(SingleLinkedList L, address Predecessor){
	address P= next(Predecessor);
	if(P!=Nil){
		if(next(P)!=Nil){
			next(Predecessor)=next(P);
		}
		else{
			next(Predecessor)=Nil;
		}
		next(P)=Nil;
		Dealokasi(P);

	}
}

address findElementList(char nama[], SingleLinkedList L){
    address P=first(L);
    while(strcmp(nama,info(P).nama)!=Nil && P!=Nil){
        P=next(P);
    }
    return P;
}

void printAll(SingleLinkedList L){
	if (isListEmpty(L)){
		cout<<"List kosong"<<endl;
	}
	else{
		address P = first(L);
        while(P!=Nil) {
            cout <<"ID="<<info(P).id<<"Nama="<<info(P).nama<<", Departemen="<<info(P).departemen<<", Gedung="<<info(P).gedung<<endl;
            P = next(P);
	    }
	}
	getch();
}


