#define list.h

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
