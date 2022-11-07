#include <iostream>

using namespace std;

int main ()
{
    cout << "Nama: Ramadhani Maulidia Hilma"<< endl;
    cout << "NIM : 22343028"<< endl;
    cout << "Program DO WHILE" << endl;

    int deret;

    cout << "deret angka: "<<endl;
    cin >>deret;
    cout<<endl;
    do{
        cout << deret << " ";
        deret=deret+1;
        deret++;
    }while (deret<=20);
    cout << "\n\n== Deret Selesai Ditampilkan ==\n";

    return 0;
}
















