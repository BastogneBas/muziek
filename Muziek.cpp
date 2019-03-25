#define metrocore
//#define sound1core
//#define sound2core

#define TETRIS_THEME_A

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "metronome.h"
#include "melody.h"
#include <Arduino.h>

#ifdef metrocore
uint16_t bpmToOCR1();

int main()
{
	init();
	DDRB = (1 << DDB1);
	DDRD = (1 << DDD7);
	TCCR1A = (1 << COM1A0);
	TCCR1B = (1 << WGM12) | (1 << CS11) | (1 << CS10);
	OCR1A = bpmToOCR1();
//	OCR1A = 31250;
	TIMSK1 = (1 << OCIE1A);
	sei();
	for(;;)
	{
		_delay_ms(0);
		PORTD ^= (1 << PORTD7);
	}
}

uint16_t bpmToOCR1()
{
	float unitTimeInS = 60.0 / metronome[melody.mmIndex] / melody.unitsPerTick;
	float freq = F_CPU / 64;
	float totalTicks = unitTimeInS * freq;
	return totalTicks;
}
#endif
#ifndef metrocore
#include <Arduino.h>

uint8_t currentNote = 0;
uint8_t currentUnit = 0;
int main()
{
	DDRB = (1 << DDB1);
	PORTB = (1 << PORTB2);
	PCICR = (1 << PCIE0);
	PCMSK0 = (1 << PCINT2);
	sei();
	init();
	for(;;);
}

ISR(PCINT0_vect)
{
	if(PINB & (1 << PINB2))
		PORTB |= (1 << PORTB1);
	else
		PORTB &= ~(1 << PORTB1);

	if(currentUnit == 0)
	{
		noTone(8);
		_delay_ms(45);
#ifdef sound1core
		if(melody_part1.tones[currentNote].note == 0)
#endif
#ifdef sound2core
		if(melody_part2.tones[currentNote].note == 0)
#endif
			noTone(8);
		else
#ifdef sound1core
			tone(8, melody_part1.tones[currentNote].note);
#endif
#ifdef sound2core
			tone(8, melody_part2.tones[currentNote].note);
#endif
	}
	currentUnit++;
#ifdef sound1core
	if(currentUnit == melody_part1.tones[currentNote].units)
#endif
#ifdef sound2core
	if(currentUnit == melody_part2.tones[currentNote].units)
#endif
	{
		currentNote++;
		currentUnit = 0;
	}
#ifdef sound1core
	if(currentNote == melody_part1.length)
#endif
#ifdef sound2core
	if(currentNote == melody_part2.length)
#endif
		currentNote = 0;

}
#endif
