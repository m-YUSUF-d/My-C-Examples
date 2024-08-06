int RecursiveFunctions(int x)   //Enter functions with parameters in return , return ..(.. , .. , ..);
{
    printf("%d \n",x);

    if(x == 0)
        return "0\n";

    else
        return RecursiveFunctions(x-1);
}


int Factorial(int x)   // Factorial numbers
{
    if(x == 0 || x ==1)
        return 1;
    else
        return x*Factorial(x-1);
}
