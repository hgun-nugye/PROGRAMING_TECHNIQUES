//Cau 2
#include<iostream>
using namespace std;

bool LaSNT(int k)
{
	if(k==0||k==1) return false;
	for(int i=2; i<=k/2; i++)
	{
		if(k%i==0)
		{
			return false;
			break;
		}
	}
	return true;
}
void InSNT(int n)
{ 
	if(n==1||n==0) return;
	if(LaSNT(n-1)) cout<<n-1<<"\t";
	InSNT(n-1);
}
int main()
{
	int n;
	cout<<"Nhap vao so n:";
	cin>>n;
	if(LaSNT(n)) cout<<"So "<<n<<" la so nguyen to!";
	else cout<<"So "<<n<<" khong la so nguyen to!"<<endl;
	cout<<"Cac so nguyen to nho hon "<<n<<" la: "<<endl;
	InSNT(n);
}