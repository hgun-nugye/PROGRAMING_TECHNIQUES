#include<iostream>
#include<cmath>
using namespace std;
unsigned long long ViTrung(unsigned long long n, int h, int k)
{
	if(h==0) return n;
	n=n*k;
	return ViTrung(n,h-1,k);
}
int main()
{
	unsigned long long n,n0;
	int h,k;
	cin>>n>>h>>k;
	n0=n;
	cout<<"De quy:"<<endl;
	cout<<n<<" vi trung sau "<<h<<" gio duoc nhan len "<<k<<" lan = "<<ViTrung(n,h,k)<<endl;
	for(int i=1; i<=h; i++)
	{
		n=pow(n,k);
	}
	
	cout<<"\nKhong de quy:"<<endl;
	cout<<n0<<" vi trung sau "<<h<<" gio duoc nhan len "<<k<<" lan = ";
	for(int i=1; i<=h; i++)
	{
		n0=n0*k;
	}
	cout<<n0<<endl;
	return 0;
 }