#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <direct.h>

char cmd[] = "";
bool working = true;

int main() {
    printf("Welcome to Hcore Beta 0.096v! \nMade by: D4RK.exez --Onefile (D4RK-778) \nComplete code avaliable on https://github.com/D4RK-778 \nWrite 'help' to the commands list. \n");
    while (working) {
        printf("\nHcore >>> ");
        scanf("%99s", cmd);
        if (strcmp(cmd, "taskill") == 0) {
            printf("Closing... ");
            working = false;
        } else if (strcmp(cmd, "help") == 0) {
            printf("\n \nAvaliable commands: \ntaskill -> close the program \ncreatedir -> create a new directory (you can't create +2 dir for now :/) \n");
        } else if (strcmp(cmd, "createdir") == 0) {
            if (_mkdir("dir") == 0) {
                printf("\n \nCreated new directory successfully! \n ");
            } else {
                printf("\n \nERR0R 055 > > Failed on create file. \n");
            }
        } else if (strcmp(cmd, "idiot") == 0) {
            for (int i = 0; i < 10001; i+1) {
                printf("\n>>> you are an idiot");
            }
            return 0;
        }
    };
    
    return 0;
}