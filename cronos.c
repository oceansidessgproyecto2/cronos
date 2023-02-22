#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc,char **argv) {
    long innie;
    char *cmd_template = "python myMarea.py";
    char cmd [256];
    if(argc != 3) {
        printf("se require de dos argumentos extra para poder hacer la prediccion\n");
        exit(-1);
    }
    printf("preparando el comando\n");
    strcpy(cmd,cmd_template);
    strcat(cmd," ");
    strcat(cmd,argv[1]);
    strcat(cmd," ");
    strcat(cmd,argv[2]);
    printf("ejecutando comando\n");
    innie = time(NULL);
    system(cmd);
    printf("tiempo de duracion de la ejecucion %d segundos",time(NULL)-innie);
}