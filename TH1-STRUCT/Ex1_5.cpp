#include<stdio.h>

void XepMangTang(int a[], int &n);
void TronMang(int a[], int b[], int &n, int &m, int c[]);
void Xuat(int a[], int n);
int main()
{
	int a[50], b[50], c[50];
	int n,m;
	XepMangTang(a,n);

	XepMangTang(b,m);

	TronMang(a,b,n,m,c);
	printf("Mang sau khi duoc sap xep va tron vao nhau la: \n");
	Xuat(c,n+m);
}
//Nhap mang va xep cac phan tu trong mang theo thu tu tang dan
void XepMangTang(int a[], int &n)
{
	//Nhap mang
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	//Sap xep tang dan cac phan tu cua mang
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
}

//Tron 2 mang da xep tang dan cac phan tu
void TronMang(int a[], int b[], int &n, int &m, int c[]) 
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) 
		{
        if (a[i] <= b[j]) 
				{
          c[k++] = a[i++];
        } 
				else 
				{
          c[k++] = b[j++];
        }
    }
    //Phan tu du chua duoc sap xep se duoc xep tiep (neu co)
    while (i < n) 
		{
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
}
//Xuat mang da sap xep
void Xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
}
