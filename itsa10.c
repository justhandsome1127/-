//C_MM011
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2923

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
    ll a;
   
	while(scanf("%lld",&a)!=EOF){
		
		
    
    
    printf("NT10=%lld\n",a/10);
    printf("NT5=%lld\n",(a%10)/5);
    printf("NT1=%lld\n",a%5);
        
        
    }
    
    

    return 0;
}