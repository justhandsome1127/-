//C_MM32
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2944

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
        a=in/100;
        b=(in%100)/10;
        c=in%10;
    
        if(in==a*a*a+b*b*b+c*c*c){
            printf("Yes\n");
        }
        else printf("No\n");
    
    
    
    
    


        
    }
    

    

    
    
    

    
    

    return 0;
}