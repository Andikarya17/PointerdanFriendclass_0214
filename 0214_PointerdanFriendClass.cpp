#include <iostream>
using namespace std;
 
class persegiPanjang 
{
public : 
    int panjang, lebar;
        int luasPersegiPanjang(int b, int a)
        {
            return a * b;
        }

        int hitung(persegiPanjang p)
        {
            return p.panjang;
        }
};

class segitiga
{
public : 
    int tinggi,
        alas;

    int luasSegitiga(int a, int t)
        {
            return 0.5 * a * t;
        }
};

int main(){
    persegiPanjang pp;
    segitiga sg;
    cout << "Masukan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukan lebar : ";
    cin >> pp.lebar;
    cout << "Masukan Tinggi : ";
    cin >> sg.tinggi;
    cout << "Masukan Alas : ";
    cin >> sg.alas;
    cout << "Luas Persegi Panjang : " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) <<endl;
    cout << "Luas Segitiga : " << sg.luasSegitiga(sg.tinggi, sg.alas) <<endl;


}