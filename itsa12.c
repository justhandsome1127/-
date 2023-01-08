//C_MM15
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6897

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1

int main(){
    double a,b;
   
	while(scanf("%lf %lf",&a,&b)!=EOF){
		
		
    if(a>=0 && a<=100 && b>=0 && b<=100)printf("inside\n");
       
    else{
        printf("outside\n");
    }
        
        
    }
    
    

    return 0;
}