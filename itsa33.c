//C_MM14
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1



int main(){
    int s,days,hours,minutes,seconds;
    
    scanf("%d",&s);
    days = s/86400;
    hours = (s%86400)/3600;
    minutes = (s%3600)/60;
    seconds = s%60;
    
    printf("%d days\n",days);
    printf("%d hours\n",hours);
    printf("%d minutes\n",minutes);
    printf("%d seconds\n",seconds);
   
	
        
    















    
    
    return 0;
}