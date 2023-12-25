#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>

char PrototypeExample(); //Prototype

//********************

int UsningPrintf()  //printf("%.." , ..);
{
	int num1 = 6;
	int num2 = 8;
	char isim = 'Y';

	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%c\n", isim);
	printf("Altina ayrica bir alt satira gecti.\n");
	printf("\tBir tab yana gitti.");
	printf("\r Tab");
}


int UsingScanf()    //scanf(%.. , &..);
{
	int age1;
	int age2;
	char cinsiyet;

	printf("Enter age1:\n");
	scanf("%d", &age1);

	printf("Enter age2:\n");
	scanf("%d", &age2);

	printf("cinsiyet:\n");
	scanf(" %c", &cinsiyet);

	printf("Sonuc = %lf   Cinsiyet = %c", (age1 + age2) / 2.0, cinsiyet);
}


int ASCICodes()     //'A' == 65;
{
    while(1)
    {
        char Char;
        printf("Enter a character:\n");
        scanf(" %c", &Char);
        printf("ASCI codes of %c = %d\n\n" , Char , Char);
    }
}


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


int ForExample()    //for(int x = 0 ; x < .. ; x++)
{
    int num;

    printf("Enter the number:\n");
    scanf(" %d" ,&num);

    for(int i=2 ; i <= num/2 ;i++)
    {
        if(num%i==0)
        {
            printf("Asal degil.");
            return 0;
        }
    }

    printf("Asaldir");
    return 0;
}


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


int RandFunction()  //rand(); return a random number
{
    srand(time(NULL));
    int num;

    printf("Enter number :");
    scanf(" %d" , &num);

    int notList[num][num];

    for(int i = 0 ; i < num ; i++)
    {
        for(int j = 0 ; j < num ; j++)
        {
        notList[i][j]=rand()%51+50;
        printf("%d  ", notList[i][j]);
        }

        printf("\n");
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


int Gets_S_putsExample()   //gets(..); , printf(%s , ..); , puts(..);
{
    char name[40];

    printf("Enter your name :");
    gets(name);

    for(int i=0 ; name[i] ; i++) // '\0' terminate dir diziyi bitirir.
        printf("%c" , name[i]);


    printf("\n\nEnter your name :");
    scanf("%s",name);   //& kullanılmadı. Diziler zaten adrese sahiptir.(& operatötü değişkenin bellekteki yerini söyler.)
    printf("Your name is %s \n" , name);


    printf("\nEnter your name , (+) is end:");
    for(int i=0;;i++)
    {
        scanf("%c",&name[i]);
        getchar();
        if('+'==name[i])
        {
            name[i]='\0';
            break;
        }
    }
    printf("\n");
    puts(name);

}


int Srt_Functions() //strcpy(.. , ..);  sprintf(.. , "%.." , ".."); strcat(.. , ..); strcmp(.. , ..);
{
    char text1[20];
    strcpy(text1,"Bursa");  //İkinci parametreyi başta ki diziye atar.

    char text2[20];
    sprintf(text2,"%s"," Teknik ");

    char text3[20];
    sprintf(text3,"%s %d","Universitesi ",2023);

    strcat(text2,text3);    //İkinci metni ilk metine ekler.
    strcat(text1,text2);
    puts(text1);

    printf("%d" , strcmp("b","a")); //Girilen 2 değerin büyüklüklerini karşılaştırır.
}


int ReverseText()   //Reverses a char array
{
    char text1[50];
    char text2[50]="Hello";

    for(int i =strlen(text2)-1 ; i>=0 ; i--)
        text1[strlen(text2)-1-i]= text2[i];

    printf("%s", text1);
}


int FindACharacterInText()  //Searches entered character in text
{
    char text[101];
    char wanted;

    printf("Enter your text :");
    gets(text);
    printf("Enter your wanted char :");
    scanf("%c",&wanted);

    for(int i=0 ; i<strlen(text) ; i++)
    {
        if(text[i]==wanted)
        {
            printf("\n*** I did it :D !! Your wanter char in text[%d] and %d. cahr. ***\n" , i , i+1);
            break;
        }

        if(i==strlen(text)-1)
            printf("\n** Scanned %d char but I can't find bro :( **\n",i);
    }
}


int ToUpper()   //toupper(..);
{
    char text[35];

    printf("Enter your text :");
    gets(text);

    text[0]=toupper(text[0]);
    for(int i=0 ; text[i]!='\0'; i++)
    {
        if(text[i]==' ')
        {
            text[i+1]= toupper(text[i+1]);
        }
    }
    puts(text);
}


char ProtytpeExample()  //Look at the 9. line
{
    return 'A';
}


void Parameters(int a ,int b)   //void ..(valueType .. , valueType .. , ...) {..}
{
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ;j++)
            printf("*");
        printf("\n");
    }
}


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


int Fibonacci(int indis)   //Fibonacci numbers
{
    int x = 1;
    int y = 1;
    int null = 0;

    printf("%d %d ",1,1);

    for(int i = 0 ; i < indis-2 ; i++)
    {
        printf("%d " , x + y);

        null = x;
        x = x + y;
        y = null;
    }
}


char FindWantedTextInText(int x , char text[] , char a[])   //Find the entered text in text, entered text have no limit.
{
    int counter = 0;

    if(x == strlen(text) - strlen(a)+2)
        return printf("<%s> bu dizi yoh :(",a);

    else if(text[x] == a[0])
    {
        for(int i = 1 ; i <= strlen(a) ; i++)
        {
            if(text[x+i] == a[i])
                counter++;
        }
        if(counter == strlen(a)-1)
            return printf("%d. harfden itibaren %d harf <%s> dir" ,x+1,strlen(a),a);
    }

        return FindWantedTextInText(x + 1,text,a);
}


