#include <stdio.h>
#include <stdlib.h>


int fonksiyon (float _kdv,int _vsizfiyat){


    float yeniFiyat ;
   yeniFiyat = ( _kdv*_vsizfiyat) + _vsizfiyat; 
printf("vergili fiyat : %f", yeniFiyat); 
return 1; 
}

int main(){


int vsizfiyat ;
float kdv;

printf("kdv oranı girin : "); 
scanf("%f",&kdv); 
printf("vergisiz fiyat girin: "); 
scanf("%d",&vsizfiyat); 


fonksiyon(kdv,vsizfiyat); 


    return 0 ; 
}