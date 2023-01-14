#include<stdio.h>

struct complex
{
float real;
float imaginary;
};
typedef struct complex complex;

complex input_complex();
complex add_complex(complex a, complex b);
void output(complex a, complex b, complex sum);

int main()
{
  complex a, b, sum;
  a=input_complex();
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
  return 0;
}

complex input_complex()
{
  complex c1;
  printf("Enter the real part\n");
  scanf("%f", &c1.real);
  printf("Enter the imaginary part\n");
  scanf("%f", &c1.imaginary);
  return c1;
}

complex add_complex(complex a, complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(complex a, complex b, complex sum)
{
  printf("The sum of %f+%fi and %f+%fi is %f+%fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}