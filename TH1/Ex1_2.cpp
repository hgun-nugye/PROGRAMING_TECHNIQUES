#include<stdio.h>
#include<math.h>

int NhapMang(int a[], int &n);
int XuatMang(int a[], int &n);
int XuatCP(int a[], int &n);
int SoNgTo(int n);
int XuatNgTo(int a[], int &n);
int LonTB(int a[], int &n);
int Max(int a[], int &n);
int TangChua(int a[], int &n);
void TangDan(int a[], int &n);
void GiamDan(int a[], int &n);
int main()
{
	int n, a[100];
	NhapMang(a,n);
	printf("\n\nDay la cac phan tu cua mang: \n");
	XuatMang(a,n);
	printf("\n\nDay la cac phan tu so chinh phuong cua mang: \n");
	XuatCP(a,n);
	printf("\n\nDay la cac phan tu so nguyen to cua mang: \n");
	XuatNgTo(a,n);	
	LonTB(a,n);
	printf("\n\nDay la phan tu co gia tri lon nhat cua mang: %d", Max(a,n));
	if (TangChua(a,n)==1) printf("\n\nMang da duoc sap xep tang dan.");
	else printf("\n\nMang chua duoc sap xep tang dan.");
	printf("\n\nDay la mang duoc sap xep tang dan: \n");
	TangDan(a,n);
	XuatMang(a,n);
	printf("\n\nDay la mang duoc sap xep giam dan: \n");
	GiamDan(a,n);
	XuatMang(a,n);
}
int NhapMang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang: ");
		scanf("%d", &n);
	} while(n<=0);
	printf("Nhap vao cac phan tu cua mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
int XuatMang(int a[], int &n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
int XuatCP(int a[], int &n)
{
	for(int i=0; i<n; i++)
	{
		if (a[i]==sqrt(a[i])*sqrt(a[i])) printf("%d\t", a[i]);
	}
}
int SoNgTo(int n)
{
	for(int i=2; i <n; i++)
	{
		if (n%i==0||n==1||n==0) return 0;
	}
	return 1;
}
int XuatNgTo(int a[], int &n)
{
	int dem=0;
	for(int i=0; i<n; i++)
	{
		if (SoNgTo(a[i])==1)
			printf("%d\t", a[i]);	
	}	
}
int LonTB(int a[], int &n)
{
	float sum=0;
	for(int i=0; i<n; i++)
	{
		sum+=a[i];
	}
	sum/=n;
	printf("\n\nDay la gia tri trung binh cua mang: %2.2f",sum );
	printf("\n\nDay la cac phan tu lon hon gia tri trung binh cua mang: \n");
	for(int i=0; i<n; i++)
	{
		if(a[i]>sum) printf("%d\t", a[i]);
	}	
}
int Max(int a[], int &n)
{
	int max=a[0];
	for(int i=1; i<n; i++)
	{
		if (max<a[i]) max =a[i];
	}
	return max;
}
int TangChua(int a[], int &n)
{
	int dem=1;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if (a[i]<=a[j]) dem*=1;
			else 
			{
				dem*=0;
				break;
			}
		}
	}
	return dem;
}
void TangDan(int a[], int &n)
{
	int temp=0;
	{
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if (a[i]>a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
		}
	}	
}
void GiamDan(int a[], int &n)
{
	int temp=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
