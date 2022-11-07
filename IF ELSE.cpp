#include <conio.h>
#include <iostream>
#include <string>

using namespace std;
int main ()
{
    cout<< "Nama: ramadhani maulidia hilma" <<endl;
    cout<< "NIM: 22343028"<< endl;
    cout<< "program IF ELSE"<<endl;

    int n;
    string nama, predikat, ket;

    cout << "masukkan nilai" << endl;
    cin >> n;

    if (n>=90){
        predikat="A";
    } else if (n>=75){
        predikat="B";
    } else if (n>=50) {
        predikat="C";
    } else if (n>=40) {
        predikat="D";
    } else if (n<=40) {
        predikat="E";
    }
cout<<endl;
    if (predikat=="A" || predikat=="B" || predikat=="C"){
        ket="Lulus";
    } else {ket="Tidak Lulus";
    }
    cout << "anda mendapatkan nilai "<<  predikat << " dan dinyatakan " <<  ket << endl;

    getch();
}
