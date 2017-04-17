#include "mbed.h"

DigitalOut led(PTE21);

int main(void)
{
	while (1) {
		led = !led.read();
		wait(1);
	}
}
