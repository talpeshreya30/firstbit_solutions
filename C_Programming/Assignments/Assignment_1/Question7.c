void main()
{
	int b=100,da,ta,hra,total=0;
	
	if(b<=5000)
	{
		da=b+b*10/100;
		ta=b+b*20/100;
		hra=b+b*25/100;
		printf("%d,%d,%d",da,ta,hra);
	}
	else
	{
		da=b+b*15/100;
		ta=b+b*25/100;
		hra=b+b*30/100;
		printf("%d,%d,%d",da,ta,hra);

	}
	total=da+ta+hra;
	printf("There total salary is %d",total);
}