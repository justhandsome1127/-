//C_MM31
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2943

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
    int flag=1;
   
	while(scanf("%lld",&a)!=EOF){
    
    ll sum=0;
    
    for(ll i=1; i<=a; i++)
    {
        if(i%6==0 && i%12!=0)
            sum+=i;
    }
    printf("%lld\n",sum);
    
        
        
    }
    

    

    
    
    

    
    

    return 0;
}