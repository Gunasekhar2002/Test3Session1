#include<stdio.h>
struct _fraction
{
float num,den;
};
typedef struct  _fraction Fraction;
Fraction input_fraction()
{
  Fraction f1,f2,f3;
  printf("Enter the numerator and denomenator for fraction 1:");
  scanf("%f %f",&f1.num,&f1.den);
   printf("Enter the numerator and denomenator for fraction 2:");
  scanf("%f %f",&f2.num,&f2.den);
   printf("Enter the numerator and denomenator for fraction 3:");
  scanf("%f %f",&f3.num,&f3.den);
  return f1;
  return f2;
  return f3;
}
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int num,den;
  int smallest;
  
  float  res1,res2,res3;
  res1=(f1.num)/(f1.den);
  res2=(f2.num)/(f2.den);
  res3=(f3.num)/(f3.den);
  if (res1<res2 && res1<res3){
    smallest=res1;
    
  }
  else if(res2<res1 && res2<res3){
    smallest=res2;
    
  }
  else
  {
    smallest=res3;
  }
}
void output(Fraction  f1, Fraction f2, Fraction f3, float smallest)
  {
    printf("the smallest fraction among three given fraction is %f",smallest);
  }
    
  
  
  
  
  
  
int main()
{
  Fraction f1,f2,f3;
  float small;
  input_fraction();
  smallest_fraction(f1,f2,f3);
output(f1,f2,f3,small);
  
  
  return 0;
}