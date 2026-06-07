// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int y = (--x) + (x++) + (x--);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}