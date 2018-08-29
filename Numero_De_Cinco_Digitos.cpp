#include <iostream>
using namespace std;
int main ()
{
    int num, uni, dece, cent, unimi, decemi;
    cout << " Dame un numero de 5 digitos: ";
    cin >> num;
    if(num >= 10000 && num <= 99999)
    {
        decemi = num / 10000;
        unimi = (num % 10000) / 1000;
        cent = (num % 10000) % 1000 / 100;
        dece = ((num % 10000) % 1000) % 100 / 10;
        uni = (((num % 10000)% 1000) % 100) % 10;
        cout << decemi << "   " << unimi << "   " << cent << "   " << dece << "   " << uni;
    }
    else
        cout << " tu numero es menor de 5 digitos "
}
