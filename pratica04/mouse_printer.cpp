/*

Program: C++

Author: Gabriel Ramos

Date: 21/04/2025

Description: Calculo da area e contorno de um circulo e um retangulo e implementacao do laço for

License: CC BY-NC-SA

*/

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main() {
    POINT cursor;
    while (true) {
        char ch;
        if (GetCursorPos(&cursor)) {
             if (cursor.x <= 960 && cursor.y <= 540)
                cout << "\rQuadrante: A     " << flush;
            else if (cursor.x > 960 && cursor.y <= 540)
                cout << "\rQuadrante: B     " << flush;
            else if (cursor.x <= 960 && cursor.y > 540)
                cout << "\rQuadrante: C     " << flush;
            else
                cout << "\rQuadrante: D     " << flush;
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