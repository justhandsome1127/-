//C_MM010
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define F1R(i, a) for (int i=1; i<(a); i++)
#define DEBUG 1

int main(){
    double a;
   
	while(scanf("%lf",&a)!=EOF){
		
		a=a*9/5+32;
        printf("%.1lf\n",a);
        
        
    }
    
    

    return 0;
}