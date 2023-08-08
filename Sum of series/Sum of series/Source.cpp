#include<iostream>
using namespace std;


int fact(int a)
{
	int factorial = 1;
	for (int i = 1; i <= a; i++)
	{

		factorial = factorial * i;







	}

	return factorial;







}
int main()
{
	int b = 1;

	for (int i = 1; i <= 30; i++)
	{

		b = fact(i) / i + fact(i) / i;



	}
	cout << "the sum of the series 1!/1 +2!/2+3!/3+..........30!/3 =" << b << endl;
}