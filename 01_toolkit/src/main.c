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
#include <string.h>
#include <errno.h>

/****************************** User headers *********************************/

/**************************** Defines - Macros *******************************/
#define BUFFER_SIZE 1000
#define VALUE (2 * 25 + 4)  // Klammern helfen, ansonsten = 54

/********************** Variables / Data Structures **************************/
/**
 * Mittels Typedef sparen wir uns das "struct" bevor jeder Nutzung der Variable.
 * Für die Abkürzung kann dann "point_t" genutzt werden.
 */

extern int errno;   // extern , da es außerhalb dieses Dokuments definiert wurde.

char g = 'Z';       // Deklaration und Initialisierung eines char

typedef struct point{
    double x;
    double y;
    double z;
}point_t;

typedef int pid_t;  /* erlaubt das nutzen von eigenen Namen für die jew. Variablen*/
/*************************** Function Prototypes *****************************/
int bar(int v1, int v2);
/************************* Function Implementation ***************************/

int init_header(struct header *h, int v1, double v2, struct thing * v3);
int stack_push(stack *s, int *value, point_t t2);       // Return 0 ok!, 1-255 gibt einen Error-Code zurück.

void add_to_point( point_t t1, point_t t2){

}

void string_stuff(){
    int v = VALUE * 2;


    char *buffer = malloc(BUFFER_SIZE);
    printf("Hello World!"); // Der Compiler fügt das \n automatisch hinzu.

    int z = -25;
    printf("The value if z is %d.\n", z);

    point_t p2;
    p2.x = 1.5;
    p2.y = -3.3;
    p2.z = 9.1;
    printf("(%f, %f, %f)\n", p2.x, p2.y, p2.z);

    // Beim Allokieren von Speicher muss darauf geachtet werden, dass genug Speicher auch für das \n vorhanden ist.
    char null_term = '\n';
    char zero = '0';

}


void allocate_memory(){
    int *x = malloc( sizeof( int ));    // Speicher anfordern
    int *y = x; // Zeigt auf den gleichen Speicher wie X, dealokieren des Speichers auf Y macht keinen Sinn
    *x = 0;                             // dereferenzieren um den Wert schreiben zu können
    free(x);                            // Speicher freigeben
    point_t *p = malloc( sizeof(point_t));
    (*p).x = 99.9;
    p->x = 99.9;        // Das gleiche wie eine Zeile drüber
    free(p);

    int stack_array[10];                        // Statisches Array auf dem Stack
    int *heap_array = malloc(10 * sizeof(int)); // Dynamisches Array auf dem Heap
    stack_array[5] = 7;                         // Zugriff funktioniert gleich
    heap_array[3] = 42;
    
    initialize_array(heap_array, 10);

    free(heap_array);
    


}

void initialize_array(int *a, int capacity){
    memset( a, 0, capacity * sizeof(int));

    // Memset für Arme
    for(int i = 0; i < capacity; i++){
        a[i] = 0;
    }
}


void do_work(){
    int *a =malloc(sizeof(int));
    *a = 5;
    int *b = malloc(sizeof(int));
    *b = 7;
    int c = work(*a, *b);
    free(a);
    free(b);
}

int work (int x, int y){    // Hier werden Werte erwartet und keine ADressen
    return x+y;
}

void do_work2(){
    int a = 5;
    int b = 7;
    int c = work2( &a, &b);
}

int work2(int *x, int *y){  // Hier werden Adressen erwartet
    return x+y;
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

/* ./hello arg1 arg2 -> das sind 3 Elemente.
Da es ein doppel-Pointer ist, ist es ein Array von Char-Arrays. Somit kann die EIngabe wie folgt 
aussehen: ./myProg -M -D 1234 5678*/
int main(int argc, char **argv){
    int count = atoi(argv[2]);

    return 0;
}