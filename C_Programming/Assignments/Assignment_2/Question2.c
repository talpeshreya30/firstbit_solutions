void main()
{
    int a, b, c;

    printf("Give 3 sides");
    scanf("%d %d %d", &a,&b,&c);

    if(a==b && b==c)
    {
        printf("Its an Equilateral Triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Its an Isosceles Triangle");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("Its an Scalene Triangle");
    }
    else
    {
        printf("Invalid ");
    }
}