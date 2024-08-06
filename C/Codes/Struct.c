#include <stdarg.h>

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


typedef struct
{
    char name[50];
    char surname[50];
    int NO;
}Person;

