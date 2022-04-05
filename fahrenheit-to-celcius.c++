
#include <stdio.h>

float celcius, fahrenheit;

int main() {
    
    printf("\n\nBem vindo à calculadora de temperaturas do B I L U!\n\n");

    printf("Primeiro, digite a temperatura em fahrenheit:\n");
    scanf("%f", &fahrenheit);
    
    celcius = ((fahrenheit - 32) * 5) / 9;
    
    printf("------------------------------------------------------\n\n");
    printf("    %.1f°F para celcius é %.1f°C", fahrenheit, celcius);
}
