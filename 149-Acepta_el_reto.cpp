#include <iostream>
using namespace std;
int main() {
    int num = 0;
    int mayor;
    int total;
    //cin >> total;

    while (cin >> total) {
        mayor = 0;
        //total--;

        if (total >= 1) {
            for (int i = 0; i < total; i++) {
                cin >> num;

                if (num > mayor) {
                    mayor = num;
                }
            }

            cout << mayor << endl;
        }
    }

    return 0;
}
