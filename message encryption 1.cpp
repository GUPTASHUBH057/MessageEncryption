#include<stdio.h>

int main()
{
	char a[100];
	printf("Enter the Message that you want to Encrypt : \n");
	gets(a);
	printf("\n");
	for(int i=0;i<100;i++)
	{
		a[i]=a[i]+5;
	}
	printf("\n The Encrypted Message is : \n");
	puts(a);
}




