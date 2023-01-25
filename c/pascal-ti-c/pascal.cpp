#include<iostream>
#include<stdlib.h>
using namespace std ;

void macamMacamWahana (string namaNamaWahana){
    cout << namaNamaWahana << endl ;
}

void hargaTiket (string namaWahana, int harga){
    cout << namaWahana << "= " << harga << endl ;
}
int tiketWahana , banyakTiket, totalPembayaran ;

int main (){
    int pilih ;
    mymenu :
    cout << "=============== SELAMAT DATANG DI APLIKASI WAHANA MALAM ===============" << endl ;
    cout << "\n================================= MENU ================================\n" << endl ;
    string menu[3]={"1. Macam - Macam Wahana", "2. Harga Tiket", "3. Pembelian Tiket"} ;
    for (int i=0;i<3;i++){
        cout << menu[i] << endl ;
    }
    cout << "\n=======================================================================" << endl ;
    cout << "Pilih Menu : " ;
    cin >> pilih;
    system("cls");
    if (pilih==1){
        cout << "======================= Macam - Macam Wahana ==========================\n " << endl ;
        macamMacamWahana ("1. Komedi Putar\t\t ") ;
        macamMacamWahana ("2. Bianglala\t\t ") ;
        macamMacamWahana ("3. Ombak Banyu\t\t ") ;
        macamMacamWahana ("4. Rumah Hantu\t\t ") ;
        macamMacamWahana ("5. Kereta Api Mini\t ") ;
        macamMacamWahana ("6. Mandi Bola\t\t ") ;
        cout << "\nKetik '9' untuk kembali ke menu utama\n" ;
        cout << "Ketik Di Sini : " ;
        cin >> pilih ;
        system("cls");
        if (pilih==9){
            goto mymenu ;
        }
    }else if (pilih==2){
        cout << "=========================== Harga Tiket ===============================\n " << endl ;
        hargaTiket ("1. Komedi Putar\t\t ", 5000) ;
        hargaTiket ("2. Bianglala\t\t ", 10000) ;
        hargaTiket ("3. Ombak Banyu\t\t ", 10000) ;
        hargaTiket ("4. Rumah Hantu\t\t ", 5000) ;
        hargaTiket ("5. Kereta Api Mini\t ", 5000) ;
        hargaTiket ("6. Mandi Bola\t\t ", 5000) ;
        cout << "\nKetik '9' untuk kembali ke menu utama\n" ;
        cout << "Ketik Di Sini : " ;
        cin >> pilih ;
        system("cls");
        if (pilih==9){
            goto mymenu ;
        }
    }else if (pilih==3){
        cout << "========================= Pembelian Tiket ===========================\n " << endl ;
        hargaTiket ("1. Komedi Putar\t\t ", 5000) ;
        hargaTiket ("2. Bianglala\t\t ", 10000) ;
        hargaTiket ("3. Ombak Banyu\t\t ", 10000) ;
        hargaTiket ("4. Rumah Hantu\t\t ", 5000) ;
        hargaTiket ("5. Kereta Api Mini\t ", 5000) ;
        hargaTiket ("6. Mandi Bola\t\t ", 5000) ;
        cout << "\nTiket Wanaha No \t: " ;
        cin >> tiketWahana ;
        cout << "Berapa Banyak Tiket \t: " ;
        cin >> banyakTiket ;
        cout << "Total Pembayaran \t: " ;
        if (tiketWahana==1){
            totalPembayaran=banyakTiket*(5000) ;
            cout << totalPembayaran << endl ;
        }else if (tiketWahana==2){
            totalPembayaran=banyakTiket*(10000) ;
            cout << totalPembayaran << endl ;
        }else if (tiketWahana==3){
            totalPembayaran=banyakTiket*(10000) ;
            cout << totalPembayaran << endl ;
        }else if (tiketWahana==4){
            totalPembayaran=banyakTiket*(5000) ;
            cout << totalPembayaran << endl ;
        }else if (tiketWahana==5){
            totalPembayaran=banyakTiket*(5000) ;
            cout << totalPembayaran << endl ;
        }else if (tiketWahana==6){
            totalPembayaran=banyakTiket*(5000) ;
            cout << totalPembayaran << endl ;
        }
        cout << "\n=========================== TERIMAKASIH :) ==========================\n" ;
    }
}