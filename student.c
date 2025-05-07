#include "student.h"

int push(char c, Pilha * pilha)
{
    if(pilha->size >= MAX_SIZE)
    {
        return ERROR_CODE;
    }
    pilha->pilha[pilha->size] = c;
    pilha->size++;

    return OK_CODE;
}

int pop(char * output, Pilha * pilha)
{
    if(pilha->size > 0)
    {
        pilha->size--;
        (*output) = pilha->pilha[pilha->size];
        return OK_CODE;
    }
    else
    {
        (*output) = 0;
        return ERROR_CODE;
    }
}

int init_pilha(Pilha * pilha)
{
    pilha->size = 0;
    for(int i = 0; i<MAX_SIZE; i++) pilha->pilha[i] = 0;
    return OK_CODE;
}

int read_input(char * str) //returns code (OK, ERROR)
{
  return ERROR_CODE;
}
int process_input(char * str) //returns result (0 - notok; 1 - ok)
{
  return 0;
}

int print_output(int output) //print output format
{
  return OK_CODE;
}

int simple_parentheses() {
  // TODO: escreva uma expressao para verificar se a string str esta parentisada corretamente.
  char s[MAX_SIZE];
  int output = 0;
  
  read_input(s);
  output = process_input(s);
  print_output(output);

  return 0;
}
