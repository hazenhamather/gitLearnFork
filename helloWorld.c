#include <stdio.h>

int bss_var;        /* Uninitialized global variable */

int data_var = 1;   /* Initialized global variable */

int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */

  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */

  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);

  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);

  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  // Add your name below here.  Be sure it stills compiles
  printf("This is Austin Yates\n");
  printf("This is David Mehl\n");
  printf("Hi this is Luke J. Kuza\n");
  printf("HI IM SABEEH");
  printf("Hi this is George F. Rung\n");
  printf("Hi this is Josh Woods\n");
  printf("Hi this is Joseph Militello\n");
  printf("Hi this is Hazen Hamather\n");
  return 0;
}
