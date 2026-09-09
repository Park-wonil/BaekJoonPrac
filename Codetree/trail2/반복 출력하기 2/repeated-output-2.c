#include <stdio.h>
void wonil(int n){
    if(n==0){
        return;
    }
    wonil(n-1);
    printf("HelloWorld\n");
}
int main() {
    int n;
    scanf("%d", &n);
    
    wonil(n);
    
    return 0;
}