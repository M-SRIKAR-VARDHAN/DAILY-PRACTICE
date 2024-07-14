#include<stdio.h> 
 int gcd(int a,int b)
 {   
    if(b==0){
    return a;
    }
    else
    gcd(b,a%b);
}

 int lcm(int x,int y){
   int c=(x*y)/gcd(x,y);
    return c;
 }
 
 int main(){
 
    int z= lcm(150,120);
  printf("the answer is %d\n",z);
    return 0;
 }