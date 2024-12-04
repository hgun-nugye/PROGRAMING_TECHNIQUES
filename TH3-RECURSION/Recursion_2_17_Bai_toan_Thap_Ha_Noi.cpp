#include<iostream>
#include<cmath>
using namespace std;

void ThapHaNoi(int n, char nguon, char trgian, char dich)
{
	if(n==1)
	{
		cout<<nguon<<" -> "<<dich<<endl;
		return;
	} 
	ThapHaNoi(n-1, nguon, dich, trgian);    
  cout<<"Chuyen 1 dia tu "<<nguon<<" -> "<<dich<< endl;
	ThapHaNoi(n-1, trgian, nguon, dich);
}
int main()
{
	int n;
	cin>>n;
	ThapHaNoi(n,'A','B', 'C');
	return 0;
}
