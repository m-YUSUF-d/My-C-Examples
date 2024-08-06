int Pointers()  // valueType *..;
{
    int y = 7;
    int *b = &y;
    int **c = &b;
    int ***d = &c;
    printf("Value of Y : %d,\n", y);
    printf("Adress of Y : %p , %p,\n", &y , b);     //'&' adress of ... değişkenin başına konur, adresini verir.
    printf("Value in adress of Y: %d.\n", *b);    //'*' value at ... adres tutan değişkenin başına konur, adresteki değişkeni verir.
    printf("Value in adress of adress of adress of Y: %d.\n\n", ***d);

    int x[5] ={10,20,30,40,50};
    char *a= &x[0];
    for(int i = 0 ; i < 20 ; i++)
        printf("Adress: %p\tNumber: %d\n",  a+i , *(a+i) );    //Adresler 1 er 1 er artar char 1 bittir.

}


int Address_PointerExample(int *x , int a , int b)   //Use matris that entered address
{
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            printf("%d\t " , *(x + b*i + j) );
        }
    printf("\n");
    }
}


float PointersOfFunctions(float y)   //Pointers of functions
{
    printf("This number is %f." , y);
}
float Test(float x)   //Test of pointers of functions
{
    return x;
}


int CONST_CAN_CHANGE()  // :D
{
    const int a = 5;
    printf("%d %p\n",a,&a);

    int *h = &a;
    *h = 8;

    printf("%d %p\n",a,&a);
}


double *FindTheBiggestNumber(double array[] , int n)    //Finds the biggest number in array
{
    double biggestNum = array[0];
    int index = 0;

    for(int i = 1 ; i < n ; i++)
        if(biggestNum < array[i])
        {
            biggestNum = array[i];
            index = i;
        }

    return array+index;
}


float AverageOfArraysElements2(int *array,int n)    //Send the array's address
{
    float sum = 0.0;
    for(int i = 0 ; i < n ; i++)
        sum+=array[i];

    return sum/n;
}
