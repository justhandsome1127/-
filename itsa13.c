//C_MM17
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2929

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1

ll gcd(ll x,ll y) {
    if(x%y==0)
        return y;
    else
        return gcd(y,x%y);
}

int main(){
    ll a,b,c;
   
	while(scanf("%lld %lld",&a,&b)!=EOF){
		
		
    printf("%lld\n",gcd(a,b));

    

        
        
    }
    
    

    return 0;
}