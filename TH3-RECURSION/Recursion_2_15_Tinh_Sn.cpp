#include<iostream>
#include<cmath>
using namespace std;
//De quy
float S(unsigned int n)
{
	if(n==1) return 1;	
	return 1.0/((n*(n+1)/2))+ S(n-1);
}
int main()
{
	unsigned int n;
	cin>>n;
	//De quy
	cout<<"Tong Sn co dang 1/1 + 1/(1+2) + 1/(1+..+n) cua "<<n<<" so la "<<S(n)<<endl;
	//Khong De quy
	float s=0;
	for(int i=1; i<=n; i++)
	{
		int mau=0;
		mau=i*(i+1)/2;
		s+=1.0/mau;
	}
	cout<<"Tong Sn co dang 1/1 + 1/(1+2) + 1/(1+..+n) cua "<<n<<" so la "<<s<<endl;
	return 0;
}