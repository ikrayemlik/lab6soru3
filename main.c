#include <stdio.h>
#include <stdlib.h>

/* �ncelikle sadece ad�n�z i�in gerekli olan minimum bellek alan�n� malloc ile ay�r�n�z. Daha sonra
soyad�n�z� da eklemek i�in bu bellek alan�n� realloc ile geni�letiniz */

int main(){
 char ad[5]="ikra";
char soyad[7]="yemlik"
char *ptr;
ptr=(char *)malloc(5*sizeof(char));

ptr=(char* )realloc( ptr,7*sizeof(char));

printf("%s %s",ad,soyad);





return 0;
}
