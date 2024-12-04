#include <stdio.h>
#include<stdlib.h>


int fonksiyon (int _sayi){
    if(_sayi<0){
    _sayi=-1*_sayi ; 
    printf("sayınızın mutlak değeri: %d",_sayi); 
    }
    else if(_sayi>=0){
        printf("sayınızın mutlak değeri: %d",_sayi); 

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