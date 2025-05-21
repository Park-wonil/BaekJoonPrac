#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        
        for(int k=n-1;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n*2;i++){
        printf("*");
    }
    printf("\n");
    for(int i=n-1;1<=i;i--){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }

        
    
    
    return 0;
}