#include<iostream>
using namespace std;
int Fibo(int n)
{
	if(n==1 || n==2) return 1;
	return Fibo(n-1)+Fibo(n-2);
}

int main()
{
	int n;
	cout<<"Nhap so luong so Fibonacci can tim: ";
	cin>>n;
	//De quy
	cout<<"Ket qua theo de quy: "<<endl;
	for(int i=1; i<=n ;i++)
	{
		cout<<Fibo(i)<<"\t";
	}
	//Khong De quy
	int be=1,af=1,sum;
	int dem=1;
	cout<<"\n\nKet qua khong theo de quy: "<<endl;
  while(dem<=n)
  {
    cout<<be<<"\t";
    sum=be+af;
    be=af;
    af=sum;
    dem++;
  }
  return 0;
 }