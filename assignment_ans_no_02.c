#include <stdio.h>
#include <math.h>



int main() {
  float green_wavelength, red_wavelength, grating_spacing, third_order_angle, second_order_angle;

  green_wavelength = 530.0; // nm
  red_wavelength = 700.0; // nm
  grating_spacing = 829.9; // nm
  third_order_angle = 65.0; // degrees

  second_order_angle = asin((red_wavelength * sin(third_order_angle * 3.141 / 180.0)) / grating_spacing);

  // Convert the angle to degrees.
  second_order_angle = second_order_angle * 180.0 /3.141;


  printf("The second order angle for the red light is %f degrees.\n", second_order_angle);

  return 0;
}
