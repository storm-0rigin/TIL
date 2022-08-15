#include <stdio.h>
int factorial(int n){
 if(n > 1) return n*factorial(n-1);
 else return 1; 
}
int main(){
 int a;
 scanf("%d",&a);
 printf("%d",factorial(a));
}