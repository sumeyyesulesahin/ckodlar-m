#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("lutfen x sayisi giriniz:");
    scanf("%d",&x);
    printf("lutfen y sayisi giriniz:");
    scanf("%d",&y);
    if(x>y)
{
    printf("x y den buyuktur");
}
    else if(x==y){
        printf("x y ye esittir");
    }
    else
    {
        printf("x y den kucuktur");
    }






    return 0;
}
