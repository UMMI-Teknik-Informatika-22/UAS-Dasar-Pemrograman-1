#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

struct vill{
    string nama;
    string deskripsi;
    string fasilitas;
    string harga;
    
};

void reservp(){
    int inap, piltod, norek;
    vill price[22];
    price[1].harga = "Rp 1.500.000";
    cout << "Harga permalamnya adalah : " << price[1].harga << endl;
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << "Anda akan menginap selama : " << inap << " Hari" << endl;

    system("cls");
        if (inap = 1){
        cout << "Total pembayaran anda adalah : " << 1500000*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << 1500000*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << 1500000*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << 1500000*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservc(){
    int inap, piltod, norek;
    vill price[22];
    price[1].harga = "Rp 1.500.000";
    cout << "Harga permalamnya adalah : " << price[1].harga << endl;
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << "Anda akan menginap selama : " << inap << " Hari" << endl;

    system("cls");
        if (inap = 1){
        cout << "Total pembayaran anda adalah : " << 1500000*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << 1500000*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << 1500000*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << 1500000*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

int main () {
    int pil, pilv;
    char back;
    vill villa[22];
    villa[1].nama = "Villa Cemara Situgunung";
    villa[1].deskripsi = "Villa Cemara Situgunung adalah pilihan tepat untuk wisatawan yang mengunjungi sukabumi, karena \n\t\t  menawarkan suasana yang sesuai untuk keluarga ditambah dengan fasilitas yang tersedia dapat \n\t\t  menyempurnakan penginapan anda";
    villa[1].fasilitas = "Tv\n\t\t  Tempat tidur\n\t\t  Lemari pakaian\n\t\t  Set meja rias\n\t\t  Pemanas air\n\t\t  Kloset duduk\n\t\t  Free kopi, dan teh";

    villa[2].nama = "Villa Pelangi";
    villa[2].deskripsi = "";
    villa[2].fasilitas = "";

    do {
    cout << "\t\t===================================================================================" << endl;
    cout << "\t\t==========       Program Layanan Pemesanan Villa Daerah Situgunung       ==========" << endl;
    cout << "\t\t==========                  Find Your Best Accomodation                  ==========" << endl;
    cout << "\t\t===================================================================================" << endl;
    cout << endl;
    cout << "\t\t        [1]                [2]               [3]                  [4]             " << endl;
    cout << "\t\t[Pesan Kamar Villa]  [Rental Kendaraan]  [Ojeg Lokal]  [Destinasi Wisata Sekitar]\n" << endl;
    cout << "Pilih dengan Nomor\n \nNomor yang Anda Pilih adalah : "; cin >> pil;

    system("cls");
    switch(pil){
        case 1:
        cout << "Kamar villa yang tersedia adalah : \n1. Villa Cemara Situgung\n2. Villa Pelangi\n3. Saung Odi\n4. Villa Nada Situgunung" << endl;
        cout << "5. Villa Kuning\n6. Villa Arayya\n7. Villa, Resto, dan Cafe\n8. Villa Alinka\n9. Dzahra Vilages\n10. Villa Sammy" << endl;
        cout << "11. Rumah Nenek Tepi Lembah\n12. Bumi Sanginten Cabin dan Glamping\n13. Vila Bro\n14. Villa Viny Vidy\n14. RedDorz Syariah Near Wisata Situgunung" << endl;
        cout << "15. Villa Yawitra Asri\n16. Villa Neema\n17. Villa Biru\n18. Familly Villa Gentong\n19. Wisma Panineungan\n20. Saung Geulis" << endl;
        cout << "21. Villa Citra\n22. Saung Alam Home Stay" << endl;
        cout << "Pilih dengan nomor\n \nNomor yang Anda Pilih adalah : "; cin >> pilv;

        system("cls");
        switch(pilv){
            case 1:
            cout << "Nama Villa \t: " << villa[1].nama << endl;
            cout << "Tentang Villa \t: " << villa[1].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[1].fasilitas << endl;
            cout << endl;
            reservc();
            break; 

            case 2:
            cout << "Nama Villa \t: " << villa[2].nama << endl;
            cout << "Tentang Villa \t: " << villa[2].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[2].fasilitas << endl;
            cout << endl;
            reservp();
            break;
        }
    }
    cout << "Kembali ke menu utama ? (y/n) : "; cin >> back;
    system("cls");
    } while (back == 'y');

}

