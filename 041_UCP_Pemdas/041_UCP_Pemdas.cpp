// 1. - string nama
//    - int a
//    - float nilai

// 2. if (nim)
//    {
//	    cout << "NIM sudah ada" << endl;
//	    return;
//    }

// 3. struct Mahasiswa {
//      string nim;
//      string nama;
//    }
// 
//    int main() {
//      Mahasiswa mhs;
//          cout << "Nomor Mahasiswa: ";
//          cin >> mhs.nim 
//          cout << "Nama Mahasiswa: ";
//          cin >> mhs.nama
//    }

// 4. prosedur: void sapaan() {
//					cout << "Halo Semuanya!";
//				}
// 
//				int main() {
//					sapaan();
//					return 0;
//				}
// 
//	  fungsi: int perkalian (int a, int b) {
//				return a*b;
//			  }
//		
//			  int main() {
//				int hasil = perkalian (4,2);
//				cout << "Hasil: " << hasil << endl;
//				return 0;
//			  }	  

// 5. a. FOR
//		
//			for (int i = 0; i < 3; i++) {
//				cout  << endl;
//				cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
//				cout << "\n NIM: " << mhs[i].nim;
//				cout << "\n Nama: " << mhs[i].nama;
//				cout << "\n Umur: " << mhs[i].umur;
//				cout << endl;
//			}
// 
//    b. WHILE
//      
//			while (true)
//			{
//				cout << "Masukkan Nama: ";
//				cin >> nama;
//			}
// 
//	  c. DO .. WHILE
// 
//			do
//          {
//              proses yg diulang
//          } while (kondisi)
//    
//

#include <iostream>
#include <string> 
using namespace std;

string nama;
int nilai_mtk;
int nilai_bahasa_inggris;
string status;

int main() {
	const int banyak_kandidat = 20;
	string nama[banyak_kandidat];
	int nilai_mtk[banyak_kandidat];
	int nilai_bahasa_inggris[banyak_kandidat];
	string status[banyak_kandidat];

 

void input()
{
    cout << "Nama kandidat ke- = ";
    cin >> nama;
    cout << "Nilai Matematika = ";
    cin >> nilai_mtk;
    cout << "Nilai Bahasa Inggris = ";
    cin >> nilai_bahasa_inggris;

}

cout << "Nama \t status" << endl;
for (int i = 0; i < banyak_kandidat; ++i) {
    cout << nama[i] << "\t" << status[i] << endl;
    return 0
}



