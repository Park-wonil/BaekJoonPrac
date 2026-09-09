#include <stdio.h>
void wonil1(int n){
    if(n==0){
        return;
    }
    wonil1(n-1);
    printf("%d ",n);
    }
void wonil2(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    wonil2(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    wonil1(n);
    printf("\n");
    wonil2(n);
    return 0;
}