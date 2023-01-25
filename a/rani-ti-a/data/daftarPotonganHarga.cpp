#include <vector> // import library array dinamis
#include "../struct/PotonganHarga.cpp"  // import detail potongan harga dari struct PotonganHarga

// membuat data dari struct PotonganHarga
// const = agar datanya tetap/tidak berubah
// vector = deklarasi array dinamis
// <PotonganHarga> = tipe data dari struct PotonganHarga
// daftarPotonganHarga = nama array
/*
    datanya :

    {
        300000, = minimal harga untuk mendapatkan diskon
        10, = potongan harganya
    },  
*/

const vector<PotonganHarga> daftarPotonganHarga{
    {
        300000,
        10,
    },  
    {
        150000,
        5,
    },  
};