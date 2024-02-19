#include <stdio.h>
#include <stdlib.h>

  void liste(int sayi)
  {
      if(sayi==0)
      {
          printf("%d",sayi);
      }
      else
      {
          printf("%d ",sayi);
          liste(sayi-1);
      }
  }





int main()
{
    int x;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&x);
    liste(x);

    return 0;
}
