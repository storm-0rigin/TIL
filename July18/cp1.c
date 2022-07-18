#include <stdio.h>
int main(){
 int up,down,len;
 int day;
 
scanf("%d %d %d",&up,&down,&len);
day=(len-down-1)/(up-down)+1;
printf("%d",day);

return 0;
}