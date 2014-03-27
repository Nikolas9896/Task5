#include"my_string.h"
//#include<stdio.h>

int main()
{

    char text [] = "Hello";
    char copy_text [ sizeof(char) ];

    Strcpy( copy_text, text );
    printf("%s", copy_text);

    return 0;
}
