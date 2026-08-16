void main()
{
    int n1 = 5, n2 = 5, result;
    char o;

    printf("Enter Operator (+,-,*,/,%): ");
    scanf(" %c", &o);

    if(o == '+')
    {
        result = n1 + n2;
    }
    else if(o == '-')
    {
        result = n1 - n2;
    }
    else if(o == '*')
    {
        result = n1 * n2;
    }
    else if(o == '/')
    {
        result = n1 / n2;
    }
    else if(o == '%')
    {
        result = n1 % n2;
    }
    else
    {
        printf("Invalid Operator");
        return;
    }

    printf("RESULT = %d", result);
}