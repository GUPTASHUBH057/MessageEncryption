#include<stdio.h>
#include<stdlib.h>


void encrypt();
void decrypt();

void decrypt()
{
	char m[100] = {0};
    printf("\n enter your message without spaces : ");
	scanf("%s",m);
	printf("\n");
	for(int i=0;i<100;i++)
	{
		m[i] = m[i]-50;
	}
	printf("the decrypted message is : \n\n");
	for(int i=0;i<100;i++)
	{
		printf("%c",m[i]);
	}
	printf("\n\n");
}

void encrypt()
{
	char a[100]={0};
	printf("\n enter your message without spaces : ");
	scanf("%s",a);
	printf("\n");
	for(int i=0;i<100;i++)
	{
		a[i] = a[i]+50;
	}
	printf("the encrypted message is : \n\n");
	for(int i=0;i<100;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n\n");
	return;
}

int main()
{
	int choice;
	while(1)
	{
		printf("___________________MESSEGE ENCRYPTION AND DECRYPTION SOFTWARE___________________\n\n\n\n");
	    printf("1. Press 1 for encrypting a message \n");
	    printf("2. Press 2 for decrypting a message \n");
	    printf("3. Press 3 to exit \n\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
		    case 1: encrypt();
		    break;
		    case 2: decrypt();
		    break;
		    case 3: exit(1);
		    default: printf("invalid opton chosen \n\n");
	    }
	}
	return 0;

}

