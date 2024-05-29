#include "keyboard.h"
#include "time.h"
#include <stdint.h>

unsigned char notChar = 0;
static char retChar = 0;
static int shift = 0 ;
static int capsLock = 0;



static const char keyMap[256] = {
        0, 0, '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', '\b',//backspace,
        '\t', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\n', //enter
        0, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '`',
        0, '\\', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/',
        0, 0, 0, ' ', 0, 0 ,0,0,0,0,0,0,0, 0, 0, 0,
        0, 0 ,0,0,0,0,0,0,0,0,0,0,0
};



/*
 * 29: left cntrl
 * 42: left shift
 * 54: right shift
 * 55: no tengo numpad
 * 56: left alt
 * 58: caps lock
 * 59 - 68: F1-F10
 * 69: numLock
 * 70: scrollLock
 *
 * Up: 0x48
 * Left: 0x4B
 * Right: 0x4D
 * Down: 0x50
 */


void keyboard_handler(uint8_t keyPressed) {
    notChar = keyPressed;

    //shift pressed
    if (notChar == 0x2A || notChar == 0x36){
        shift = 1;
    }
    //shift not pressed
    if (notChar == 0xAA || notChar == 0xB6) {
        shift = 0;
    }
    //capsLock
    if (notChar == 0x3A) {
        capsLock = (capsLock+1)%2;
    }


}


char getCharFromKeyboard() {
    //soltar tecla
    if (notChar > 0x80 || notChar == 0x0F){
        retChar = 0;
    } else {
        retChar = keyMap[notChar];
    }

    //mayuscula
    if ( (retChar >= 'a' && retChar <= 'z') && (shift == 1 || capsLock == 1) ){
        return retChar - ('a'-'A');
    }

    return retChar;
}

void setCeroChar(){
    notChar = 0;
}

unsigned char getNotChar(){
    return notChar;
}