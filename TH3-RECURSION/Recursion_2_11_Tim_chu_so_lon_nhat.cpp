#include<iostream>
#include<cmath>
using namespace std;
//De quy
unsigned int MaxDigit(unsigned int n)
{
	if(n<10) return n;
	return max(n%10,MaxDigit(n/10));
}
int main()
{
	unsigned int n;
	cin>>n;	
	//De quy
	cout<<"Chu so lon nhat cua so "<<n<<" la "<<MaxDigit(n);	
	return 0;
}