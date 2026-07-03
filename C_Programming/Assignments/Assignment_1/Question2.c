void main()
{
	int n=121,org,rem,rev=0;
	org=n;
	
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	if(org==rev)
	printf("The number is palindrom");
	else
	printf("The number is not palindrom");
}