#include <stdio.h>

int maxarray(int arr[],int count,int start,int final){
      if(start==final){
        return count;
      }
      if(count<arr[start]){
        count=arr[start];
      }
      return maxarray(arr,count,start+1,final);

}

int main() {
  int a[10]={1,2,3,4,5,6,6,8,9,10};
  int count=a[0];
  int b=maxarray(a,count,1,10);
  printf("the aanswer is %d",b);
  return 0;
}