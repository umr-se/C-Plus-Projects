
#include <iostream>
using namespace std;
void main()
    {
        int n;

        cout << "Enter a positive integer: ";
        cin >> n;

        for (int i = 1; i <= 10; ++i) {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }