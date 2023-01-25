// memasukkan library tambahan
#include <iostream>

// agar ketika memanggil fungsi dari library di tidak harus pakai ::std, jadi langsung saja ke fungsinya
// contoh: std::cout (tidak pakai using namespace std), cout (pakai using namespace std)
using namespace std;

// membuat detail PotonganHarga menggunakan struct agar bisa menyimpan banyak tipe data & datanya
// struct = deklarasi struct
// PotonganHarga = nama struct
struct PotonganHarga{
    long minimalSubTotal;
    short persen;
};