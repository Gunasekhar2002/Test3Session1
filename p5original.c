#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the size of the array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the elements of the array:\n");
  for (int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  for (int i = 1; i < n; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  int largest=a[0];
  return largest;

}
void out_put(int n,int a[n],int largest)
{
  printf("largest number in the array is %d",largest);
}
int main()
{
  int n,large;
  int a[n];
  n=input_size();
  input_array(n,a[n]);
  large=find_largest(n,a[n]);
  out_put(n,a[n],large);
}