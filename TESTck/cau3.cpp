//Cau 3
#include<iostream>
using namespace std;

int SoDuong(int a[], int n)
{
	if(n==0) return 0;
	if(a[n-1]>0) return 1+SoDuong(a, n-1);
	else return SoDuong(a, n-1);
}
int TangLT(int a[], int n, int &startIdx)
{
	int max=0;
	int idx=-1;
	for(int i=0; i<n-1; i++)
	{
		int dem=1;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]>a[j-1])
			{
				dem++;
			}
			else break;
			if(dem>max) 
			{
				idx=i;
				max=dem;
			}
		}
	}
	startIdx=idx;
	return max;
}
int main()
{
	FILE *f;
	f=fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TESTck\\cau3.txt", "r");
	int n, a[100];
  if (f== NULL) 
	{
    fprintf(stderr, "Khong the mo file\n");
    return 1;
  }
  
	fscanf(f,"%d",&n);
	for(int i=0; i<n; i++)
	{
		fscanf(f,"%d", &a[i]);
	}
	cout<<"So phan tu duong cua mang la: "<<SoDuong(a,n)<<endl;
	cout<<"Chuoi phan tu tang lien tuc dai nhat cua mang la: "<<endl;
	int startIdx;
	TangLT(a,n,startIdx);
	for(int i=startIdx; i<startIdx+TangLT(a,n,startIdx);i++)
	{
		cout<<a[i]<<"\t";
	}
	fclose(f);
}
