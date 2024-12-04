#include <stdio.h>
#include <stdlib.h>

int fonksiyon(int _sayi){
int sonuc =1 ; 
for (int j=1 ;j<=_sayi;j++ ){
for (int i =1 ;i<=j ; i++){
    sonuc=sonuc * i ; 
}
printf("%d sayısının faktöryeli = %d\n",j,sonuc); 
sonuc =1 ; 
}
return 1; 
}


int main(){

int sayi ; 
printf("sayı gir : "); 
scanf("%d",&sayi); 
fonksiyon(sayi); 

    return 0 ; 
}