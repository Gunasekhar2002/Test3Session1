#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct  _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the numerator and denomenator for fraction :");
  scanf("%d %d",&f.num,&f.den);
   
  return f;
 
}
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int num,den,res1,res2,res3;
  Fraction smallest;
 int cmndiv=f1.den*f2.den*f3.den;
  res1=f1.num*cmndiv/f1.den;
  res2=f2.num*cmndiv/f2.den;
  res3=f3.num*cmndiv/f3.den;
  
  if (res1<res2 && res1<res3){
    return f1;
    
    
  }
  else if(res2<res1 && res2<res3){
    return f2;
    
  }
  else
  {
    return f3;
  }
}
void output(Fraction  f1, Fraction f2, Fraction f3, Fraction smallest)
  {
    if (smallest==)
    }
    
  
  
  
  
  
  
int main()
{
  Fraction f1,f2,f3;
  float small;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest_fraction(f1,f2,f3);
output(f1,f2,f3,small);
  
  
  return 0;
}