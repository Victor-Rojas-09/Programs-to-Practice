//Victor Manuel Rojas Trejos 
//Programacion II
#include <iostream>
#include <vector>
using namespace std;

//Funcion para convertir el numero en vector
vector<int> IntToVector(int n) {
    vector<int> digits;

    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    
    return digits;
}//end IntToVector

//Funcion que compara si las sumas de las mitades del numero son iguales
void CompareSums(vector<int>& digits) {
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < digits.size()/2; ++i) {
        sum1 += digits[i];
        sum2 += digits[i + digits.size()/2];
    }

    if (sum1 == sum2) {
        cout << "result: " << sum1 << " " << 1 << endl;
    } else {
        cout << "result: " << sum1 << " " << 0 << endl;
    }
}//end CompareSums

int main() {
    int number;
    cout << "Este programa verifica si las sumas de los digitos de un numero entero son iguales." << endl;
    cout << "Digita un numero entero: ";
    cin >> number;

    if (number > 0){
        vector<int> digitVector = IntToVector(number);
        if ((digitVector.size() % 2) != 0) {
            cout << "El numero de digitos del numero debe ser par." << endl;
        }
        else{
            CompareSums(digitVector);
            }
    }
    else{
        cout << "Debe ser un entero positivo." << endl;
    }
    return 0;
}
