int IfElseExample() //if(..) , else
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if(a<0)
        a = (-a);

    if((a % 2) == 0)
        printf("\n Sayi cift");
    else
        printf("\n Sayi tek");
}


int SwitchCaseExamples()    //Switch(..){ case .. : , .... , default:}
{
    int a;
    int b;
    int c;

    printf("Enter the number:\n");
    scanf("%d", &a);

    switch (a){

        case 1:
            printf("Toplama icin 2 sayi gir\n");
            scanf("%d" ,&b);
            scanf("%d", &c);
            printf("%d", b+c);
            break;

        case 2:
            printf("Cikarma icin 2 sayi gir\n");
            scanf("%d" ,&b);
            scanf("%d" ,&c);
            printf("%d", b-c);
            break;

        case 3:
            printf("Carpma icin 2 sayi gir\n");
            scanf("%d", &b);
            scanf("%d", &c);
            printf("%d", b*c);
            break;

        case 4:
            printf("Bolme icin 2 sayi gir\n");
            scanf("%d" ,&b);
            scanf("%d" ,&c);

                if(c==0)
                    c=1;

            printf("%d", b/c);
            break;

        default:
        printf("Hatalı deger girildi");
    }
}


int TernaryOperator()  //(.. == ..)?
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);

    (a>0)? printf("Number %d", a) : printf("Number %d", -a);
}


