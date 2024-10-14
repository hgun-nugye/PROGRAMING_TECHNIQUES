#include<stdio.h>
#include<math.h>

int NhapMaTran(int a[100][100], int &n,int &m);
int XuatMaTran(int a[100][100], int &n, int &m);
float TBC(int a[100][100], int &n,int &m);
int Max(int a[100][100], int &n,int &m);
int MaxDong(int a[100][100], int &n,int &m);
int MaxCot(int a[100][100], int &n,int &m);
int NgTo(int n);
int DemNgTo(int a[100][100], int &n,int &m);
void XepHang(int a[100][100], int &n,int &m);
int main()
{
	int n,m,a[100][100];
	NhapMaTran(a,n,m);
	printf("\n\nDay la ma tran vua nhap: \n");
	XuatMaTran(a,n,m);
	fflush(stdin);
	printf("\n\nDay la trung binh cong cua ma tran: %5.2f",TBC(a,n,m));
	printf("\n\nDay la gia tri lon nhat cua ma tran: %d", Max(a,n,m));
	printf("\n\nDay la gia tri lon nhat tren dong can tim cua ma tran: %d", MaxDong(a,n,m));
	printf("\n\nDay la gia tri lon nhat tren cot can tim cua ma tran: %d", MaxCot(a,n,m));
	printf("\n\nDay la so luong so nguyen to cua ma tran: %d",DemNgTo(a,n,m));
	XepHang(a,n,m);
	printf("\n\nDay la ma tran vua duoc sap xep lai: \n");
	XuatMaTran(a,n,m);
	return 0;
}
int NhapMaTran(int a[100][100], int &n,int &m)
{
	do
	{
		printf("Nhap vao kich thuoc ma tran: \n");
		scanf("%d%d", &n, &m);
	} while(n<=0 || m<=0 || n>100 || m>100);
	
	printf("\nNhap vao cac phan tu cua ma tran:\n");
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		scanf("%d", &a[i][j]);
	}
}
int XuatMaTran(int a[100][100], int &n,int &m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
		printf("%d\t", a[i][j]);
		if(j==m-1) printf("\n");	
		}
	}
}
float TBC(int a[100][100], int &n,int &m)
{
	float sum=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			sum+=a[i][j];
	}
	sum/=(n*m);
return sum;
}
int Max(int a[100][100], int &n,int &m)
{
	int max=a[0][0];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (max<a[i][j]) max =a[i][j];
		}
	}
	return max;
}

int MaxDong(int a[100][100], int &n,int &m)
{
	int dong;
	do
	{
		printf("\n\nNhap vao gia tri dong can tim max: ");
		scanf("%d", &dong);
	}while(dong<0||dong >n-1);
	int max=a[dong][0];
	for(int i=1; i<m; i++)
	{
		if(max<a[dong][i]) max=a[dong][i];
	}
	return max;
}

int MaxCot(int a[100][100], int &n,int &m)
{
	int cot;
	do
	{
		printf("\n\nNhap vao gia tri cot can tim max: ");
		scanf("%d", &cot);
	}while(cot<0||cot >m-1);
	int max=a[0][cot];
	for(int i=1; i<m; i++)
	{
		if(max<a[i][cot]) max=a[i][cot];
	}
	return max;
}
int NgTo(int n)
{
	int dem=0;
	for(int i=1; i<n; i++)
	{
		if (n%i==0) 
		{
			dem++;
		}
	}
	if(dem==1) return 1;
	else return 0;
}
int DemNgTo(int a[100][100], int &n,int &m)
{
	int dem=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (NgTo(a[i][j])==1) dem++;
		}
	}
	return dem;
}
void XepHang(int a[100][100], int &n,int &m)
{
	for (int i = 0; i < n; i++) 
	{
    for (int j = 0; j < m - 1; j++) 
		{
      for (int k = j + 1; k < m; k++) 
			{
        if (a[i][j] > a[i][k]) 
				{
          int temp = a[i][j];
          a[i][j] = a[i][k];
          a[i][k] = temp;
        }
      }
    }
  }
}
