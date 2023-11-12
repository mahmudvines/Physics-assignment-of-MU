#include <stdio.h>
#include <math.h>

int main() {
  int m;
  float Theta, d, wavelength;

  printf("Enter the order of the interference (m): ");
  scanf("%d", &m);

  printf(" Enter the value of the angle (Theta in degrees): ");
  scanf("%f", &Theta);

  printf("Enter the value of the d (d in micrometers): ");
  scanf("%f", &d);

  Theta = Theta * 3.141 / 180;  // Convert the angle to radians.



  wavelength = m * d * sin(Theta);


  printf("The wavelength of the visible light is %f nanometers.\n", wavelength);


  if (wavelength < 450) {
    printf("The color of the light is violet.\n");
  } else if (wavelength < 485) {
    printf("The color of the light is blue.\n");
  } else if (wavelength < 500) {
    printf("The color of the light is cyan.\n");
  } else if (wavelength < 565) {
    printf("The color of the light is green.\n");
  } else if (wavelength < 590) {
    printf("The color of the light is yellow.\n");
  } else if (wavelength < 625) {
    printf("The color of the light is orange.\n");
  } else {
    printf("The color of the light is red.\n");
  }

  return 0;
}
