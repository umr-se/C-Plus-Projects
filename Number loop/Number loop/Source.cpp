#include<iostream>
using namespace std;
void number(int a, int b)
{
	for (int i = 1; i <= b; i++)
	{
		cout << a << "*" << i <<"="<< a*i << endl;
		
	}
}
void main()
{
	int x, y;
	cout << "Enter a number to print its table = ";
	cin >> x;
	cout << "Enter range = ";
	cin >> y;
	number(x,y);
	system("pause");
}