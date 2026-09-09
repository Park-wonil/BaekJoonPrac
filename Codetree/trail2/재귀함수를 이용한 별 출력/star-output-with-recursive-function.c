#include <stdio.h>
int j=0;
void wonil(int n){
    if(n==0){
        return;
    }
    wonil(n-1);
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    wonil(n);
    return 0;
}