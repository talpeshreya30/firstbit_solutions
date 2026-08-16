void main()
{
    int a=39;

    if(a>=75)
    {
        printf("Distinction");
    }
    else if(a>=65 && a<75)
    {
        printf("First Class");
    }
    else if(a>=55 && a<65)
    {
        printf("Second Class");
    }
    else if(a>=40 && a<55)
    {
        printf("Pass Class");
    }
    else
    {
    	printf("Fail");
	}
}