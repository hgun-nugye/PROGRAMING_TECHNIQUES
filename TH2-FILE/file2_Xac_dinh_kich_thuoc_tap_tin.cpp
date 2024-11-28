#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *file;
  char ch;
  file=fopen("D:\\C_C++\\PROGRAMING_TECHNIQUES\\TH2-FILE\\Tiengthu_LuuTrongLu.txt", "r");
  if (file == NULL) 
	{
    fprintf(stderr, "Khong the mo file\n");
    return 1;
  }
  while ((ch = fgetc(file)) != EOF);
  int size=ftell(file);
  printf("\nKich thuoc tap tin Tiengthu_LuuTrongLu.txt la %d bytes",size);
  fclose(file);
  return 0;
}