#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int StrLen(const char a[])
{
	int n=0;
	if(a[n]=='\0') return 0;	
	return 1 + StrLen(a+1);
}

int main()
{
	string a;
	getline(cin, a); // Read a line of input
	if(StrLen(a.c_str())!=0) cout<<"\nDo dai chuoi la "<<StrLen(a.c_str());
	else cout<<"\nKhong tim thay chuoi!";
	return 0;
}