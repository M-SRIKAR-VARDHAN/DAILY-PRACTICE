#include<stdio.h>

int fibinocci(int x){
    if(x==0||x==1){
        return x;
    }
    else
  return  fibinocci(x-1)+fibinocci(x-2);
}

int main(){

    int x=fibinocci(43);
    printf("the answer is %d",x);
    return 0;
}