#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int n, m;

    cout << "����i�� ����i��i��� ������ x[n]: ";
    cin >> n;
    cout << "����i�� ����i��i��� ������ y[m]: ";
    cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "����i�� �������� ������ x[n]: ";

    for (int i = 0; i < n; ++i) {

        cin >> x[i];

    }

    cout << "����i�� �������� ������ y[m]: ";

    for (int i = 0; i < m; ++i) {

        cin >> y[i];

    }

    int first_element_x = x[0];
    int count = 0;

    for (int i = 0; i < m; ++i) {

        if (y[i] == first_element_x) {

            count++;

        }
    }

    cout << "������ ������� ������ x �����i������ � �����i y " << count << " ���i�." << '\n';

    delete[] x;
    delete[] y;

    return 0;
}

