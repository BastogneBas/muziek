#!/bin/bash
NAME=Muziek.cpp
PROJNAME=Muziek
BUILDFOLDER=build-uno
LIBS="-I/home/bas/arduino/hardware/arduino/avr/cores/arduino -I/home/bas/arduino/hardware/arduino/avr/variants/standard"
mkdir -p build-uno


function ccF {
avr-gcc -MMD -c -D__PROG_TYPES_COMPAT__ -save-temps=obj -mmcu=atmega328p -DF_CPU=8000000L -DARDUINO=188 -DARDUINO_ARCH_AVR -Os -Wall -std=gnu11 -fdiagnostics-color=always $LIBS $1 -o $BUILDFOLDER/$2.o
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
}

function ccppF {
avr-gcc -MMD -c -D__PROG_TYPES_COMPAT__ -save-temps=obj -mmcu=atmega328p -DF_CPU=8000000L -DARDUINO=188 -DARDUINO_ARCH_AVR -Os -Wall -std=gnu++11 -fdiagnostics-color=always $LIBS $1 -o $BUILDFOLDER/$2.o
ret=$?
if [ $ret -ne 0 ]
then
	exit $ret;
fi
}

ccppF $NAME $NAME
mkdir $BUILDFOLDER/core
ccF /home/bas/arduino/hardware/arduino/avr/cores/arduino/wiring.c core/wiring.c
ccF /home/bas/arduino/hardware/arduino/avr/cores/arduino/wiring_digital.c core/wiring_digital.c
ccF /home/bas/arduino/hardware/arduino/avr/cores/arduino/WInterrupts.c core/WInterrupts.c
ccF /home/bas/arduino/hardware/arduino/avr/cores/arduino/hooks.c core/hooks.c
ccF /home/bas/arduino/hardware/arduino/avr/cores/arduino/wiring_pulse.c core/wiring_pulse.c

ccppF /home/bas/arduino/hardware/arduino/avr/cores/arduino/Tone.cpp core/Tone.cpp

avr-gcc -mmcu=atmega328p -Wl,--gc-sections -Os -fuse-linker-plugin -o $BUILDFOLDER/$PROJNAME.elf\
   	$BUILDFOLDER/$NAME.o \
	$BUILDFOLDER/core/wiring.c.o \
	$BUILDFOLDER/core/hooks.c.o \
	$BUILDFOLDER/core/wiring_digital.c.o \
	$BUILDFOLDER/core/Tone.cpp.o \
	-lc -lm 

#	$BUILDFOLDER/core/WInterrupts.c.o \
#	$BUILDFOLDER/core/wiring_pulse.c.o \
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

