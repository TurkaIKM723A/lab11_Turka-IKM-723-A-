#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr"); 

    char* ptr;

    ptr = new char;

    *ptr = 'A';

    cout << "��������, �� ��� ����� ��������: " << *ptr << '\n';

    delete ptr;

    return 0;
}

