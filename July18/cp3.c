#include <stdio.h>
#include <string.h>
int main(){
 int cnt=0;
 char s[1000000]={0,};
 gets(s);
 for(int i = 0 ; i < strlen(s); i++){
    if(s[i] == 32){
        cnt++;
    }
 }
 if(s[0] == 32){
    cnt--;
 }
 if(s[strlen(s)-1] == 32){
    cnt--;
 }

 printf("%d",cnt+1);
}