#include <iostream>
#include"include/persegiempat.hpp"

persegipanjang::persegipanjang(float tengahx,float tengahy, float panjang, float lebar) //Deklarasi constructor dari kelas persegipanjang
{
    //mengubah titiktengah, panjang, lebar menjadi xmin,xmax,ymin,ymax
    this->tengahxasli = tengahx;
    this->tengahyasli = tengahy;
    this->panjangasli = panjang;
    this->lebarasli = lebar;
    this->xmin = tengahx - (panjang*0.5);
    this->xmax = tengahx + (panjang*0.5);
    this->ymin = tengahy - (lebar*0.5);
    this->ymax = tengahy + (lebar*0.5);
} 

persegipanjang::persegipanjang() //Deklarasi persegipanjang kosong untuk main.cpp
{
}

bool persegipanjang::operator==(persegipanjang anjay)//Oveloading operator ==
{
    if ((this->xmin < anjay.xmax) && (anjay.xmin<this->xmax) && (this->ymin < anjay.ymax) && (anjay.ymin<this->ymax)){
        return true;
    } else {
        return false;
    }
}

persegipanjang persegipanjang::operator+(persegipanjang anjay)//Overloading operator +
{
    persegipanjang baru(0,0,0,0);
    if (*this == anjay){
        if(this->xmin<anjay.xmin){
            baru.xmin = this->xmin;
        } else {baru.xmin = anjay.xmin;}
        if(this->xmax>anjay.xmax){
            baru.xmax = this->xmax;
        } else {baru.xmax = anjay.xmax;}
        if(this->ymin<anjay.ymin){
            baru.ymin = this->ymin;
        } else {baru.ymin = anjay.ymin;}
        if(this->ymax>anjay.ymax){
            baru.ymax = this->ymax;
        } else {baru.ymax = anjay.ymax;}
    }else{std::cout<<"Tidak beririsan woy"<<std::endl;}
    return baru;
}

persegipanjang persegipanjang::operator-(persegipanjang anjay)//Overloading operator -
{
    persegipanjang baru(0,0,0,0);
    if (*this == anjay){
        if(this->xmin<anjay.xmin){
            baru.xmin = anjay.xmin;
        } else {baru.xmin = this->xmin;}
        if(this->xmax>anjay.xmax){
            baru.xmax = anjay.xmax;
        } else {baru.xmax = this->xmax;}
        if(this->ymin<anjay.ymin){
            baru.ymin = anjay.ymin;
        } else {baru.ymin = this->ymin;}
        if(this->ymax>anjay.ymax){
            baru.ymax = anjay.ymax;
        } else {baru.ymax = this->ymax;}
    }else{std::cout<<"Tidak beririsan woy"<<std::endl;}
    return baru;
}

void persegipanjang::printhasil()//Melakukan output dari attribute Persegipanjang
{
    std::cout<<"Titik tengah x persegi : "<<this->tengahxasli<<std::endl;
    std::cout<<"Titik tengah y persegi : "<<this->tengahyasli<<std::endl;
    std::cout<<"Panjang persegi : "<<this->panjangasli<<std::endl;
    std::cout<<"Lebar persegi : "<<this->lebarasli<<std::endl;
    std::cout<<"titik x paling kiri : "<<this->xmin<<std::endl;
    std::cout<<"titik x paling kanan : "<<this->xmax<<std::endl;
    std::cout<<"titik y paling bawah : "<<this->ymin<<std::endl;
    std::cout<<"titik y paling atas : "<<this->ymax<<std::endl;
    std::cout<<"\n\n";
}

void persegipanjang::operator++()//Overloading operator ++
{
    float panjang,lebar,tengahx,tengahy;
    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    tengahx = this->xmin + (panjang/2);
    tengahy = this->ymin + (lebar/2);

    panjang = panjang*2;
    lebar = lebar*2;

    this->xmin = tengahx-(panjang/2);
    this->ymin = tengahy-(lebar/2);

    this->xmax = tengahx+(panjang/2);
    this->ymax = tengahy+(lebar/2);
}

void persegipanjang::operator--()//Overloading operator --
{
    float panjang,lebar,tengahx,tengahy;
    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    tengahx = this->xmin + (panjang/2);
    tengahy = this->ymin + (lebar/2);

    panjang = panjang/2;
    lebar = lebar/2;

    this->xmin = tengahx-(panjang/2);
    this->ymin = tengahy-(lebar/2);

    this->xmax = tengahx+(panjang/2);
    this->ymax = tengahy+(lebar/2);
}

float persegipanjang::operator[](int i)//Overloading operator []
{
    switch (i)
    {
    case 1:
        return this->xmin;
        break;

    case 2:
        return this->xmax;
        break;

    case 3:
        return this->ymin;
        break;

    case 4:
        return this->ymax;
        break;
    }
    
    return 0;
}

