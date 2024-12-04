#include <stdio.h>
#include <stdlib.h>


int fonksiyon(int _sayi){
int sayac = 0 ; 

for(int i =1 ; i<=_sayi;i++){
    for (int j =1 ;j<=i ;j++){
    if(i%j==0){
        sayac++; 
    }
    }
    if(sayac==2){
        printf("%d sayısı asaldır.\n",i); 
    }
    sayac =0 ; 
}
return 1; 
}


int main(){

int sayi ; 
printf("bir sayı girin: "); 
scanf("%d",&sayi); 

fonksiyon(sayi); 

    return 0 ; 
}