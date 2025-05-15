#include <stdio.h>
int main(){
    int N, count;
    scanf("%d", &N);
    count = N/4 ;
    if(N%4==0){
        for(int i = 1;i<=count;i++){
        printf("long ");
        }printf("int\n");
    }else{
        return 1;
    }
return 0;
}