#ifndef __PERSEGIEMPAT_HPP__
#define __PERSEGIEMPAT_HPP__

#include <iostream>

class persegipanjang{
    private:
    float xmin,xmax,ymin,ymax,tengahxasli,tengahyasli,panjangasli,lebarasli;
    //attribute persegipanjang
    
    public:
    persegipanjang();
    persegipanjang(float tengahx,float tengahy, float panjang, float lebar);
    
    void printhasil();
    bool operator==(persegipanjang);
    persegipanjang operator+(persegipanjang);
    persegipanjang operator-(persegipanjang);
    void operator++();
    void operator--();
    float operator[](int i);
    //fungsi-fungsi dari kelas persegipanjang
    
}; //deklarasi kelas persegipanjang

#endif
