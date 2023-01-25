// memasukkan library tambahan
#include <iostream> //  import library input out
#include <vector> // import library array dinamis

// memasukkan daftar data dari folder data
#include "./data/daftarBarang.cpp" // data daftar barang

#include "./service/pembelianBarang.h" // memasukkan proses pembelian barang
#include "./service/header.h" // memasukkan proses menampilkan header
#include "./service/footer.h" // memasukkan proses menampilkan footer

// agar ketika memanggil fungsi dari library di tidak harus pakai ::std, jadi langsung saja ke fungsinya
// contoh: std::cout (tidak pakai using namespace std), cout (pakai using namespace std)
using namespace std;

// fungsi utama yang akan di jalankan
int main() {
    int pilihNomorBarang; // deklarasi pilih nomor barang untuk di proses pada pemilihan data dari daftar barang

    header(); // memanggil fungsi header

    cout << "==== Daftar Barang ==== \n"; // menampilkan kalimat

    // melakukan perulangan dari daftar barang
    // 1. deklarasi & inisialisasi variabel i dengan nilai 0
    // 2. kondisi i lebih kecil dari jumlah daftar barang yang di hitungkan otomatis menggunakan fungsi .size()
    // 3. i di tambah 1
    for (int i = 0; i < daftarBarang.size(); i++) {

        // menampilkan daftar nama barang array daftarBarang dari indeks ke i, dan mengaksesnya . nama
        // contoh "1. Baju"
        cout << i + 1 << ". " << daftarBarang[i].nama << "\n";
    }
    
    cout << "\nPilih barang (1 - " << daftarBarang.size() << ") : "; // menampilkan label barang dari 1 sampai ke jumlah data barang
    cin >> pilihNomorBarang; // memasukkan nilai ke variabel pilihNomorBarang

    // memanggil fungsi pembelianBarang dan memasukkan parameter dari daftarBarang dengan indeks yang di proses variabel pilihNomorBarang - 1, karena indeks di mulai dari angka 0
    pembelianBarang(daftarBarang[pilihNomorBarang - 1]);

    // menampilkan footer
    footer();
}