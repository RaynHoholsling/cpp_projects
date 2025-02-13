#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a;
	float min = -459.67;
	cin>>a;
	if (a > min )
	{
		cout<<fixed<<setprecision(2)<<(a-32) * 5/9<<endl;
	}
	else
	{
		cout << "too cold dude"<<endl;
	}
}
