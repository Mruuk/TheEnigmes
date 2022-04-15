#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

main(){
    int sec = 60, min = 59, hr = 71, i = 0;
     int c =0;

    system("title BombaRelogio f");
    system("color 0c");

    while(i<10){

        printf("\n\t%dh:%dm:%ds", hr,min,sec);
        Sleep(1000);
        system("cls");
        sec--;

        if(sec==0 && min!=0){
            sec = 60;
            min--;
        }

        if(min==0 && hr!=0){
            min=59;
            hr--;
        }

        if(hr==0 && min==0 && sec==0){
            exit(0);
        }


    if (_kbhit()) {
        c = _getch();

        if (c == 102) {
            printf("\n\ncaminho verdadeiro\n");
            Sleep(5000);
            break;


        }
    }

}


}

