#include<iostream>
#include<cmath>
using namespace std;
double Money(double m, int n, float i)
{
	if(n==0) return m;
	if(n==1) return m*(1+i/100);
	return m+(Money(m,n-1,i)*(1+i/100)-m);
}
int main()
{
	double m,m0;
	int n;
	float i;
	cin>>m>>n>>i;
	m0=m;
	cout<<"\nDe quy:\nSo tien "<<m<<" sau "<<n<<" nam voi lai suat "<<i<<" la: "<<Money(m,n,i);
	cout<<"\n\nKhong de quy:\nSo tien "<<m0<<" sau "<<n<<" nam voi lai suat "<<i<<" la: ";
	for(int j=1; j<=n; j++)
	{
		m0=m0*(1+i/100);
	}
	cout<<m0;
	return 0;
}