#include <stdio.h>
#define PI 3.14159f
int main(void)
{
    float r;
    scanf("%f", &r);
    float volume;
    volume = 4.0f / 3 * PI * r * r * r;
    printf("%f\n", volume);
    return 0;
}