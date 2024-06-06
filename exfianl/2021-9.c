//2021-9, 2022-9

#include <stdio.h>
#include <string.h>

void sort(int argc,char *argv[]){
    char *temp;
    for(int j = 0; j < argc-1; j++) {
        for (int i = j + 1; i < argc; i++) {
            if (strcmp(argv[j], argv[i]) > 0) {
                temp = argv[j];
                argv[j] = argv[i];
                argv[i] = temp;
            }
        }
    }
}

void rsort(int argc, char *argv[]){
    char *temp;
    for(int j = 0; j < argc-1; j++) {
        for (int i = j + 1; i < argc; i++) {
            if (strcmp(argv[j], argv[i]) < 0) {
                temp = argv[j];
                argv[j] = argv[i];
                argv[i] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]){
    if(strcmp(argv[1], "-r") == 0){
        rsort(argc-2, argv+2);
        for(int i = 2; i < argc; i++){
            printf("%s ", argv[i]);
        }
    }else {
        sort(argc - 1, argv + 1);
        for(int i = 1; i < argc; i++){
            printf("%s ", argv[i]);
        }
    }
    printf("\n");
    return 0;
}