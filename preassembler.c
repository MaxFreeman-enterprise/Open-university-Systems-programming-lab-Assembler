#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80


struct Macro{
    char *name;
    int start_macro;
    int end_macro;
};



void file_handler(){
        FILE *asmFile;
        char line[MAX_LINE_LENGTH];
        asmFile = fopen("assembler_test.txt","r");
        

        if(asmFile != NULL) {
            while (!feof(asmFile)) {
                fgets(line, MAX_LINE_LENGTH, asmFile);
                printf("the file data is = %s\n", line);
            }
            fclose(asmFile);
        }
        else{
            printf("\nUnable to open the assembler_test.asm file");
        }

       /* ptr = fopen("assembler_test.asm", "r");

        if (ptr == NULL){
            printf("file cant be opened \n");
        }

        printf("content of this file are \n");

        while(fgets(line,MAX_LINE_LENGTH,ptr) != NULL)
        {
            printf("%s",line);
        }

    fclose(ptr);*/


}



