/* program menghitung pembayaran kuliah mahasiswa menggunakan struktur, diketahui :
a. S1
    -SPP tetap Rp4.000.000
    -SKS = Rp 6.ooo

*/

#include <iostream>
#include <vector>

using namespace std;

struct Fakultas{
    string nama;
    vector<string> daftarProgramStudi;
};

vector<Fakultas> daftarFakultas{
    {
      "Sains & Teknologi",
      {
          "Teknik Sipil",
          "Teknik Informatika",
          "Kimia",
      },
    },
};


struct Mahasiswa{
	string nama,
        fakultas,
        programStudi;
    int nim,
    semester;
};

void tampilkanFakultas(Fakultas fakultas) {

}

int main() {
    string namaLengkap;
    int nim, nomorFakultas, nomorProgramStudi;

    cout << "==== Sistem Perhitungan Pembayaran Kuliah ====\n\n";

    cout << "Masukkan nama lengkap : ";
    getline(cin, namaLengkap);

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "\nDaftar fakultas : ";
    for (int i = 0; i < daftarFakultas.size(); i++) {
        cout << i + 1 << ". " << daftarFakultas[i].nama << endl;
    }
    cout << "Pilih fakultas : ";
    cin >> nomorFakultas;

    // tampilkanFakultas(daftarFakultas[nomorFakultas - 1]);

    cout << "\nDaftar program studi : ";
    for (int i = 0; i < daftarFakultas[nomorFakultas - 1].daftarProgramStudi.size(); i++) {
        cout << i + 1 << ". " << daftarFakultas[nomorFakultas - 1].daftarProgramStudi[i] << endl;
    }
}