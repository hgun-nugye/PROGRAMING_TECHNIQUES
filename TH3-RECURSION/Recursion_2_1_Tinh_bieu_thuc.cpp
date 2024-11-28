#include<iostream>
#include<cmath>
using namespace std;
//Cau 2.1 a
double Pow(float x,int n)
{
	if(n==0) return 1;
	if(n==1) return x;
	return Pow(x,n-1)*x;
}
//Cau 2.1 b
unsigned int factorial(unsigned int n)
{
	if(n==0) return 1;
	if(n==1) return n;
	return n*factorial(n-1);
}
//Cau 2.1 c
unsigned int Sum(unsigned int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	return n+Sum(n-1);
}
//Cau 2.1 d
unsigned int SumOdd(unsigned int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	return (2*n-1)+SumOdd(n-1);
}
//Cau 2.1 e
unsigned int SumEven(unsigned int n)
{
	if(n==0) return 0;
	if(n==1) return 2;
	return (2*n)+SumEven(n-1);
}
//Ham So nguyen to
bool SNT(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if (n%i==0) return false;
	}
	return true;
}
//Cau 2.1 f
int SumSnt(unsigned int n)
{
	unsigned int sum=0;
	if(n==0 || n==1) return 0;
	if(n==2) return 2;
	if(SNT(n)) sum+=n;
	return sum+SumSnt(n-1);
}
//Cau 2.1 g
int DemSnt(unsigned int n)
{
	unsigned int dem=0;
	if(n==0 || n==1) return 0;
	if(SNT(n)) dem+=1;
	return dem+DemSnt(n-1);
}

int main()
{
	//Cau 2.1 a
		int n;
		float x;
		double result=1;
		cout<<"Nhap x, n de tinh x^n:\n";
		cin>>x>>n;
		//De Quy
		cout<<x<<"^"<<n<<"="<<Pow(x,n)<<endl;
		//Khong De Quy
		cout<<x<<"^"<<n<<"="<<pow(x,n)<<endl;
		for(int i=1; i<=n; i++)
		{
			result*=x;
		}
		cout<<x<<"^"<<n<<"="<<result;
	//Cau 2.1 b
		unsigned int b;
		cout<<"\n\nNhap b de tinh giai thua: \n";
		cin>>b;
		//De Quy
		cout<<b<<"!"<<"="<<factorial(b)<<endl;
		//Khong De Quy
		result=1;
		for(int i=1; i<=b; i++)
		{
			result*=i;
		}
		cout<<b<<"!"<<"="<<result;
	//Cau 2.1 c
		unsigned int c;
		cout<<"\n\nNhap c de tinh tong tu 1 den c:\n";
		cin>>c;
		//De Quy
		cout<<"Tong tu 1 den "<<c<<"="<<Sum(c)<<endl;
		//Khong De Quy
		result=0;
		for(int i=1; i<=c; i++)
		{
			result+=i;
		}
		cout<<"Tong tu 1 den "<<c<<"="<<result;
	//Cau 2.1 d
		unsigned int d;
		cout<<"\n\nNhap d de tinh tong cac so theo day (2n-1):\n";
		cin>>d;
		//De Quy
		cout<<"Tong cac so theo day (2n-1)="<<SumOdd(d)<<endl;
		//Khong De Quy
		result=0;
		for(int i=1; i<=d; i++)
		{
			result+=(2*i)-1;
		}
		cout<<"Tong cac so theo day (2n-1)="<<result;	 
	//Cau 2.1 e
		unsigned int e;
		cout<<"\n\nNhap e de tinh tong cac so theo day (2n):\n";
		cin>>e;
		//De Quy
		cout<<"Tong cac so theo day (2n)="<<SumEven(e)<<endl;
		//Khong De Quy
		result=0;
		for(int i=1; i<=e; i++)
		{
			result+=(2*i);
		}
		cout<<"Tong cac so theo day (2n)="<<result;	
	//Cau 2.1 f
		unsigned int f;
		cout<<"\n\nNhap f de tinh tong cac so nguyen to <=n: \n";
		cin>>f;
		//De Quy
		cout<<"Tong cac so nguyen to <= "<<f<<" la "<<SumSnt(f)<<endl;
		//Khong De Quy
		result=0;
		for(int i=2; i<=f; i++)
		{
			if(SNT(i)) result+=i;
		}
		cout<<"Tong cac so nguyen to <= "<<f<<" la "<<result;
	//Cau 2.1 g
		unsigned int g;
		cout<<"\n\nNhap g de tinh so luong so nguyen to <=g:\n";
		cin>>g;
		//De Quy
		cout<<"So luong cac so nguyen to <= "<<g<<" la "<<DemSnt(g)<<endl;
		//Khong De Quy
		result=0;
		for(int i=2; i<=g; i++)
		{
			if(SNT(i)) result+=1;
		}
		cout<<"So luong cac so nguyen to <= "<<g<<" la "<<result;	
			
	return 0;
}