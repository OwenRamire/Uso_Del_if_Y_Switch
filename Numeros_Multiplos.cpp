#include <iostream>
using namespace std;
int main ()
{
    int num1,num2;
    cout <<endl;
    cout << "verifiquemos si el primer numero es multiplo del segundo" <<endl;
    cout << "dame tu primer numero: ";
    cin >> num1;
    cout << "dame tu segundo numero: ";
    cin >> num2;
    if (num1 % num2 == 0)
        cout << num1 << " es multiplo de " << num2;
    else
        cout << num1 << " no es multiplo de " << num2;
    return 0;
}
