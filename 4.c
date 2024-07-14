#include<stdio.h>
#include <string.h>

void reverseofstring(char str[],char revstr[],int start,int final){
    if(start==final){
        return;
    }
    if(start<final){
         revstr[start]=str[final-start-1];
    }
    reverseofstring(str,revstr,start+1,final);
}

int main(){
    char str[100],revstr[100];
    int len;
    printf("enter the strng");
    scanf("%s",str);
    len=strlen(str);
    reverseofstring(str,revstr,0,len);
    revstr[len] = '\0';
    printf("the string is %s",revstr);

    return 0;
}
