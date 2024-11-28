#include<iostream>
#include<cmath>
using namespace std;
bool SNT(int n)
{	
	if(n<2) return false;
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
//De quy
long Sum(int a[], int n)
{
	if(n<0) return 0;
	return a[n]+Sum(a, n-1);
}
long SumPos(int a[], int n)
{
	if(n<0) return 0;
	if(a[n]<=0) return SumPos(a,n-1);
	return a[n]+SumPos(a,n-1);
}
int NumOfSTN(int a[], int n)
{
	if(n<0) return 0;
	if(!SNT(a[n])) return NumOfSTN(a,n-1);
	return 1+NumOfSTN(a,n-1);
}
int MaxNum(int a[], int n)
{
	if(n<0) return 0;
	return max(a[n], MaxNum(a, n-1));
}
int main()
{
	int n, a[100];
	cin>>n;	
	cout<<"Nhap cac phan tu cua a:"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	//De quy
	cout<<"        De quy:"<<endl;
	cout<<"Tong cac phan tu cua mang a la "<<Sum(a,n-1)<<endl;
	cout<<"Tong cac phan tu >0 cua mang a la "<<SumPos(a,n-1)<<endl;
	cout<<"So luong phan tu la so nguyen to cua mang a la "<<NumOfSTN(a,n-1)<<endl;	
	cout<<"Phan tu lon nhat cua mang a la "<<MaxNum(a,n-1)<<endl;	
	//Khong De quy
	int Sum1=0, Sum2=0;
	int dem=0;
	int max=a[0];
	for(int i=0; i<n; i++)
	{
		Sum1+=a[i];
		if(a[i]>0) Sum2+=a[i];
		if(SNT(a[i])) dem++;
		if(a[i]>max) max=a[i];
	}
	cout<<"\n\n        Khong de quy:"<<endl;
	cout<<"Tong cac phan tu cua mang a la "<<Sum1<<endl;
	cout<<"Tong cac phan tu >0 cua mang a la "<<Sum2<<endl;
	cout<<"So luong phan tu la so nguyen to cua mang a la "<<dem<<endl;
	cout<<"Phan tu lon nhat cua mang a la "<<max<<endl;
	
	return 0;
}