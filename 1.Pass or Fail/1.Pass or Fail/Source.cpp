#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "--------------------" << endl;
	cout << "Enter Number = ";
	cin >> n;
	if (n > 50)
		cout << "PASS"<<endl;
	else
		cout << "FAIL"<<endl;
	cout << "--------------------"<<endl;

	system("pause");
}