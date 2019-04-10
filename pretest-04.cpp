/*
Nama    : Muhammad Zulfikar Ali
NPM     : 140810180064
Kelas   : B
Tanggal : 10 April 2019
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct ElemtList {
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList (List& first) {
    first = NULL;
}
void createElemt (pointer& pBaru) {
    pBaru = new ElemtList;
    cin.ignore();
    cout<<"NPM  : ";cin.get(pBaru->npm,14);
    cout<<"Nama : ";cin.get(pBaru->nama,40);
    cout<<"IPK  : ";cin>>pBaru->ipk;
    pBaru->next=NULL;
}
void insertSortIPK (List& first, pointer pBaru) {
    if (first==NULL)
        first = pBaru;
    else {
        pBaru->next=first;
        first=pBaru;
    }
}
void transversal (List first) {
    pointer pBantu;
    if (first==NULL) {
        cout<<"List kosong"<<endl;
    }
    else {
        pBantu = first;
        int i = 1;
        cout << "						Data Mahasiswa						" << endl;
		cout << "===========================================================" << endl;
		cout << setw(4) << "No" << setw(14) << "NPM" << setw(40) << "Nama" << setw(4) << "IPK" << endl;
		cout << "-----------------------------------------------------------" << endl;
		do {
			cout << setw(4) << i << setw(14) << pBantu->npm << setw(40) << pBantu->nama << setw(4) << pBantu->ipk << endl;
			pBantu = pBantu->next;
			i++;
		} while (pBantu != NULL); {
			cout << endl;
    }
}
}

int main () {
    pointer p;
    List mhs;
    int n;

    createList(mhs);
	cout << "1. Tambah Data" << endl;
	cout << "2. Keluar" << endl;
	cout << "Pilih : "; cin >> n;

	while (n != 0) {
		if (n = 1) {
			createElemt(p);
			insertSortIPK(mhs, p);
			transversal(mhs);
		}
		else if (n = 2) {
			return 0;
		}
		else {
			cout << "ERROR" << endl;
		}
	}

	return 0;
}
