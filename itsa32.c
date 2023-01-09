//C_MM13
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2925

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1



int main(){
    int h1,h2,m1,m2,t,sum=0;
    
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    t = 60*(h2-h1)+(m2-m1);
    if(t<=120 && t>=30)
        sum=(t/30)*30;
    else if(t>120 && t<=240)
        sum=((t-120)/30)*40+120;
    else if(t>240)
        sum=((t-240)/30)*60+280;
    printf("%d\n",sum);

   
	
        
    















    
    
    return 0;
}