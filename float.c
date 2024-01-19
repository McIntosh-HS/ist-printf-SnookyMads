#include <stdio.h>
int main() {
  float subtotal;
  float tax;
  printf("Enter your grocert total: ");
  scanf("%f", &subtotal);
  printf("what is the tax rate?" );
  scanf("%f", &tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
