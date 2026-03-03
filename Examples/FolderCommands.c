#include <stdio.h>
#include <stdlib.h>

void FolderCommands()
{
    //write
    FILE *fp;
    fp = fopen("dosya.txt" , "w");

    if(fp != NULL)
    {
        fprintf(fp , "%s" , "Hello World !");
    }
    fclose(fp);


    //read
    char reading[100];
    fp = fopen("dosya.txt" , "r");

    if(fp == NULL)
    {
        printf("dosya.txt is not existed.");
        exit(0);
    }

    fgets(reading, sizeof(reading), fp);
    puts(reading);


    fclose(fp);
}
