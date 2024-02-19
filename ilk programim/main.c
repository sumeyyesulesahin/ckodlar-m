#include <stdio.h>
#include <stdlib.h>

int main()
{
int integardegiskeni;
double doubledegiskeni;
float floatdegiskeni;
char chardegiskeni;

printf("integar degiskeninin bellekte kapladigi yer=%ld\n",sizeof(integardegiskeni));
printf("double degiskeninin bellekte kapladigi yer=%ld\n",sizeof(doubledegiskeni));
printf("float degiskeninin bellekte kapladigi yer=%ld\n",sizeof(floatdegiskeni));
printf("char degiskeninin bellekte kapladigi yer=%ld",sizeof(chardegiskeni));
}

