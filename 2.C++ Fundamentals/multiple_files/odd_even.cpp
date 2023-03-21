#include <iostream>
#include "odd_even.h"

using namespace std;

void odd(int x) {
    if ((x % 2) != 0) cout << "It is odd.\n";
    else even(x);
}

void even(int x) {
    if ((x % 2) == 0) cout << "It is even.\n";
    else odd(x);
}
