#include<iostream>
#include<string>
using namespace std;

//struct
typedef struct SV
{
	float Diem;
	char MSSV[10];
	char HoTen[100];
};

//prototype
inline void Nhap(int &n,SV s[]);
inline void Xuat(int n,SV s[]);
inline void Xep(int n,SV s[]);

int main()
{
	int n;
	SV s[50];
	cin>>n;
	Nhap(n,s);
	Xep(n,s);
	Xuat(n,s);
}
inline void Nhap(int &n,SV s[])
{
	for(int i=0; i<n;i++)
	{
		fflush(stdin);
		gets(s[i].MSSV);
		gets(s[i].HoTen);
		cin>>s[i].Diem;
	}
}
inline void Xuat(int n,SV s[])
{
	
	for(int i=0; i<n;i++)
	{
		cout<<s[i].MSSV<<"\t\t";
		cout<<s[i].HoTen<<"\t\t";
		cout<<s[i].Diem<<endl;
		cout<<"---------------------------------"<<endl;
	}
}
inline void Xep(int n,SV s[])
{
	SV temp;
	for(int i=0; i<n;i++)
	{
		for( int j=i+1; j<n; j++)
		if(strcmp(s[i].HoTen,s[j].HoTen)>0)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
}