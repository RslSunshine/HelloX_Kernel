//***********************************************************************/
//    Author                    : Garry
//    Original Date             : Jun 26,2014
//    Module Name               : stdlib.h
//    Module Funciton           : 
//                                Stdand C library simulation code.It only implements a subset
//                                of C library,even much more simple.
//    Last modified Author      :
//    Last modified Date        : Jun 26,2014
//    Last modified Content     :
//                                1. 
//    Lines number              :
//***********************************************************************/

#ifndef __STDLIB_H__
#define __STDLIB_H__

//Standard C malloc/free/calloc routine.
void* malloc(size_t size);
void  free(void* p);
void* calloc(size_t n,size_t s);

//Convert a string to long.
long atol(const char *nptr);

//Convert a string to int.
int atoi(const char *nptr);

//Convert a int to string.
char* itoa(int value,char *buf,int radix);

#endif  //__STDLIB_H__