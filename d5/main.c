#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vizenotu,finalnotu,sonuc,vizepuani,finalpuani;
        printf("vize notunu giriniz:");
        scanf("%d",vizenotu);
        vizepuani=vizenotu*40/100;
        printf("final notunu giriniz:");
        scanf("%d",&finalnotu);
        finalpuani=finalnotu*60/100;
        sonuc=finalpuani+vizepuani;
        printf("%d",sonuc);
            return 0;
}
