#include <stdio.h>
#include <stdlib.h>

int fonksiyon(int _sayi){
int sonuc =1 ; 

for (int i =1 ;i<=_sayi ; i++){
    sonuc=sonuc * i ; 
}

printf("%d sayısının faktöryeli = %d",_sayi,sonuc); 
return 1; 
}


int main(){

    int sayi ; 
    printf("sayı gir: "); 
    scanf("%d",&sayi); 
fonksiyon(sayi); 

}