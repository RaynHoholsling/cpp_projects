#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        float p,r;
	int t;
	int res;
	double resd;
	cin >> p>> r >> t;
	resd = (p*t*r)/100+0.00;
	res = (p*t*r)/100;
	cout << res << endl;
	cout<<fixed <<setprecision(2)<< resd<<endl;
}

