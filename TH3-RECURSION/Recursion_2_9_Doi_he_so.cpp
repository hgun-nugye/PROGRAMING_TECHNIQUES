#include<iostream>
#include<cmath>

using namespace std;
void He2(int n)
{
	if(n>1) He2(n/2);
	cout<<n%2;
}

int main()
{
	int n, n0;
	cin>>n;	
	n0=n;
	//De quy
	cout<<"So "<<n<<" chuyen sang he 2 la ";
	He2(n);
	//Khong de quy
	int i=0, a[32];
	while(n>0)
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	cout<<"\nSo "<<n0<<" chuyen sang he 2 la ";
	for(int j=i-1; j>=0; j--)
	{
		cout<<a[j];
	}	
	return 0;
}