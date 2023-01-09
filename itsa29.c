//基礎10
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1

int gcd(int num1,int num2){
	int maxNum = num1>=num2 ? num1 : num2;
	int minNum = num1<=num2 ? num1 : num2;
	if(maxNum%minNum==0){
		return minNum;
	}
	else{
		return gcd(minNum, maxNum%minNum);
	}
}

int main(){
    ll in,a,b,c,check;
    
   
	
        
    int num1,num2;
	scanf("%d%d",&num1,&num2);
	int ans=gcd(num1,num2);
	printf("%d\n",ans);
















    
    
    return 0;
}