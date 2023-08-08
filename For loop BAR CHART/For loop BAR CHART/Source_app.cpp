#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "Enter First Chart : ";
	cin >> a;
	cout << "Enter Second Chart : ";
	cin >> b;
	cout << "Enter Third Chart : ";
	cin >> c;
	cout << "Enter Fourth Chart : ";
	cin >> d;
	cout << "Enter Fifth Chart : ";
	cin >> e;
	for(int i=0; i<=5; i++)
		for (int j = 0; j<=5; j++)
	{
		cout << "*"<<endl;
	}

	system("pause");
}