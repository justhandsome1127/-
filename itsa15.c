//C_MM25
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6925

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1



int main(){
    ll a;
   
	while(scanf("%lld",&a)!=EOF){
	
    ll b=0;
    for(ll i=1; i<=a; i++) {
        if(i%3==0)b+=i;
    }
		
    printf("%lld\n",b);



        
        
    }
    
    

    return 0;
}