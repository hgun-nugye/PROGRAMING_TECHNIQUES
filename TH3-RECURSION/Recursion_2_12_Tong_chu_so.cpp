#include<iostream>
#include<cmath>
using namespace std;
int SumDigit(unsigned int n)
{
	if(n<10) return n;	
	return n%10+ SumDigit(n/10);
}

int main()
{
	unsigned int n;
	cin>>n;
	cout<<"Tong cac chu so cua "<<n<<" la "<<SumDigit(n)<<endl;
	return 0;
}