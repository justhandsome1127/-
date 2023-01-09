//C_MM04
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6864

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1



int main(){
    int num1, num2;
    while (scanf("%d%d", &num1, &num2)!=EOF) {
        printf("%d+%d=%d\n", num1, num2, num1 + num2);
        printf("%d*%d=%d\n", num1, num2, num1 * num2);
        printf("%d-%d=%d\n", num1, num2, num1 - num2);
        if (num1 % num2 >= 0) {
            printf("%d/%d=%d...%d\n", num1, num2, num1 / num2, num1 % num2);
        }
        else {
            printf("%d/%d=%d...%d\n", num1, num2, num1 / num2 - 1, num1 % num2 + num2);
        }
    }
   
	
        
    















    
    
    return 0;
}