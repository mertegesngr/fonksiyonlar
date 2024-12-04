#include <stdio.h>
#include <stdlib.h>

int fonksiyon (int _sayi){
int sayac =1 ; 
while (_sayi>=10){
    _sayi=_sayi/10 ; 
sayac++; 
}
printf("sayınız %d basamaklıdır ",sayac); 
return 1; 
}


int main(){

int sayi ; 

printf("sayı girin: "); 
scanf("%d",&sayi); 

fonksiyon(sayi); 









    return 0 ; 
}