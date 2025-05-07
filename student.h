#include <stdlib.h>
#include <stdio.h>

#ifndef STUDENT_H
#define STUDENT_H

#define MAX_SIZE 129

#define ERROR_CODE -1
#define STACK_OVERFLOW -2
#define EMPTY_STACK -3

#define OK_CODE 0

typedef struct pilha
{
    int size;
    char pilha[MAX_SIZE];
} Pilha;

int push(char c, Pilha * pilha);
int pop(char * output, Pilha * pilha);
int init_pilha(Pilha * pilha);

int read_input(char * str); //returns code (OK, ERROR)
int process_input(char * str); //returns result (0 - notok; 1 - ok)
int print_output(int output); //print output format

int simple_parentheses();

#endif
