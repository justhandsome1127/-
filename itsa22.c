//C_MM35
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2947

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
        
        
    
        
        
        if(in%4==0){
            if(in%400==0)
                printf("Bissextile Year\n");
            else
                printf("Common Year\n"); 
        }
        else
            printf("Common Year\n");
        
    
    


        
    }
    

    

    
    
    

    
    

    return 0;
}