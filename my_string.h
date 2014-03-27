#ifndef MY_STRING_H
#define MY_STRING_H

#include"my_string_global.h"

char * Strcpy( char * destination, const char * source )
{
    memcpy( destination, source, sizeof( source ) );
    return destination;
}


#endif //MY_STRING
