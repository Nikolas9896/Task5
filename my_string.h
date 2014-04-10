#ifndef MY_STRING_GLOBAL_H
#define MY_STRING_GLOBAL_H 1
#include<stdio.h>
#include<memory.h>

char* Strcat( char* dest, const char* src );
char* Strncat( char* dest, const char* src, size_t n );
char* Strchr( const char* str, int c );
int Strcmp( const char* str1, const char* str2 );
int Strncmp( const char* str1, const char* str2, size_t n );
int Strcoll( const char* str1, const char* str2 );
char* Strcpy( char* destination, const char* source );
char* Strncpy ( char * destination, const char * source, size_t num );
size_t Strcspn( const char* str1, const char* str2 );
char* Strerror( int errnum );
size_t Strlen( const char* str );
char* Strpbrk( const char* str1, const char* str2 );
char* Strrchr( const char* str, int c );
size_t Strspn( const char* str1, const char* str2 );
char* Strstr( const char* haystack, const char* needle );
char* Strtok( char* str, const char* delim );
size_t Strxfrm( char* dest, const char* src, size_t n );

#endif //MY_STRING_GLOBAL_H
