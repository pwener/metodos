#include <stdlib.h>
#include <stdio.h>

int main(){
    float ep, a, x = 1;
    while(x>0){
        a = x;
        x = x/2 + 1;
        ep = x - a;
        printf("x = %f | erro = %f \n", x, ep);

        x--;
    }
    printf("x = %f | erro = %f \n", x, ep);
    return 0;
}
