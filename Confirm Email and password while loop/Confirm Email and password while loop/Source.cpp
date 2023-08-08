#include<iostream>
using namespace std;
int main()
{
	string email, password;
	cout << "Enter the E-mail : ";
	cin >> email;
	cout << "Enter Your Password : ";
	cin >> password;
	bool login = true;
	while(login==true)
	{
		if ((email == "umer") && (password == "123"))
		{
			cout << "//////////////////////////////////////////// log in success ////////////////////////////////////////////" << endl;
			login = false;
		}
		else
		{
			cout<<"There was a problem try again!!!!!!!"<<endl;
			break;
		}
	}
	system("pause");
}