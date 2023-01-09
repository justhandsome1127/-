//C_MM38
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6953

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
    
   
	while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
        
        
    if(a+b>c && a+c>b && c+b>a)
        printf("fit\n");
    else
        printf("unfit\n");


        
    }
    

    

    
    
    

    
    

    return 0;
}