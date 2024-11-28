#include<iostream>
using namespace std;
//De quy
int Pascal(int row, int col)
{
	if(col==row||col==0) return 1;	
	return Pascal(row-1,col-1)+Pascal(row-1,col);
}

int main()
{
	int n;
	cin>>n;
	//De quy
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<Pascal(i,j)<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\n";
	//Khong de quy
	int a[100][100]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(j==i||j==0) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
	
}