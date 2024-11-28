#include<stdio.h>
#include<stdlib.h>

void TinhToan(int a,int b, char c){
	switch (c){
		case '+':
		{
			printf("%d %c %d = %.2f",a,c,b,1.0*a+b);
			break;	
		}
		case '-':
		{
			printf("%d %c %d = %.2f",a,c,b,1.0*a-b);
			break;	
		}
		case '*':
		{
			printf("%d %c %d = %.2f",a,c,b,1.0*a*b);
			break;
		}
		case '/':
			{
				if (b!=0)
				{
				printf("%d %c %d = %.2f",a,c,b,1.0*a/b);
				break;
				}
				else printf("Loi mau so =0.");
			break;
			}
	}

}
int main(int argc, char* argv[]){
	if(argc==4){		
		int a = atoi(argv[1]);	
		char c = *argv[2];
		int b = atoi(argv[3]);		
		TinhToan(a,b,c);		
	}
	else
		printf("Err!");
}
