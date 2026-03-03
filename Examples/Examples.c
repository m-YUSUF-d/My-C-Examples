#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

    if(x == strlen(text) - strlen(a) + 2)
        return printf("<%s> bu dizi yoh :(",a);

    else if(text[x] == a[0])
    {
        for(int i = 1 ; i <= strlen(a) ; i++)
        {
            if(text[x+i] == a[i])
                counter++;
        }
        if(counter == strlen(a) - 1)
            return printf("%d. harfden itibaren %d harf <%s> dir" ,x+1,strlen(a),a);
    }

        return FindWantedTextInText(x + 1,text,a);
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

    return FindNumberOf_a(number , counter + 1 , text);
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
