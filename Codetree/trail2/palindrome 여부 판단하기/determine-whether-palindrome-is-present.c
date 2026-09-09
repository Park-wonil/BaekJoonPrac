#include <stdio.h>
#include <string.h>
char A[101];
void HI(char *s){
    char B[101];
    for(int i=0;i<strlen(A);i++){
        B[i]=A[strlen(A)-1-i];
    }
    B[strlen(A)]='\0';
    if(strcmp(A,B)==0){
        printf("Yes");
    }else{
        printf("No");
    }
}
int main() {
    scanf("%s", A);
    HI(A);
    return 0;
}