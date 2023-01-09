//基礎9
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751

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
    
   
	
        
    
	scanf("%lld",&in);
	ll ans=0;
	for(int i=3;i<=in;i++){
		if(i%3==0){
			ans+=i;
		}
	}
	printf("%lld\n",ans);
















    
    
    return 0;
}