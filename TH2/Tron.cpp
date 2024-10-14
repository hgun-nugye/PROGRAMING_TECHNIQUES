#include<iostream>
#include<string>
using namespace std;

//struct
typedef struct diem
{
	int x,y;
};

void NhapDiem(diem p[], int &n);
void XoaDiem(diem p[], int &n);
void XemDiem(diem p[], int n);
int main()
{
	int n;
	diem p[50], tam[50];
	NhapDiem(p,n);
	XoaDiem(p,n);
	cout<<"Cac diem sau xoa:\n";
	XemDiem(p,n);
}
void NhapDiem(diem p[], int &n)
{
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>p[i].x;
		cin>>p[i].y;
	}
}
void XoaDiem(diem p[], int &n)
{
	int k;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if((p[i].x==p[j].x)&&(p[i].y==p[j].y))
			{
				for(k=j; k<n-1; k++)
				{
					p[k]=p[k+1];
				}
				j--;
				n--;
			}
		}
	}
}
void XemDiem(diem p[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"{"<<p[i].x<<","<<p[i].y<<"}"<<endl;
	}
}
