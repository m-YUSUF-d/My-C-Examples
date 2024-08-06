int main()
{
    /**ASCICodes**/
    {
    /*
        ASCICodes();
    */
    }


    /**Parameters**/
    {
    /*
        int x , y;

        printf("Enter the first number :\n");
        scanf(" %d" , &x);

        printf("Enter the second number :\n");
        scanf(" %d" , &y);

        Parameters(x , y);
    */
    }


    /**RecursiveFunctions**/
    {
    /*
        int x = 0;

        printf("Enter the number :\n");
        scanf(" %d" , &x);

        printf("%d" , RecursiveFunctions(x) );
    */
    }


    /**Factorial**/
    {
    /*
        int x = 0;

        printf("Enter the number :\n");
        scanf(" %d" , &x);

        printf("%d \n" , Factorial(x) );
    */
    }


    /**Fibonacci**/
    {
    /*
        int x = 0;

        printf("Enter the number :\n");
        scanf(" %d" , &x);

        Fibonacci(x);
    */
    }


    /**FindWantedTextInText**/
    {
    /*
        char text[100];
        char wanted[5];
        gets(text);
        gets(wanted);

        puts(FindWantedTextInText(0,text,wanted));
    */
    }


    /**AverageOfArraysElements**/
    {
    /*
        int numbers[3][3];

        for(int i =0;i<3;i++)
            for(int j =0;j<3;j++)
                scanf("%d", &numbers[i][j]);

        AverageOfArraysElements(numbers);
    */
    }


    /**FindNumberOf_a**/
    {
    /*
        char text[100];
        gets(text);
        printf("a saiyisindan %d kadar var." , FindNumberOf_a(0,0,text) );
    */
    }


    /**FlexibleArgumentFunction**/
    {
    /*
        int x = 9;
        printf("%d" ,FlexibleArgumentFunction(x, 2,4,6,8,10,12,14,16,18) );    //Buradaki değişkenler (ilki hariç) elle girilmek zorundadır yoksa kod düzgün çalışmaz
    */
    }


    /**FindNumberOfLetters && ConvertStringToNumber**/
    {
    /*
        char text[50];
        printf("Enter the text:\n");
        gets(text);

        FindNumberOfLetters(text);
        ConvertStringToNumber(text);
    */
    }


    /**SimpleCalculator**/
    {
    /*
        float x , y;
        char z;

        printf("Enter the first number :\n");
        scanf(" %f" , &x);

        printf("Enter the second number :\n");
        scanf(" %f" , &y);

        printf("Enter the one of these operators << + , - , / , x >> :\n");
        scanf(" %c" , &z);

        printf("%f" , SimpleCalculator(x , y , z) );
    */
    }


    /**ReverseTheNumbersArray**/
    {
    /*
        ReverseTheNumbersArray(10, 1,2,3,4,5,6,7,8,9,10);
    */
    }


    /**AverageOfArraysElements2**/
    {
    /*
        int size;

        printf("Enter the size of array :");
        scanf(" %d" , &size);

        int numbers[size];

        for(int i = 0 ; i < size ; i++)
        {
        printf("Enter the %d. number:" , i+1);
        scanf(" %d" , &numbers[i]);
        }

        printf("%f ", AverageOfArraysElements2(numbers,size));
    */
    }


    /**SendAddress_Variable**/
    {
    /*
        int num1 = 8 , num2 = 9;
        printf("num1 = %p\tvariable: %d\n", &num1 , num1);
        printf("num2 = %p\tvariable: %d\n\n", &num2 , num2);

        SendAddress_Variable(&num1 , num2);  //num1 in adresi gönderilecek ,num2 nin sayı değeri gönderilecek
    */
    }


    /**FindTheBiggestNumber**/
    {
    /*
        int size;

        printf("Enter the size of array :");
        scanf(" %d" , &size);

        double numbers[size];

        for(int i = 0 ; i < size ; i++)
        {
        printf("Enter the %d. number:" , i+1);
        scanf(" %lf" , &numbers[i]);
        }

        printf("%lf" , *FindTheBiggestNumber(numbers , size));
    */
    }


    /**Address_PointerExample**/
    {
    /*
        int size1 , size2;

        printf("Enter the size1 of array :");
        scanf(" %d" , &size1);

        printf("Enter the size2 of array :");
        scanf(" %d" , &size2);

        int  matris[size1][size2];

        for(int i = 0 ; i < size1 ; i++)
        {
            for(int j = 0 ; j < size2 ; j++)
            {
            printf("Enter the %d. number:" , i*size2 + j);
            scanf(" %d" , &matris[i][j]);
            }
        }

        Address_PointerExample(matris , size1 , size2);
    */
    }


    /**PointersOfFunctions**/
    {
    /*
        float (*pointer)(float);   //Parantez içine fonksiyonun aldığı değer tipi girilir
        pointer = &Test;

        PointersOfFunctions( pointer(5.5) );
    */
    }


    /**Malloc_Calloc_Realloc**/
    {
    /*
        Malloc_Calloc_Realloc();
    */
    }


    /**CopyTextToAnotherText**/
    {
    /*
        int pos , lenght , size;

        printf("Enter your array size : ");
        scanf(" %d" , &size);
        getchar();

        char *text = (char *) calloc(size ,sizeof(char));

        printf("Enter your text : ");
        gets(text);

        printf("Enter position : ");
        scanf("%d" , &pos);
        printf("Enter lenght : ");
        scanf("%d" , &lenght);

        CopyTextToAnotherText(text , pos-1 , lenght , size);
    */
    }


    /**StructsExamples**/
    {
    /*
        struct Student student1;
        struct Student student2;
        struct Student student3;

        strcpy(student1.name , "Yusuf");
        student1.age = 21;
        student1.not = 70;

        strcpy(student2.name , "Mehmet");
        student2.age = 15;
        student2.not = 50;

        strcpy(student3.name , "Ali");
        student3.age = 25;
        student3.not = 60;

        printf("Not otralamasi : %f" , Ort(3 , student1.not , student2.not , student3.not) );
    */
    }


    /**ContactExampleWithMalloc**/
    {
    /*
        Person *person;

        int size;
        int kontrol = 1;

        while(kontrol == 1)
        {
            printf("Enter the size : \n");
            scanf("%d" , &size);

            if(size > 0)
            {
                kontrol = 0;
            }
            else
            {
                printf("Enter possitive numbers !!\n\n");
            }
        }

        person = (Person *) calloc(size , sizeof(Person));

        for(int i = 0 ; i < size  ; i++)
        {
           printf("%d - Enter name , surname and number : \n" , i + 1);
           scanf(" %s" , person[i].name);
           scanf(" %s" , person[i].surname);
           scanf(" %d" , &person[i].NO);
        }

        for(int i = 0 ; i < size  ; i++)
        {
            printf("\n\n%d. Contact : \n" , i + 1);

            puts(person[i].name);
            puts(person[i].surname);
            printf("%d" , person[i].NO);
        }
    */
    }


    /**FolderCommands**/
    {
    /*
        FolderCommands();
    */
    }
}
