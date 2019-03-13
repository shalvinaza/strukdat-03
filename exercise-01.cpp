/*
 Author     : Shalvina Zahwa Aulia
 NPM        : 140810180052
 Deskripsi  :
 Tahun      : 2019
 */
#include<iostream>
#include<cmath>

using namespace std;


typedef struct {
    float panjang;
    float lebar;
}segiempat;

void input (segiempat *s);
float keliling (segiempat s);
float luas (segiempat s);
float diagonal (segiempat s);
void print(segiempat s);

int main (){
    segiempat* sg;
    sg = new segiempat;

    input (sg);
    keliling(*sg);
    luas(*sg);
    diagonal(*sg);
    print(*sg);
}
void input (segiempat *s){
    cout << "\tMasukkan data : \n";
    cout << "Panjang    : "; cin >> s->panjang;
    cout << "Lebar      : "; cin >> s->lebar;
    cout << endl;
}
float keliling (segiempat s){
    float keliling = 2*(s.panjang) + 2*(s.lebar);
    return (keliling);
}
float luas (segiempat s){
    float luas = s.panjang * s.lebar;
    return (luas);
}
float diagonal (segiempat s){
    float diagonal = sqrt((s.panjang*s.panjang) + (s.lebar*s.lebar));
    return (diagonal);
}
void print(segiempat s){
    cout << "Panjang  : " << s.panjang << endl;
    cout << "Lebar    : " << s.lebar << endl;
    cout << "Keliling : " << keliling(s) << endl;
    cout << "Luas     : " << luas(s) << endl;
    cout << "Diagonal : " << diagonal(s) <<endl;
}

