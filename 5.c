#include<stdio.h>

int binary(int x){
    if(x==0){
        return 0;
    }
    else
    return (x%2)+(10*binary(x/2));
}

int main(){
    int a,b;
    printf("give the number for binary");
    scanf("%d",&a);
    b=binary(a);
    printf("the answer is %d",b);
    return 0;
}