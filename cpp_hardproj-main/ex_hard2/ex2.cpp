#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a;
	double b;
	cin>> a;
	cin>> b;
	cout<<setprecision(12)<<a-b<<endl;
	cout<<setprecision(12)<<a+b<<endl;
        cout<<setprecision(12)<<a*b<<endl;
        cout<<setprecision(12)<<a/b<<endl; 
}
