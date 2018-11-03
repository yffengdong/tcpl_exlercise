#include <stdio.h>

//print Celsius-Fahrenheit table
int main()
{
    //float celsius = -17.8f;
    printf("celsius\t fahr\n");
    for(float celsius = -17.8f; celsius < 300; celsius += 11.1f)
        printf("%5.1f\t%6.1f\n", celsius, (celsius / (5.0/9.0) + 32.0));;
    return 0;
}
