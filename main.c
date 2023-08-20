#include <stdio.h>
#include <stdlib.h>

/* Öncelikle sadece adýnýz için gerekli olan minimum bellek alanýný malloc ile ayýrýnýz. Daha sonra
soyadýnýzý da eklemek için bu bellek alanýný realloc ile geniþletiniz */

int main(){
 char ad[5]="ikra";
char soyad[7]="yemlik"
char *ptr;
ptr=(char *)malloc(5*sizeof(char));

ptr=(char* )realloc( ptr,7*sizeof(char));

printf("%s %s",ad,soyad);





return 0;
}
