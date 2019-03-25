#!/bin/bash
NAME=Muziek.cpp
PROJNAME=Muziek
BUILDFOLDER=build-uno
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

