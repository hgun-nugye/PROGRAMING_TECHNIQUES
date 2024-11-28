#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
  FILE *file;
  file=fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TH2-FILE\\Tiengthu_LuuTrongLu.txt", "r");
  if(file==NULL)
  {
  	fprintf(stderr,"Khong the mo file!\n");
  	return 1;
	}  	
  else
  {
  	while((ch=fgetc(file))!=EOF)
  	{
  		printf("%c", ch);
		}
	}
	fclose(file);
	return 0;
}