#include<iostream>
using namespace std;
int main()
{
for(int a=2; a<20 ;a++)
	for (int b = 2; b < a; b++)
	{
		if (a % b == 0)
			break;
		else if (a == b + 1)
		{
			cout << a << ""<<endl;
		}
	}
    return 0;
}