#include <stdio.h>
#include <stdlib.h>

int fonksiyon(int _sayi){
int sayac = 0 ; 
for(int i =1 ; i<=_sayi;i++){
    if(_sayi%i==0){
        sayac++; 
    }
}
if(sayac==2){
    return 1 ; 
}
else{
    return 0 ; 
}
return 1; 
}




int main(){
int sayi ; 

printf("sayı gir: "); 
scanf("%d",&sayi); 

fonksiyon(sayi); 




    return 0 ; 
}