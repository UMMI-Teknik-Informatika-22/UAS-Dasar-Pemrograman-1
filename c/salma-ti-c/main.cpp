#include<iostream>
#include<cstdlib>

using namespace std;

int main (){
    int pil, player, enemy;
    string ulang;
    do{
        system("CLS");
        cout << "1. Lempar dadu\n2. keluar\npilihan : ";
        cin >> pil;
        if (pil == 1){
            player = (rand() % 6)+1;
            enemy = (rand() % 6)+1;
            cout << "palyer : "<< player << endl;
            cout << "lawan : "<< enemy << endl;
            if(player>enemy){
            cout << "anda menang"<< endl;
            }else if (player<enemy){
            cout << "anda kalah" << endl;
            }else {
            cout << "seri" << endl;
            }
            cout << "ulang <y/n> : "; cin >> ulang;
        }else if (pil == 2){
            ulang = "n";
        }else {
            cout << "pilihan salah" << endl;
        }
    }while (ulang == "y");
    system("CLS");
    cout << "program selesai" << endl;
}
