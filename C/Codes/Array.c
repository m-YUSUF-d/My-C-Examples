int Arrays()    //valueType ArrayName[..];
{
    int numbers[60];

    for (int i =0 ;i<60 ;i++)
    {
        numbers[i]=i+1;
        printf("%d\n",numbers[i]);
        sleep(1);
    }

    numbers[(int) numbers[0]] = 45;
    printf("%d ", numbers[1]);
    printf("%d ", numbers[(int) numbers[0]]);
}


int Arrayexample()  //Example
{
    int numbers[10]={};
    int sayac=0;
    int number;

    while(sayac < 10)
    {
        printf("Enter the number[%d]: " , sayac);
        scanf(" %d" , &number );

        if(number!=0)
            numbers[sayac]=number;

        else
            break;

        sayac++;
    }

    for(int i=0 ; i<sayac ; i++)
    {
        printf("\n%d --> ", numbers[i]);

        for(int j=0 ; j<numbers[i] ; j++)
            printf("*");
    }
}


int Matris()    //valueType ArrayName[..][..];
{
    int A[2][3]={1,2,3,
                 4,5,6};

    int B[3][1]= {7,
                  8,
                  9};

    int C[2][1]= {};

    for(int i = 0 ; i < 2 ; i++)
    {
       for(int j = 0 ; j < 3 ; j++)
       {
            for(int k = 0 ; k < 1 ; k++)
                C[i][k] = A[i][j] * B[j][k];
       }
    }

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 1 ; j++)
            printf("%d  " , C[i][j]);

       printf("\n");
    }
}


int AverageOfArraysElements(int numbers[3][3])  //Calculates average of the arrays's elements
{
    float result = 0;

    for(int i =0;i<3;i++)
        for(int j =0;j<3;j++)
            result +=numbers[i][j];

    printf("Ortalama esittir = %f" , result/9);
}
