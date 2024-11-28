#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN
	{
		char MSSV[10];
		char HoVaTen[100];
		float DTB;
	};
void Nhap(SINHVIEN SV[], int &n);
void Xuat(SINHVIEN SV[], int &n);
void TimSV(SINHVIEN SV[], int &n);
void SapXepSV(SINHVIEN SV[], int &n);
int main()
{
	int n;
	struct SINHVIEN SV[50];
	do
	{
		printf("Nhap vao so sinh vien: ");
		scanf("%d", &n);
	} while(n<=0||n>1000);
	Nhap(SV,n);
	printf("\nDay la thong tin Sinh vien: \n");
	Xuat(SV,n);
	printf("\n");
	TimSV(SV,n);
	SapXepSV(SV,n);	
	printf("\n\nDay la danh sach Sinh vien da duoc sap xep tang dan theo Diem trung binh: \n");
	Xuat(SV,n);
}
void Nhap(SINHVIEN SV[], int &n)
{
	for (int i=0; i<n; i++)
	{
		printf("Nhap vao Ma so sinh vien thu %d: ",i+1);
		scanf("%s", &SV[i].MSSV);
	}
	printf("\n");
	fflush(stdin);
	for (int i=0; i<n; i++)
	{
		printf("Nhap vao Ho va ten sinh vien thu %d: ",i+1);
		gets(SV[i].HoVaTen);
	}
	printf("\n");
	fflush(stdin);
	for (int i=0; i<n; i++)
	{
		printf("Nhap vao Diem trung binh sinh vien thu %d: ",i+1);
		scanf("%f", &SV[i].DTB);
	}
}
void Xuat(SINHVIEN SV[], int &n)
{
	printf("---------------------------------------------\n");
	printf("MSSV\t\tHo va ten\t\tDiem trung binh\n");
	fflush(stdin);
	for (int i=0; i<n; i++)
	{
		printf("%s %18s %25.2f \n", SV[i].MSSV, SV[i].HoVaTen, SV[i].DTB);
	}
	
}
void TimSV(SINHVIEN SV[], int &n)
{
	char inf[10];
	int check=0;
	printf("Nhap vao Ma so sinh vien can tim: ");
	scanf("%s", &inf);
	for(int i=0; i<n; i++)
	{
		if (strcmp(inf,SV[i].MSSV)==0) 
		{
			printf("%s %18s %25.2f \n", SV[i].MSSV, SV[i].HoVaTen, SV[i].DTB);
			check+=1;
			break;		
		}
	}
	if(check==0)
		{
			printf("Khong tim thay thong tin Sinh vien");
		}
}
void SapXepSV(SINHVIEN SV[], int &n)
{
	SINHVIEN temp;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
			if(SV[i].DTB>SV[j].DTB )
			{
				temp=SV[i];
				SV[i]=SV[j];
				SV[j]=temp;
			}
	}
}
