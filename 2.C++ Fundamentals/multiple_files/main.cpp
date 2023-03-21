#include <iostream>
#include "odd_even.h"

using namespace std;

int main() {
    int i;
    do {
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        odd(i);
    } while (i != 0);
    return 0;
}
