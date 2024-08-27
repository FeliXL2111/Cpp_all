#include <stdio.h>
#include <stdlib.h>

int main() {
    char* name = (char*) malloc(12);
    char* cmd = (char*) malloc(60);

    printf("Adresse von *Name*: <%d>\n", name);
    printf("Adresse von *cmd*:  <%d>\n", cmd);
    printf("gib deinen Namen ein:\n");

    gets(name);
    
    printf("Hallo %s! Freut mich, dich kennenzulernen\n", name);
    system(cmd);

    return 0;
}