//基礎12
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1

int fun(int n){
	if(n<=1){
		return n+1;
	}
	else{
		return fun(n-1) + fun(n/2);
	}
}

int main(){
    ll in,a,b,c,check;
        int n;
	scanf("%d",&n);
	printf("%d\n",fun(n));
   
	
        
    















    
    
    return 0;
}