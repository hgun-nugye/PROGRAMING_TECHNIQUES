//Cau 1
#include<iostream>
#include<cmath>
using namespace std;

typedef struct 
{
	int x,y;
}Point;
//ham Max
void Max(Point p1,Point p2,Point &max)
{
	float max1=sqrt(p1.x*p1.x+p1.y*p1.y);
	float max2=sqrt(p2.x*p2.x+p2.y*p2.y);
	if(max1>max2) max=p1;
	else max=p2;
}

int main()
{
	Point p1={1,2}, p2={3,4}, max;
	Max(p1, p2, max);
	cout<<max.x<<"\t"<<max.y;
}