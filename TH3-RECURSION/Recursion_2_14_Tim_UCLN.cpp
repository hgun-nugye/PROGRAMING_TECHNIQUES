#include<iostream>
#include<cmath>
using namespace std;
//De quy
int UCLN(unsigned int a,unsigned int b)
{
	if(b==0) return a;	
	
	return UCLN(b,a%b);
}
int main()
{
	unsigned int a,b;
	cin>>a>>b;
	//De quy
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la "<<UCLN(a,b)<<endl;
	//Khong De quy
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la ";
	unsigned int uc=1;
	unsigned int c=a;
	a=max(a,b);
	b=min(c,b);
	if(a%b==0) uc=b;
	else
	{
		for(int i=2; i<=b/2; i++)
			if(a%i==0 && b%i==0) 
				uc=i;
	}
	cout<<uc;
	return 0;
}