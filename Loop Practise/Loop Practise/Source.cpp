#include<iostream>
#include<string>
using namespace std;
int main()
{

	cout << "|| Math Tutor Menu  ||" << endl;
	cout << "|| 1-Addition       ||" << endl;
	cout << "|| 2-Substraction   ||" << endl;
	cout << "|| 3-Multiplication ||" << endl;
	cout << "|| 4-Division       ||" << endl;
	int x ,y, t;
	cout << "Enter The First Value  =  ";
	cin >> x;
	cout << "Enter The Second Value = ";
	cin >> y;
	cout << "Enter The Operand = ";
	cin >> t;
	switch(t)
	{
	 case 1:
	 {
		 for (char ch = 0; ch <= 126; ch++)
		 {
			 cout << ch;
		 }
	 }
	  break;

	 case 2:
		cout << "The Value is : " << x - y << endl;
	  break;

	 case 3:
		cout << "The Value is : " << x * y << endl;
	  break;

	 case 4:
		cout << "The Value is : " << x / y << endl;
	  break;

	 default:
		 cout << "Invalid";
	}
	return 0;
}