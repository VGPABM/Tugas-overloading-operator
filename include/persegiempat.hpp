#ifndef __PERSEGIEMPAT_HPP__
#define __PERSEGIEMPAT_HPP__

#include <iostream>

class persegiempat {
    private:
    float xmin,xmax,ymin,ymax,tengahxasli,tengahyasli,panjangasli,lebarasli;

    public:
    persegiempat();
    persegiempat(float tengahx,float tengahy, float panjang, float lebar);
    
    void printhasil();
    bool operator==(persegiempat);
    persegiempat operator+(persegiempat);
    persegiempat operator-(persegiempat);
    void operator++();
    void operator--();
    float operator[](int i);
};

#endif