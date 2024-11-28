#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() 
{
	FILE *fi, *fo;
  int n, a[100];  
  //check output file
  fo = fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TH2-FILE\\sx_mang1chieu.txt", "w");
  if (fo == NULL) 
	{
    fprintf(stderr, "Khong the mo file\n");
    fclose(fo);
    return 1;
  }  
  //check input file
  fi= fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TH2-FILE\\mang1chieu.txt", "r");
  if (fi== NULL) 
	{
    fprintf(stderr, "Khong the mo file\n");
    return 1;
  }
  else 
	{
		fscanf(fi, "%d",&n);
  	fprintf(fo,"%d\n", n);
 		for(int i=0; i<n; i++)
		{
		fscanf(fi,"%d",&a[i]);
		}	
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(a[i]>a[j])
				{
					int t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
			fscanf(fi,"%d",&a[i]);
			fprintf(fo,"%d ",a[i]);
		}
	}
	fscanf(fi,"%d",&a[n-1]);
	fprintf(fo,"%d ",a[n-1]);
	
  fclose(fi);
  fclose(fo);  
  return 0;
}