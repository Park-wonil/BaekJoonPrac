#include <stdio.h>
int wonil(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    return wonil(n-1) * n;
}
int main(void) {
    int n;
    scanf("%d", &n);
    
    printf("%d",wonil(n));
    
    return 0;
}