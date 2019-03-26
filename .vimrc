"filetype off
autocmd BufNewFile,BufReadPost *.c,*.cpp,*.h,*.ino,*.pde set filetype=cpp
autocmd BufNewFile,BufReadPost *.c,*.cpp,*.h,*.ino,*.pde set syn=arduino

Plug 'w0rp/ale'
let g:ale_linters = {
	\ 'cpp': ['gcc']
	\}
"	\ 'cpp': ['clang-format']
"let g:ale_fixers = {
"	\ 'cpp' : ['clang-format']
"	\}
let g:ale_cpp_gcc_executable='avr-g++'
"let g:ale_cpp_gcc_options='c++ -D__PROG_TYPES_COMPAT__ -mmcu=atmega328p -DF_CPU=8000000L -DARDUINO=188 -DARDUINO_ARCH_AVR -I/home/bas/arduino/hardware/arduino/avr/cores/arduino -I/home/bas/arduino/hardware/arduino/avr/variants/standard -I/home/bas/sketchbook/libraries/FreeRTOS/src -std=gnu++11 '
let g:ale_cpp_gcc_options='-MMD -D__PROG_TYPES_COMPAT__ -mmcu=atmega328p -DF_CPU=8000000L -DARDUINO=188 -DARDUINO_ARCH_AVR -Wall -std=gnu11 -I/home/bas/arduino/hardware/arduino/avr/cores/arduino -I/home/bas/arduino/hardware/arduino/avr/variants/standard -Os'
"set path+=/home/bas/arduino/hardware/arduino/avr/cores/arduino
set path+=/usr/avr/include

set fdm=marker
