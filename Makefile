ARDMK_DIR = /home/bas/Arduino-Makefile
ARDUINO_DIR = /home/bas/arduino
BOARDS_TXT = /home/bas/sketchbook/hardware/breadboard/avr/boards.txt
ARDMK_VENDOR = arduino
BOARD_TAG = atmega328bb
#BOARD_SUB = atmega328p
ISP_PROG = usbasp
ISP_PORT = usb
AVR_TOOLS_DIR = /usr

#ARDUINO_LIBS = FreeRTOS

include $(ARDMK_DIR)/Arduino.mk
