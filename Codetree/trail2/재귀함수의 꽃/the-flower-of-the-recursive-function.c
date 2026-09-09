#include <stdio.h>
void wonil(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    wonil(n-1);
    printf("%d ", n);
}
int main() {
    int n;
    scanf("%d", &n);
    wonil(n);
    return 0;
}