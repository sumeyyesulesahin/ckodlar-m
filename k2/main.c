#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girileceksayi;
    printf("bir sayi giriniz:");
    scanf("%d",&girileceksayi);
    if(girileceksayi%2==0){
        printf("sayi cifttir");

    }
    else{
        printf("sayi tektir");
    }

}
