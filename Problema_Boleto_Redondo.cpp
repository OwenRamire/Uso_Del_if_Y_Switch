#include <iostream>
using namespace std;
int main ()
{
    int km,dia,kmt,kmap=0;
    cout << " Consigue tus boletos de viaje redondo aquí " << endl;
    cout << " Kilometros que recorreras: ";
    cin >> km;
    cout << " Dias de estancia: ";
    cin >> dia;
    kmt = km * 2;
    if (dia >= 7 && kmt >= 800)
    {
        kmap = kmt * 0.17;
        kmap = kmap - (kmap * 0.30);
        cout << " Total a pagar: " << kmap;
    }
    else if (dia < 7 && kmt < 800)
    {
        kmap = kmt * 0.17;
        cout << " Total a pagar: " << kmap;
    }

    return 0;
}
