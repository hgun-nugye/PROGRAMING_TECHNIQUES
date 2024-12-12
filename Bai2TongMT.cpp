#include <iostream>
using namespace std;
void Nhap(int a[100][100], int &hang, int &cot)
{
	cout<<"Nhap vao cac phan tu cua ma tran: ";
   for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        cin>>a[i][j];
    }    
}
int TongCot(int a[100][100], int hang, int cot)
{
    if(cot<0||hang<=0) return 0;
    return a[hang-1][cot] + TongCot(a,hang-1,cot);
}
int TongMT(int a[100][100], int hang, int cot)
{
	if(cot<0||hang<=0) return 0;
  return TongCot(a,hang,cot) + TongMT(a,hang,cot-1);
}
int main() {
    int cot, hang, a[100][100];
    cout<<"Nhap vao so hang, so cot: ";
		cin>>hang>>cot;
    Nhap(a, hang,cot);
    int cotTinh;
    cout<<"Nhap cot can tinh tong: ";
    cin>>cotTinh;
    cout<<"Tong cot can tinh la: "<<TongCot(a,hang,cotTinh-1 )<<endl;
    cout<<"Tong ma tran la: "<<TongMT(a,hang,cot-1 );
    return 0;
}