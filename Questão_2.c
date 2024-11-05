#include <stdio.h>

int main()
{
    int N[20], aux;
    int i;
    
    for (i = 0; i < 20; i++) {
        scanf("%i", &N[i]);
    }
    
        for(i = 0; i < 20 / 2; i++) { 
        aux = N[i];
        N[i] = N[20 - i - 1];
        N[20 - i - 1] = aux;
        }
    
        for(i = 0; i < 20; i++) {
         printf("N[%i] = %i\n", i, N[i]);
    
    }
    
    return 0;
}
