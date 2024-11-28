#include<iostream>
#include<cmath>
using namespace std;
int TimX(int a[],int left, int right, int x)
{
	if(left>right) return -1;
	int p=(left + (right-left)/2);
	if(x==a[p]) return p;
	else if(x<a[p]) return TimX(a,left,p-1,x);
	return TimX(a,p+1,right,x);	
}
int main()
{
	int n, a[1000];
	int x;
	cin>>n;
	cout<<"Nhap phan tu cho mang"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Nhap vao so can tim: ";
	cin>>x;
	
	cout<<"De quy:"<<endl;
	if(TimX(a,0,n-1,x)!=-1) cout<<"\nVi tri so "<<x<<" trong mang la "<<TimX(a,0,n-1,x);
	else cout<<"\nKhong tim thay!";
	
	cout<<"\n\nKhong de quy:"<<endl;
	for(int i=0; i<n; i++)
	{
		if(x==a[i]) cout<<"\nVi tri so "<<x<<" trong mang la "<<i<<endl;
	}
	cout<<"\nKhong tim thay!";
	return 0;
}