#include <stdio.h>
#include <stdlib.h>
float dortislem(float sayi1,float sayi2,char islem)

{
    if(islem=='+')
    {
       return sayi1+sayi2;
    }
    else if(islem=='-')
    {
       return sayi1-sayi2;
    }
    else if(islem=='*')
    {
       return sayi1*sayi2;
    }
    else
    {
        return sayi1/sayi2;
    }
    return 0;
}








int main()
{

 float a,b;
 char islem;

 printf("lutfen yaptýrmak istediginiz islemi giriniz(+,-,*,/)");
 scanf("%c",&islem);
 printf("lutfen iki sayi giriniz:");
 scanf("%f%f",&a,&b);

 printf("sonuc:%.2f",dortislem(a,b,islem));



}
