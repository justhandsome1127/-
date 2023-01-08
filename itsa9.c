//C_MM09
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2921

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
    ll a,b=1;
   
	while(scanf("%lld",&a)!=EOF){
		if(a>31)printf("Value of more than 31\n");
        else{
            b=b << a;
            printf("%lld\n", b);
        }
		
        
        
        
    }
    
    

    return 0;
}