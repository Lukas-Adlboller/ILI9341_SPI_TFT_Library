#include "mbed.h"
#include "ILI9341.h"

int main()
{
  printf("\n\n[Info] Prog started!\n");
  SPI spiPort(A6, A5, A4);
  ILI9341 tftDisplay(&spiPort, A3, A0, A2);
  tftDisplay.initialize();
  tftDisplay.setRotation(0);
  
  tftDisplay.fillBackground(WHITE);
  
  tftDisplay.drawLine(0, 0, 240, 320, BLACK);
  printf("[Info] Prog finished!\n");
}