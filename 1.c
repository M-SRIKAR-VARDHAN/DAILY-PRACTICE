#include<stdio.h>

int sumofdigits(int x){
    int sum=0;
    if(x>0){
        sum=x%10;
        sum=sum+sumofdigits(x/10);
    }
    return sum;
}

int gcd(int a,int b)
 {   
    if(b==0){
    return a;
    }
    else
    gcd(b,a%b);
}

int decimalToBinary(int n){
    if (n == 0){
        return 0;
    }
    else
     return n%2 + 10*decimalToBinary(n/2);
}


int npower(int a, int b) {   
    if (b == 0) {
        return 1;
    } else {
        return a * npower(a, b - 1);
    }
}

int main(){

    int w=sumofdigits(187);
    printf("the answer is %d\n",w);
    int y= npower(8,9);
    printf("the answer is %d\n",y);
    int z= gcd(150,120);
    printf("the answer is %d",z);
     int z1=decimalToBinary(222) ;
    printf("the answer is %d",z1);
    return 0;
}