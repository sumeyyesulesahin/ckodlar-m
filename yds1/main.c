#include <stdio.h>
#include <stdlib.h>

    struct kitap
    {
        char kitapadi[30];
        float fiyat;
        int sayfa;
    };




int main()
{

   struct kitap *kitap1;
   kitap1=(struct kitap*)malloc(sizeof(struct kitap));
   kitap1->kitapadi="sefiller";
   kitap1->fiyat=50;
   kitap1->sayfa=234;
   printf("bilgiler: %s,%f,d",ktap1->kitapadi,kitap1->fiyat,kitap1->sayfa);


}
