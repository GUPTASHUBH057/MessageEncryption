#include<stdio.h>


int main()
{
	char a[100];
	printf("Enter the Encrypted Message that you want to decrypt : \n");
	gets(a);
	printf("\n");
	for(int i=0;i<100;i++)
	{
		a[i]=a[i]-5;
	}
	printf("Decrypted Message is : \n");
	puts(a);
}
