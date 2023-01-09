//C_MM40
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6957

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
    
   
	while(scanf("%lld",&a)!=EOF){
        
    check=0;   
    for(ll i=1; i<=a; i++){
        if(i==1)
            printf("%lld ",i);
        else
            printf("+ %lld ",i);
        check+=i;
    }
    printf("= %lld\n",check); 
    

















    }
    
    return 0;
}