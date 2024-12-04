#include <stdio.h>
#include <stdlib.h>

int fonksiyon(int _sayi1, int _sayi2){
    int toplam =0 ;
    for (int i =_sayi1+1 ;i<_sayi2;i++){

        toplam=toplam+i ; 
    }
    printf("%d %d sayıları arasındaki sayıların toplamı : %d",_sayi1 ,_sayi2,toplam) ; 
    return 1; 
}

int main(){
int sayi1 ,sayi2 ; 
printf("sayı1 gir : "); 
scanf("%d",&sayi1); 
printf("sayı2 gir : "); 
scanf("%d",&sayi2); 

fonksiyon(sayi1,sayi2); 


return 0 ; 

}