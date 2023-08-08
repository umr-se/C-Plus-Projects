#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Enter the value of x = ";
	cin >> x;
	cout << "Enter the value of y = ";
	cin >> y;
	cout << "Enter the value of z = ";
	cin >> z;
	if (x < y)
	{
		cout << "x is smaller" << endl;
	}
	else if (y < z)
	{
		cout << "y is smaller" << endl;
	}
	else
	{
		cout << "z is smaller" << endl;
	}
	system("pause");
}