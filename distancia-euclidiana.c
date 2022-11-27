//Calcula a distância eucludiana entre dois pontos.

#include <stdio.h>

int main() {
    int d, xa, xb, ya, yb, r;
    scanf("%d %d %d %d", &xb, &xa, &yb, &ya);
    
    d = (xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
    r = sqrt(d);
    
    printf("%d", r);

    return 0;
}
