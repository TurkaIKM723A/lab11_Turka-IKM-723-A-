#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    setlocale(LC_CTYPE, "ukr");

    cout << "����i�� �������� ��i��� a: ";
    cin >> a;
    cout << "����i�� �������� ��i��� b: ";
    cin >> b;
    cout << "����i�� �������� ��i��� c: ";
    cin >> c;

    int* ptr_a = &a;
    int* ptr_b = &b;
    int* ptr_c = &c;

    *ptr_a *= 2;

    int temp = *ptr_b;
    *ptr_b = *ptr_c;
    *ptr_c = temp;

    cout << " " << '\n';
    cout << "a �i��� ��i������� � 2 ����: " << a << '\n';
    cout << "b �i��� ���i�� � c: " << b << '\n';
    cout << "c �i��� ���i�� � b: " << c << '\n';
     
    return 0;
}
