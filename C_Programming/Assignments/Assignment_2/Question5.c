#include<stdio.h>
void main()
{
    int p;
	char s;
    printf("ARE YOU A STUDENT?\n");
	scanf("%c",&s);
    printf("Total price=\n");
    scanf("%d",&p);
    

    if(s=='y' && p>=500)
    {
        p=p-0.20;
    }
    else if(s=='y' && p<=500)
    {
        p=p-0.10;
    }
    else if(s=='n' && p>=600)
    {
        p=p-0.15;
    }
    
    printf("Total price with discount=%d",p);
}