#include<stdio.h>
#include<math.h>

typedef struct Point
{
	int x,y;
}Point;
void Nhap(int &n, Point a[]);

void Xuat(int &n, Point a[]);
float d(int a, int b, int c, int d);
void DiemXaNhat(int &n, Point a[], Point &temp);
void HaiDiemGanNhau(int &n, Point a[], Point &t1, Point &t2);

int main()
{
	int n;
	Point a[100], temp, t1, t2;
	Nhap(n, a); 
	Xuat(n,a);
	DiemXaNhat(n,a,temp);
	printf("\n\nDiem xa goc toa do nhat la: ");
	printf("[%d;%d]\n",temp.x,temp.y);
	HaiDiemGanNhau(n, a, t1, t2);
	printf("\nHai diem gan nhau nhat la: ");
	printf("[%d;%d] va [%d;%d]",t1.x,t1.y, t2.x, t2.y);
}
void Nhap(int &n, Point a[])
{
	do
	{
		printf("Nhap vao so diem: ");
		scanf("%d", &n);
	}while(n<=0);
	
	printf("\nNhap vao so toa do cac diem sau:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d%d", &a[i].x, &a[i].y);
	}
}
void Xuat(int &n, Point a[])
{
	for(int i=0; i<n; i++)
	{
		printf("[%d;%d]\t",a[i].x, a[i].y);
	}
}
float d(int a,int b,int c,int d)
{
	return sqrt(pow(a-b,2)+pow(c-d,2));
}
void DiemXaNhat(int &n, Point a[], Point &temp)
{
	float max=0;
	for(int i=0; i<n; i++)
	{
		if(max<d(a[i].x, 0, a[i].y,0))
			{
				max=d(a[i].x, 0, a[i].y,0);
				temp=a[i];
			}
	}
}
void HaiDiemGanNhau(int &n, Point a[], Point &t1, Point &t2)
{
	float min=d(a[0].x, a[1].x, a[0].y,a[1].y);
	t1=a[0];
	t2=a[1]; 
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(min>=d(a[i].x, a[i+1].x, a[i].y,a[i+1].y))
			{
				min=d(a[i].x, a[i+1].x, a[i].y,a[i+1].y);
				t1=a[i];
				t2=a[j];
			}	
		}
	}
}