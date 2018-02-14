#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
	L.first = NULL;
    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
	P = (address)malloc(sizeof(elmlist));
	P->info = x;
	P->next = NULL;
    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
	delete(P);
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
	if (L.first == NULL) {
		L.first = P;
	}
	else {
		P->next = L.first;
		L.first = P;
	}
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
	if (L.first != NULL) {
		address R = L.first;
		while (R->next != NULL)
			R = R->next;
		R->next = P;
	}
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

	address P = L.first;
    //-------------your code here-------------
	if (L.first != NULL) {
		while (P != NULL && P->info.id != x.id) {
			P = P->next;
		}
	}
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
	if (L.first != NULL) {
		P = L.first;
		L.first = L.first->next;
	}
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
	if (L.first != NULL) {
		address R = L.first;
		while (R->next->next != NULL)
			R = R->next;
		P = R->next;
		R->next = NULL;
	}
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
	address R = L.first;
	while (R != NULL) {
		view_data(R->info);
		R = R->next;
	}
    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
	if (Prec != NULL && P != NULL) {
		P->next = Prec->next;
		Prec->next = P;
	}
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
	if (Prec != NULL) {
		P = Prec->next;
		Prec->next = Prec->next->next;
	}
    //----------------------------------------
}

