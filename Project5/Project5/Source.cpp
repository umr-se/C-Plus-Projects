#include <iostream>
using namespace std;

int main()
{
    int i, k, n;

    cout << "Please enter number of rows you want to see: \n";
    cin >> n;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= k; i++)
            cout << '*';
        cout << endl;
    }

    getchar();
    getchar();
    return 0;
}