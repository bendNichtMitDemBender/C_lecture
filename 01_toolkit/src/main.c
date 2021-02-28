/*
 * Copyright (c) 2021 Kai Mathias Janzen
 * 
 * Created Date: Saturday, February 27th 2021, 4:17:45 pm
 * Author: Kai Mathias Janzen
 */


/**************************** System headers *********************************/
/**
 * in C stdio.h in C++ stdio
 * eigene Header-Dateien in "customFile.h"
*/
#include <stdio.h>      //!< Standard IO Header
#include <stdbool.h>    //!< Standard Bool-Header, da C keine Bool-Variablen kennt

/****************************** User headers *********************************/

/**************************** Defines - Macros *******************************/

/********************** Variables / Data Structures **************************/
/**
 * Mittels Typedef sparen wir uns das "struct" bevor jeder Nutzung der Variable.
 * Für die Abkürzung kann dann "point_t" genutzt werden.
 */

char g = 'Z';

typedef struct point{
    double x;
    double y;
    double z;
}point_t;

typedef int pid_t;  /* erlaubt das nutzen von eigenen Namen für die jew. Variablen*/
/*************************** Function Prototypes *****************************/
int bar(int v1, int v2);
/************************* Function Implementation ***************************/

void allocate_memory(){
    int *x = malloc( sizeof( int ));
    malloc( sizeof(point_t));
}

int function_name(double arg1, int arg2, char arg3){
    int i;          /* C99 Standard, Variablen müssen zu Beginn der FUnktion definiert werden.*/
    for(int i = 0; i < 10; i++){
        /* C-Style Kommentar */
        // C++-Style Kommentar
    }
    struct point p1;
    p1.x = 1.9;
    p1.y = -2.5;
    p1.z = 0.3;

    return 0;
}

 point_t add_points( point_t p1, point_t p2){
    point_t result;
    result.x = p1.x + p2.x;
    /* Imagine the rest */
    return result;
}

int foo(){
    return bar(7, 11);
}

int bar(int v1, int v2){
    return v1 * v2;
}
/***************************** Entry point ***********************************/











/**************************** System headers *********************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/****************************** User headers *********************************/
#include "main.h"

/**************************** Defines - Macros *******************************/
#define BUFFER_SIZE 1000
#define FUNKTION

/********************** Variables / Data Structures **************************/
char g = 'Z';

typedef int pid_t;

extern int errno;

typedef struct point
{
    double x;
    double y;
    double z;
} point_t;

/*************************** Function Prototypes *****************************/
int bar(int v1, int v2);

/************************* Function Implementation ***************************/
int bar(int v1, int v2)
{
    return v1*v2;
}

int foo()
{
    return bar(7, 11);
}

point_t add_points(point_t p1, point_t p2)
{
    point_t result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    result.z = p1.z + p2.z;
    return result;
}

void initialize_array(int* a, int capacity)
{
    memset(a, 0, capacity * sizeof(int));
}


void add_to_point(point_t t1, point_t t2)
{
    // TODO
}

void string_stuff()
{
    char* buffer = malloc(BUFFER_SIZE);
    printf("Hello World!\n");

    int z = -25;
    printf("The value of z is %d.\n", z);
    point_t p2;
    p2.x = 1.5;
    p2.y = -3.3;
    p2.z = 9.1;
    printf("(%f, %f, %f)\n", p2.x, p2.y, p2.z);
    char null_term = '\0';
    char zero = '0';
    free(buffer);
}

void allocate_memory()
{
    int* x = malloc(sizeof(int));
    int* y = x;
    *x = 0;
    free(x);
    point_t* p = malloc(sizeof(point_t));
    p->x = 99.9;
    free(p);

    int stack_array[10];
    int* heap_array = malloc(10 * sizeof(int));

    initialize_array(heap_array, 10);

    free(heap_array);
}

int work(int* x, int* y)
{
    return *x + *y;
}

void do_work()
{
    int* a = malloc(sizeof(int));
    *a = 5;
    int* b = malloc(sizeof(int));
    *b = 7;
    int c = work(a, b);
    free(a);
    free(b);
}

/**
 * @brief 
 * 
 * @return int 
 */
int func()
{
    int i;
    for(i = 0; i < 10; ++i)
    {
        // TODO
    }
    point_t p1;
    p1.x = 1.9;
    p1.y = -2.5;
    p1.z = 0.3;
    return 0;
}

/***************************** Entry point ***********************************/
/** \brief main
 */
int main(int argc, char** argv)
{
    int count = atoi(argv[2]);

    // End of the program
    exit(EXIT_SUCCESS);
}
