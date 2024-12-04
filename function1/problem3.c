#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 

int alan( int _ycap){
    float _alan =PI*_ycap*_ycap; 
    printf("dairenin alanı : %f\n",_alan); 
    return 1; 
}
int cevre(int _ycap){
float _cevre=2*_ycap*PI ; 
printf("dairenin çevresi : %f\n",_cevre); 
return 1; 
}

int main(){

int ycap ; 
    printf("yarıçap giriniz: "); 
    scanf("%d",&ycap); 

alan(ycap); 
cevre(ycap);

    return 0 ; 
}