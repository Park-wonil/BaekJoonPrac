#include <stdio.h>
int wonil(int n){
    if(n<10){
        return n*n;
    }
    return wonil(n/10) + (n%10)*(n%10);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d",wonil(n));
    return 0;
}