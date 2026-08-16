void main()
{
    int a=111, b=7, c=9;
    
    if(a>b && a>c)
    {
        printf("Greatest number is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Greatest number is %d",b);
    }
    else if(c>a && c>b)
    {
        printf("Greatest number is %d",c);
    }
    else
    {
        printf("Invalid ");
    }
}