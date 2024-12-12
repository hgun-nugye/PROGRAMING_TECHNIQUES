#include <iostream>
using namespace std;
int NoUoc(int n0,int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    else
    {
        if(n0%n==0) return 1+NoUoc(n0,n-1);
    }
    return NoUoc(n0,n-1);
}
void InSNT(int n)
{
    if(n==0||n==1) return;
    else
    {
        if (NoUoc(n,n)==2) cout<<n<<"\t";        
    }
    InSNT(n-1);
}
int main() {
    int n;
    cout<<"Nhap vap so n: ";
    cin>>n;
    cout<<"So uoc so cua so "<<n<<" la: "<<NoUoc(n,n)<<endl;
    cout<<"Cac so nguyen to <= "<<n<<" la: "<<endl;
    InSNT(n);
    return 0;
}