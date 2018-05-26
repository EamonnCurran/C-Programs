#include <stdio.h>
#include <stdlib.h>

int main(){
  int hex, dec, choice;

  printf("Hex-Dec/Dec-Hex converter.\n    Option 1 is Hex to Dec.\n    Option 2 is Dec to Hex.\n    Please enter 1 or 2: ");
  scanf("%d",&choice);

  if(choice==1){
    printf("Enter a hexadecimal number: ");
    scanf("%X",&hex);
    printf("The decimal value is: %d\n",hex);
  }
  else{
    printf("Enter a decimal number: ");
    scanf("%d",&dec);
    printf("The hex value is: %X\n",dec);
  }
  return 0;
}
