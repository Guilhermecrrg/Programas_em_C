  #include <stdio.h>

   int main() {
     float celcius = 0.0;
     float F;
     printf("Entre com o valor da temperatura (Celcius): ");
     scanf ("%f", &celcius);
     F= celcius * 1.8 + 32;
     printf("Temperatura em Fahrenheit: %.1f \n", F);
      return 0;
   }
