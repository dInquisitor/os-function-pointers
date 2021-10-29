#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int terminate(int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  printf("Operand 'a': 6 | Operand 'b': 3\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  int operation;
  int answer;
  int (*op_pointers[5])() = {add, subtract, multiply, divide, terminate};
  
  scanf("%d", &operation);
  
  answer = (*op_pointers[operation])(6, 3);
  printf("x = %d\n", answer);
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int terminate(int a, int b) {printf ("Exiting\n"); exit(0);} 
