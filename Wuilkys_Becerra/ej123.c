#include <stdio.h>
#include <ctype.h>
#define MAXLON 80

int main(voi){
    char frase[MAXLON+1], cad[MAXLON+1];
    int i, j, k;

    printf("Dema una cadena (max %d caracteres): ", MAXLON); gets(frase);
    j = 0;
    for(i=0 ; frase[i] != '\0' ; i++){
        if(islower(frase[i])){
            for(k=0 ; k < j ; k++){
                    if(cad[k] == frase[i]) break;
            }
            if(k == j){
                cad[j] = frase[i];
                j++;
            }
        }
    }
    cad[j] = '\0';

    printf("%s", cad);

    return 0;
}
