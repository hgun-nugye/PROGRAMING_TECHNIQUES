#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc!=4)
	cout<<"error!";
	else 
	{
		int a, b;
		char op;
		a=atoi(argv[1]);
		b=atoi(argv[3]);
		op= *argv[2];
		switch(op)
		{
			case ('+'):
			{
				cout<<a+b;
				break;
			}
			case ('-'):
			{
				cout<<a-b;
				break;
			}
			case ('*'):
			{
				cout<<a*b;
				break;
			}
			case ('/'):
			{
				if(b==0) cout<<"error!";
				else cout<<1.0*a/b;
				break;
			}
			default: 
			cout<<"error!";
		}
	}
}