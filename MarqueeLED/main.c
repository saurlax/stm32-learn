#define USE_STDPERIPH_DRIVER

#include "RTE_Components.h"
#include CMSIS_device_header

int main() {
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
  GPIO_InitTypeDef GPIO_InitStructure;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);

  uint8_t state = 1;

  while (1) {
    GPIO_Write(GPIOA, ~state);
    state <<= 1;
    if (state == 0) state = 1;
    for (int i = 0; i < 3000 * 200; i++)
      ;
  }
}
