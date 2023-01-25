#include <vector> // import library array dinamis
#include "../struct/Barang.cpp" // import detail barang dari struct Barang

// membuat data dari struct Barang
// const = agar datanya tetap/tidak berubah
// vector = deklarasi array dinamis
// <Barang> = tipe data dari struct Barang
// daftarBarang = nama array
/*
    datanya :

    {
        "Baju", = nama barang
        35000, = harga barang
    },
*/

const vector<Barang> daftarBarang{
    {
        "Baju",
        35000,
    },
    {
        "Celana",
        35000,
    },
    {
        "Ember",
        35000,
    },
    {
        "Gayung",
        35000,
    },
    {
        "Sendal",
        35000,
    },
};