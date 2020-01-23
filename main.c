#include <atmel_start.h>
#include <util/delay.h>
#include <avr/sleep.h>

// Disable digital input buffer on all IO pins
void io_init(void)
{
	for (uint8_t pin = 0; pin < 8; pin++) {
		(&PORTA.PIN0CTRL)[pin] = PORT_ISC_INPUT_DISABLE_gc; // Disable on PAx pin
		(&PORTB.PIN0CTRL)[pin] = PORT_ISC_INPUT_DISABLE_gc; // Disable on PBx pin
		(&PORTC.PIN0CTRL)[pin] = PORT_ISC_INPUT_DISABLE_gc; // Disable on PCx pin
	}
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	// Disable digital input buffer on all IO pins
	io_init();

	// Set sleep mode to STANDBY mode
	set_sleep_mode(SLEEP_MODE_STANDBY);
	sleep_enable();

	// Application goes to sleep while waking up by EVSYS (RTC overflow event source)
	while (1) {
		// Enter into sleep mode
		sleep_cpu();
	}
}
