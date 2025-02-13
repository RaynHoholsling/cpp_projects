#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cout<<"Write lenght "<<endl;
	cin>> a;
        cout<<"Write height "<<endl;
	cin>> b;
	cout<<"Write width"<<endl;
	cin>> c;
	cout<<"Volume: "<< a*b*c <<endl;
	cout<<"Povna Poverkhnia "<< ((a+c)*2*b)+2*(a*c)<<endl;	
}

