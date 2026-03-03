#include <stdio.h>

int Malloc_Calloc_Realloc() //Memory spaces to arrays.
{
    printf("MALLOC : \n");  //Malloc set space in memory but don't clear it.

    int n;
    printf("Enter size of array : ");
    scanf("%d" , &n);

    int *array;

    array = (int *) malloc(sizeof(int)*n);

    if(array == NULL)
        printf("Inadequate memory space.\n");

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
        printf("Inadequate memory space.\n");

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
    strcat(text ,"\nand \nProgramming");
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
