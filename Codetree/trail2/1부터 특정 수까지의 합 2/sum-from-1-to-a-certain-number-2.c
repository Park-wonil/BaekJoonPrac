#include <stdio.h>
int cnt=0;
int wonil(int n){

    if (n==1){
        return 1;
    }
    return wonil(n-1)+n;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", wonil(n));
    return 0;
}