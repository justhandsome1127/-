//C_MM27
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/new_submit2.php?a=2939

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1

ll absnum(ll x){
    if(x<0)x*=-1;
    return x;
}

int main(){
    ll a,b;
   
	while(scanf("%lld %lld",&a,&b)!=EOF){
	
    
    
        printf("%lld\n",((a+b)*(absnum(a-b)+1))/2);
    
		
    
    
    


    }
    
    

    return 0;
}