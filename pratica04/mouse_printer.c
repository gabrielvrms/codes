/*

Program: C

Author: Gabriel Ramos

Date: [21/04/2025]

Description: Calculo da area e contorno de um circulo e um retangulo

License: CC BY-NC-SA

*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    char quadrant;
    POINT cursor;
    while (1) {
         if (GetCursorPos(&cursor)) {
            switch ((cursor.x > 960) + 2 * (cursor.y > 540)) {
                case 0: quadrant = 'A'; break;
                case 1: quadrant = 'B'; break;
                case 2: quadrant = 'C'; break;
                case 3: quadrant = 'D'; break;
            }
            printf("\rQuadrante: %c    ", quadrant);
            fflush(stdout);}
        char ch;
        if (GetCursorPos(&cursor)) {
            printf("Mouse Position: x=%d, y=%d\n", cursor.x, cursor.y);
        }
        Sleep(100); // adjust the delay as needed

        if (kbhit()) {
            ch = getch();
            if (ch == 27)
                break;
        }
    }
return 0;
}