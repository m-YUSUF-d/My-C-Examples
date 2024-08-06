#include <stdarg.h>

int FlexibleArgumentFunction(int n, ...)    //Int n show the number of entered elements after n, ... entered elements.
{
    va_list numbers;
    int i ,top = 0;

    va_start(numbers , n);

    for(i = 1 ; i <= n ; i++)
        top += va_arg(numbers,int);

   va_end(numbers);
   return top;
}


int ReverseTheNumbersArray(int n , ...) //Print the numbers of arrays in reverse
{
    va_list numbers;
    int i , num[n];
    va_start(numbers,n);

    for(i = 0 ; i < n ; i++)
    {
        num[i] = va_arg(numbers,int);
    }

    for(int j = (n - 1) ; j >= 0 ; j--)
    {
        printf("%d\n", num[j]);
    }

    printf("\n");
}
