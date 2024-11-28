#include<iostream>
#include<cmath>
using namespace std;
long long C(int n, int k)
{
	if(k>n) return 0;
	if(n==k||k==0) return 1;	
	return C(n-1,k-1)+C(n-1,k);
}

int main()
{
	int n,k;
	cin>>n>>k;
	cout<<"C(n,k)="<<C(n,k);
	return 0;	
}