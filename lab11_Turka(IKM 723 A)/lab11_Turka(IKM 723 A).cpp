#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr"); 

    char* ptr;

    ptr = new char;

    *ptr = 'A';

    cout << "Значення, на яке вказує покажчик: " << *ptr << '\n';

    delete ptr;

    return 0;
}

