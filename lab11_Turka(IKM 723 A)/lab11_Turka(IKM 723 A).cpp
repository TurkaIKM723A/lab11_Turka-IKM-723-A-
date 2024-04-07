#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    setlocale(LC_CTYPE, "ukr");

    cout << "Введiть значення змiнної a: ";
    cin >> a;
    cout << "Введiть значення змiнної b: ";
    cin >> b;
    cout << "Введiть значення змiнної c: ";
    cin >> c;

    int* ptr_a = &a;
    int* ptr_b = &b;
    int* ptr_c = &c;

    *ptr_a *= 2;

    int temp = *ptr_b;
    *ptr_b = *ptr_c;
    *ptr_c = temp;

    cout << " " << '\n';
    cout << "a пiсля збiльшення в 2 рази: " << a << '\n';
    cout << "b пiсля обмiну з c: " << b << '\n';
    cout << "c пiсля обмiну з b: " << c << '\n';
     
    return 0;
}
