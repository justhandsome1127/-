//基礎6
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1



int main(){
    ll in,a,b,c,check;
    
   
	
        
    int month;
	scanf("%d",&month);
	if(3<=month && month<=5){
		printf("Spring\n");
	}
	if(6<=month && month<=8){
		printf("Summer\n");
	}
	if(9<=month && month<=11){
		printf("Autumn\n");
	}
	if(month==12 || month==1 || month==2){
		printf("Winter\n");
	}
















    
    
    return 0;
}