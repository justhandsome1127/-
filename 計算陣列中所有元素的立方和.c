#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

/*
計算陣列中所有元素的立方和
https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291
*/

typedef long long ll;
#define F0R(i, a) for (int i=0; i<(a); i++)
#define DEBUG 1

void sol(){
    ll ans=0;
    ll temp;
    F0R(i,6){
        scanf("%lld",&temp);
        ans+=temp*temp*temp;
    }
    printf("%lld\n",ans);

}

int main(){
    sol();
    return 0;
}
