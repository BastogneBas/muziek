#!/bin/bash
NAME=Muziek.cpp
PROJNAME=Muziek
BUILDFOLDER=build-uno
mkdir -p build-uno
avr-gcc -MMD -c -D__PROG_TYPES_COMPAT__ -save-temps=obj -mmcu=atmega328p -DF_CPU=8000000L -DARDUINO=188 -DARDUINO_ARCH_AVR -Wall -std=gnu11 -fdiagnostics-color=always $NAME -o $BUILDFOLDER/$NAME.o
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
avr-gcc -mmcu=atmega328p -Wl,--gc-sections -Os -fuse-linker-plugin -o $BUILDFOLDER/$PROJNAME.elf $BUILDFOLDER/$NAME.o -lc -lm 
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
avr-objcopy -j .eeprom --set-section-flags=.eeprom='alloc,load' --no-change-warnings --change-section-lma .eeprom=0 -O ihex $BUILDFOLDER/$PROJNAME.elf $BUILDFOLDER/$PROJNAME.eep
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
avr-objcopy -O binary $BUILDFOLDER/$PROJNAME.elf $BUILDFOLDER/$PROJNAME.bin
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
avr-objcopy -O ihex -R .eeprom $BUILDFOLDER/$PROJNAME.elf $BUILDFOLDER/$PROJNAME.hex
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
avr-size --mcu=atmega328p -C --format=avr $BUILDFOLDER/$PROJNAME.elf

ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
#avrdude -v -p atmega328p -c usbasp -D -P usb -U flash:w:$BUILDFOLDER/$PROJNAME.hex:i
avrdude -p atmega328p -c usbasp -P usb -U flash:w:$BUILDFOLDER/$PROJNAME.hex:i
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi

