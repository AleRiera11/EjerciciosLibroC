#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    x = 1.0;

    while (x < 10.0){
        printf("%f \t %f\n", x, log(x));
        x++;
    }

    return 0;
}
