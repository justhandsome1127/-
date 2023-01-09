//C_MM34
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2946

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
    int flag=1;
   
	while(scanf("%lld",&in)!=EOF){
        for(ll i=1; i<=in; i++){
            if(in%i==0){
                if(i==1)
                    printf("%lld",i);
                else
                    printf(" %lld",i);
            }
        }
    
        printf("\n");
    
    
        
    
    


        
    }
    

    

    
    
    

    
    

    return 0;
}