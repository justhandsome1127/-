//C_MM36
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6949

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
        
        
    switch (in){
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;
    }
    
        
        
        
        
    
    


        
    }
    

    

    
    
    

    
    

    return 0;
}