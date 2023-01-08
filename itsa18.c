//C_MM28
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933

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
    ll a;
   
	while(scanf("%lld",&a)!=EOF){
    
    for(ll i=1; i<=a; i++){
        if(i%35==0){
            if(i==35)
                printf("%lld",i);
            else
                printf(" %lld",i);
        }
    }
    printf("\n");

    }
    
    

    return 0;
}