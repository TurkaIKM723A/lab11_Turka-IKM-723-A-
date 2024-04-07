#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "ukr");

    int n, m;

    cout << "¬ведiть розмiрнiсть масиву x[n]: ";
    cin >> n;
    cout << "¬ведiть розмiрнiсть масиву y[m]: ";
    cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "¬ведiть елементи масиву x[n]: ";

    for (int i = 0; i < n; ++i) {

        cin >> x[i];

    }

    cout << "¬ведiть елементи масиву y[m]: ";

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

    cout << "ѕерший елемент масиву x зустрiчаЇтьс€ в масивi y " << count << " разiв." << '\n';

    delete[] x;
    delete[] y;

    return 0;
}

