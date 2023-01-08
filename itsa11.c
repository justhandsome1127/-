//C_MM16
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900

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
		
		double c=(a*a)+(b*b); 
		if(c<10000){
		    printf("inside\n");
		}
		else{
			printf("outside\n");
		}
        
    }
    
    

    return 0;
}