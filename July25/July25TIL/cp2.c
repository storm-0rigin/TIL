#include <stdio.h>
int main()
{    int N = 0, A = 0, B = 0, i = 0;
    
    scanf("%d", &N);
    if(N % 5 == 0)
    {
        printf("%d", N / 5);
        return 0;
    }
    if(N % 3 == 0) A = N / 3;
    
    for(i = N / 5; i > 0; i--)
    {
        if((N - 5 * i) % 3 == 0)
        {
            B = (N - 5 * i) / 3 + i;
            break;
        }
    }
    if(A == 0 && B == 0)
    {
        printf("-1");
        return 0;
    }
    
    if(B == 0) printf("%d", A);
    else printf("%d", B);
    return 0;  
}
