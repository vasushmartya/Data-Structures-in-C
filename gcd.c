#include <stdio.h>

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    if (a<b){
        return gcd(b, a);
    }
    return gcd(b, a%b);
}

int main(){
    int x = gcd(4,8);
    printf("%d", x);
    return 0;
}