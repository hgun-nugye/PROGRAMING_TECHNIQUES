#include<iostream>
#include<cmath>
using namespace std;
//De quy
void Reverse(unsigned int n)
{	
	if(n<10)
	{
		cout<<n;
		return;
	}
	cout<<n%10;
	Reverse(n/10);
}	
int main()
{
	unsigned int n,n0=0;
	cin>>n;
	cout<<"\nDe quy:\nSo dao nguoc cua "<<n<<" la ";
	Reverse(n);
	cout<<"\n\nKhong de quy:\nSo dao nguoc cua "<<n<<" la ";
	while(n/10!=0)
	{
		n0+=n%10;
		n/=10;
		n0*=10;
	}
	n0+=n;
	cout<<n0;
	return 0;
}