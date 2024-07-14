#include<stdio.h>

int check(int a,int b){
        if(b==1){
            return 1;
        }
        if(a%b==0){
            return 0;
        }else{
            check(a,b-1);
        }
}

int main(){
    int result,a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=a/2;
    result=check(a,b);
    if(result==1){
        printf("the number %d is a prime",a);
    }else{
    printf("the number %d is not a prime",a);
    }
    return 0;
}