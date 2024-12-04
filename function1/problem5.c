#include <stdio.h>
#include <stdlib.h>


int fonksiyon(int _taban,int _us){

    int sonuc =1 ; 
    for(int i = 0 ; i<_us;i++){
        sonuc=_taban*sonuc ; 
    }

    printf("%d üzeri %d = %d",_taban,_us,sonuc); 
    return 1; 
}


int main(){

int taban ,us ; 

printf("taban girin: "); 
scanf("%d",&taban); 
printf("üs girin : "); 
scanf("%d",&us); 


fonksiyon(taban,us); 

    return 0 ; 
}