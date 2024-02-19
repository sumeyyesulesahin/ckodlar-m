#include <stdio.h>
#include <stdlib.h>
float ort(int dizi[],int n)
{
    if(n==1)
    {
        return dizi[0];
    }
    else
    {
        return (dizi[n-1]+ort(dizi,n)*(n-1)/n);

    }
}








int main()
{
  int sayilar[]={1,2,3,4,5,6};
  int n=5;
  printf("%f",ort(sayilar,n));
}