int AverageOfArraysElements(int numbers[3][3])  //Calculates average of the arrays's elements
{
    float result = 0;

    for(int i =0;i<3;i++)
        for(int j =0;j<3;j++)
            result +=numbers[i][j];

    printf("Ortalama esittir = %f" , result/9);
}


int FindNumberOf_a(int number ,int counter , char text[100])    //Finds number of 'a' in entered text
{
    if(counter-1==strlen(text))
    {
        return number;
    }

    else if(text[counter]== 'a')
    {
        number++;
    }

    return FindNumberOf_a(number,counter+1,text);
}


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


int FindNumberOfLetters(char* text) //Finds the numbers of letter in text
{
    int x = 0;

    for(int i = 0 ; i < strlen(text) ; i++)
        if(isalpha(text[i])!=0)
            x++;

    printf("Number of letters : %d \n",x);
}


int ConvertStringToNumber(char text[])  //atoi(&..); "abc123" e uygulanırsa 123 sonucunu çıkarır
{
    int toplam = 0;
    char x;

    for(int i = 0 ; i < strlen(text) ; i++)
    {
        x = text[i];
        toplam += atoi(&x); //& pointer gibi bellekteki yerini belli eder
    }

    printf("Sum of the numbers : %d" ,toplam);
}


float SimpleCalculator(float a, float b, char x)    //Simple calculator example
{
    if(x == 'x')
    {
        return a*b;
    }

    else if(x == '/')
    {
        if(b==0)
            b=1;

        return a/b;
    }

     else if(x == '+')
    {
        return a+b;
    }

    else if(x == '-')
    {
        return a-b;
    }

    else
    {
        return -9999;
    }
}


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


int Palindrome()    //Finds the which text are palindrome
{
    char text[5][50]={"ahmet","mehmet","ali","veli","efe"};

    for(int i = 0 ; i < 5 ; i++)
    {
        char *pointer = (text+i);
        int lenght = strlen(pointer);
        int k = 1;

        for(int j = 0 ; j < lenght/2 ; j++)
        {
            if(pointer[j] != pointer[lenght-j-1])
            {
                k = 0;
                break;
            }
        }

    if(k)
        printf("%d Polindromdur.\n",i);

    else
        printf("%d Polindrom degildir.\n",i);

    }
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


float AverageOfArraysElements2(int *array,int n)    //Send the array's address
{
    float sum = 0.0;
    for(int i = 0 ; i < n ; i++)
        sum+=array[i];

    return sum/n;
}


int SendAddress_Variable(int *a , int b) //Different between send address of variable and send variable
{
    printf("num1 = %p\tvariable: %d\n" , a , *a);
    printf("num2 = %p\tvariable: %d\n\n" , &b , b);
    printf("Sum = %d" , *a + b);
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


int Malloc_Calloc_Realloc() //Memory spaces to arrays.
{
    printf("MALLOC : \n");  //Malloc set space in memory but don't clear it.

    int n;
    printf("Enter size of array : ");
    scanf("%d" , &n);

    int *array;

    array = (int *) malloc(sizeof(int)*n);

    if(array == NULL)
        printf("Inadequate memory space.");

    else
    {
        printf("Array is ready to use.\n");

        for(int i = 0 ; i < n ; i++)
        {
            *(array+i)= rand();
            printf("%d \t",*(array+i));
            printf("%p \n", array+i);
        }
    }


    printf("\nCALLOC : \n");    //Calloc set space in memory and clear it.

    int m;
    printf("Enter size of array : ");
    scanf("%d" , &m);

    int *array2;

    array2 = (int *) calloc(m,sizeof(int));

    if(array2 == NULL)
        printf("Inadequate memory space.");

    else
    {
        printf("Array is ready to use.\n");

        for(int i = 0 ; i < m ; i++)
        {
            printf("%d \t",*(array2+i));
            printf("%p \n", array2+i);
        }
    }


    printf("\nREALLOC : \n");    //Realloc increase memory space for the array.

    char * text = (char *) malloc(10*sizeof(char));
    strcpy(text,"Algorithm");
    puts(text);

    text=(char *) realloc(text,30*sizeof(char));
    strcpy(text ,"and \nProgramming");
    puts(text);


    //free() clear memory spaces for entered array.
    free(array);
    free(array2);
    free(text);
}


int CopyTextToAnotherText(char *text , int pos , int lenght , int size)
{
    char *text1;
    char *text2;
    text1 = (char *) malloc(size * sizeof(char));
    text2 = (char *) calloc(size , sizeof(char));

    strcpy(text1 , text);

    for(int i = 0 ; i < lenght ; i++)
    {
        text2[i] = text1[pos + i];
    }

    puts(text2);
}


struct Student
{
    char name[50];
    float age;
    float not;
};
float Ort(int n , ...)
{
    float x = 0.0;

    va_list List;
    va_start(List,n);

    for(int i = 0; i < n ; i++)
    {
        x += va_arg(List , float);
    }

    return x;
}


struct Person
{
    char name[50];
    char surname[50];
    int NO;
};



//********************

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

        puts(example22(0,text,wanted));
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
        struct Person *person;

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

        person = (struct Person *) malloc(sizeof(struct Person)*size);

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




}
