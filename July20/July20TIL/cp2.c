#include <stdio.h>
int main(){
  int H,W,N;
  int T;
  int a,b;
  scanf("%d",&T);
 
  for(int j = 0; j < T; j++){
  scanf("%d %d %d",&H,&W,&N);  
  if(N > H){                    
    if(N % H != 0){ 
      a = N % H;
      b = N / H + 1;
      printf("%d%02d\n",a,b);
    }   
    else{
      b = N / H; 
      printf("%d%02d\n",H,b);
    }
  }
    else{
      printf("%d01\n",N);
  }
  }
 return 0;
}