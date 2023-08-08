#include<iostream>
using namespace std;
void main()
{
	int x;
	cout << "--------------------------------"<<endl;
	cout << "Enter number for desird table = ";
	cin >> x;
	for (int y = 1; y <= 10; y++)
	{
		cout << x << "*" << y << "=" << x * y << endl;
	}






	system("pause");
}