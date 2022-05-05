#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <string>

#include "include/persegiempat.hpp"

using namespace std;

void operation(persegiempat p1,persegiempat p2){
    system("@cls || clear");
    cout<<"Info tentang persegi pertama"<<endl;
    p1.printhasil();
    cout<<"Info tentang persegi kedua"<<endl;
    p2.printhasil();
    persegiempat p3;
    p3=p1 + p2;
    if(p1==p2){
        cout<<"Hasil operasi penambahan kedua persegi "<<endl;
        p3.printhasil();
    }

    cout<<endl;cout<<endl;cout<<endl;
    cout<<"Press enter to continue...";
    cin.ignore();cin.ignore();

    system("@cls || clear");
    cout<<"Info tentang persegi pertama"<<endl;
    p1.printhasil();
    cout<<"Info tentang persegi kedua"<<endl;
    p2.printhasil();
   
    p3=p1 - p2;
    if(p1==p2){
        cout<<"Hasil operasi pengurangan kedua persegi "<<endl;
         p3.printhasil();
    }

    cout<<endl;cout<<endl;cout<<endl;
    cout<<"Press enter to continue...";
    cin.ignore();cin.ignore();
    return;
}

int main(){

     system("@cls || clear");
    cout<<"==>     Selamat Datang di aplikasi persegi empat    <==\n";
    cout<<"\n";cout<<"\n";cout<<"\n";cout<<"\n";
    cout<<"Made by Vincentius Gusti Putu Agung Bagus Mahendra"<<endl;
    cout<<"Student number 5024211071"<<endl;
    cout<<"Tekan enter untuk menggunakan aplikasi"<<endl;
	cin.ignore();
	cin.ignore();

    system("@cls || clear");
    float panjang = 0, lebar = 0, tengahx = 0, tengahy = 0;
    cout<<"Memasukkan persegiempat pertama \n";
    cout<<"Masukkan  panjang :"; cin>>panjang;
    cout<<"Masukkan  lebar :"; cin>>lebar;
    cout<<"Masukkan  titik tengah x :"; cin>>tengahx;
    cout<<"Masukkan  titik tengah y :"; cin>>tengahy;
    persegiempat p1(tengahx,tengahy,panjang,lebar);

    system("@cls || clear");
    panjang = 0; lebar = 0; tengahx = 0; tengahy = 0;
    cout<<"Masukkan persegiempat kedua : \n";
    cout<<"Masukkan  panjang :"; cin>>panjang;
    cout<<"Masukkan  lebar :"; cin>>lebar;
    cout<<"Masukkan  titik tengah x :"; cin>>tengahx;
    cout<<"Masukkan  titik tengah y :"; cin>>tengahy;
    cout<<endl;cout<<endl;cout<<endl;
    persegiempat p2(tengahx,tengahy,panjang,lebar);

    cout<<"Press enter to continue...";
    cin.ignore();

    system("@cls|| clear");
    cout<<"Info tentang persegi pertama"<<endl;
    p1.printhasil();
    cout<<"Info tentang persegi kedua"<<endl;
    p2.printhasil();

    if (p1==p2){cout<< "Kedua Persegi panjang saling beririsan"<<endl<<endl;}
    else {cout<< "Kedua Persegi panjang tidak saling beririsan"<<endl<<endl;}
    cout<<endl;cout<<endl;cout<<endl;
    cout<<"Press enter to continue...";
    cin.ignore();

    if (p1==p2){operation(p1,p2);}
    
    system("@cls || clear");
    cout<<"Info tentang persegi pertama"<<endl;
    p1.printhasil();
    cout<<"Info tentang persegi kedua"<<endl;
    p2.printhasil();
    ++p1;++p2;

    cout<<"Persegi pertama setelah di ++ : "<<endl;
    p1.printhasil();
    cout<<"Persegi kedua setelah di ++ : "<<endl;
    p2.printhasil();
    --p1;--p2;

    cout<<endl;cout<<endl;cout<<endl;
    cout<<"Press enter to continue...";
    cin.ignore();


    system("@cls || clear");
    cout<<"Info tentang persegi pertama"<<endl;
    p1.printhasil();
    cout<<"Info tentang persegi kedua"<<endl;
    p2.printhasil();
    --p1;--p2;

    cout<<"Persegi pertama setelah di -- : "<<endl;
    p1.printhasil();
    cout<<"Persegi kedua setelah di -- : "<<endl;
    p2.printhasil();
    ++p1;++p2;

    cout<<endl;cout<<endl;cout<<endl;
    cout<<"Press enter to continue...";
    cin.ignore();

    system("@cls || clear");
    cout<<"Membandingkan xmin dari persegi "<<endl;
    cout<<"X paling kiri dari persegi pertama adalah "<<p1[1]<<" sementara persegi kedua adalah "<<p2[1]<<endl;
    cout<<"Maka titik kiri persegi tersebut"; if (p1[1]<p2[1]){cout<<" yang kesatu lebih kiri"<<endl;}else if (p1[1] > p2[1]){cout<<" kedua lebih kiri"<<endl;}else {cout<< " sama posisinya"<<endl;}

    cout<<endl;cout<<endl;
    cout<<"Membandingkan xmax dari persegi "<<endl;
    cout<<"X paling kanan dari persegi pertama adalah "<<p1[2]<<" sementara persegi kedua adalah "<<p2[2]<<endl;
    cout<<"Maka titik kanan persegi tersebut"; if (p1[2]>p2[2]){cout<<" yang kesatu lebih kanan"<<endl;}else if (p1[2] < p2[2]){cout<<" kedua lebih kanan"<<endl;}else {cout<< " sama posisinya"<<endl;}

    cout<<endl;cout<<endl;
    cout<<"Membandingkan ymin dari persegi "<<endl;
    cout<<"Y paling bawah dari persegi pertama adalah "<<p1[3]<<" sementara persegi kedua adalah "<<p2[3]<<endl;
    cout<<"Maka titik bawah persegi tersebut"; if (p1[3]<p2[3]){cout<<" yang kesatu lebih bawah"<<endl;}else if (p1[3] > p2[3]){cout<<" kedua lebih bawah"<<endl;}else {cout<< " sama posisinya"<<endl;}

    cout<<endl;cout<<endl;
    cout<<"Membandingkan ymax dari persegi "<<endl;
    cout<<"Y paling atas dari persegi pertama adalah "<<p1[4]<<" sementara persegi kedua adalah "<<p2[4]<<endl;
    cout<<"Maka titik atas persegi tersebut"; if (p1[4]>p2[4]){cout<<" yang kesatu lebih atas"<<endl;}else if (p1[4] < p2[4]){cout<<" kedua lebih atas"<<endl;}else {cout<< " sama posisinya"<<endl;}

    cout<<endl;cout<<endl;cout<<endl;
    cout<<"Press enter to exit program...";
    cin.ignore();
    system("@cls || clear");

    return 0;
    
}