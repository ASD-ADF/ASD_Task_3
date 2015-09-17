#include <iostream>
#include"list.h"
using namespace std;

int main()
{
    address P;
    list L;
    ((L).first) = NULL;
    absen dataAbsen;
    char pil;

    cout<< "==========PROGRAM ABSENSI PEGAWAI==========="<<endl;
    cout<< "1. Input Data"
    cout<< "2. Insert First"<<endl;
    cout<< "3. Insert After"<<endl;
    cout<< "4. Insert Last"<<endl;
    cout<< "5. Delete First"<<endl;
    cout<< "6. Delete Last"<<endl;
    cout<< "7. Delete After"<<endl;
    cout<< "8. Search Element"<<endl;
    cout<< "9. ViewList"<<endl;
    cout<< endl;
    cout << "Pilihan anda : ";
    cin>>pil;cout << endl;

    Pilihan:
    switch (pil) {
      case '1' : BuatData(&dataAbsen);InputData(dataAbsen); goto Pilihan;
      case '2' : insertFirst(&L, P); goto Pilihan;
      case '3' : insertLast(&L, P); goto Pilihan;
      case '4' : InsertAfter(&L, P); goto Pilihan;
      case '5' : deleteFirst(&L, P); goto Pilihan;
      case '6' : deleteLast(&L, P); goto Pilihan;
      case '7' : deleteAfter(&L, P); goto Pilihan;
      case '8' : searchElement(&L); goto Pilihan;
      case '9' : searchData(&L,P); goto Pilihan;
      default : goto Pilihan;
    }
    return 0;
}
