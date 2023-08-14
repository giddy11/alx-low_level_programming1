#ifndef MAIN_H
#define MAIN_H

/* C standard library header files */
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
//  struct User *new_user(char *name, char *email, int age);

/*Struct types*/
// typedef struct {
//     char *name;
//     char *email;
//     int age;
// } User;

typedef struct{
    char *name;
    char *email;
    int age;
} User;



#endif /*MAIN_H*/