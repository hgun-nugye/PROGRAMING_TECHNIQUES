#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int GiaiPTb2(int a, int b, int c, float &x1, float &x2) 
{
	float delta;
	if (a == 0) 
	{
    if (b == 0) 
		{
      if (c == 0) return 10;//vo so nghiem
   		else return 0;//vo nghiem
  	}
		else 
		{
      x1=1.0*-c/b;
      return 1;//1 nghiem duy nhat
  	}
  }
	else 
	{
   	delta=b*b-4*a*c;
    if (delta>0) 
		{
      x1=(-b + sqrt(delta))/(1.0*2*a);
      x2=(-b - sqrt(delta))/(1.0*2*a);
      return 2;//2 nghiem phan biet
    }
		else if (delta == 0) 
		{
      x1=-b/(1.0*2 * a);
      return 11;//nghiem kep
    }
		else return 0;//vo nghiem
  }
}

int main() 
{
  int a, b, c;
	float x1, x2;
  FILE *fi;
  FILE *fo;
	//check input file
  fi = fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TH2-FILE\\ptbac2.txt", "r");
  if (fi == NULL) 
	{
    fprintf(stderr, "Khong the mo file\n");
    return 1;
  }
	//check output file
  fo = fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TH2-FILE\\giai_ptbac2.txt", "w");
  if (fo == NULL) 
	{
    fprintf(stderr, "Khong the mo file\n");
    fclose(fo);
    return 1;
  }
	
	//read a, b, c and solve
  while (fscanf(fi, "%d %d %d", &a, &b, &c) != EOF) 
	{
	  int result=GiaiPTb2(a, b, c, x1, x2);
  	if (result==1) fprintf(fo, "Phuong trinh co duy nhat nghiem x=%.2f\n", x1);
 		else
  		if (result==10) fprintf(fo, "Phuong trinh co vo so nghiem\n");
  	else
			if(result==2) fprintf(fo, "Phuong trinh co hai nghiem phan biet x1=%.2f; x2=%.2f\n", x1, x2);
    else 
			if(result==11) fprintf(fo, "Phuong trinh co nghiem kep x1=x2=%.2f\n",x1);
    else
			if(result==0) fprintf(fo, "Phuong trinh vo nghiem\n");
  }
	fclose(fi);
  fclose(fo);
  return 0;
}