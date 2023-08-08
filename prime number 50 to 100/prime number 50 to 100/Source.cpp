#include<iostream>
using namespace std;
int main()
{
	int a, b;
	for (int a = 2; a <= 100; a++)
		for (int b = 50; b <= a; b++)
		{
			if (a % b == 0)
				break;
			else if (a == b + 1)
				cout << a << " " << "\n";
		}
	system("pause");
}