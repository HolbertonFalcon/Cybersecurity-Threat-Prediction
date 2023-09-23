#include <stdio.h>

int main() {
    
    FILE *file = fopen("main.h", "w");

    if (file == NULL) {
        perror("Error creating main.h file");
        return 1;
    }

    fprintf(file, "#ifndef _MAIN_H\n");
    fprintf(file, "#define _MAIN_H\n\n");

    fprintf(file, "void example_1(void);\n");
    fprintf(file, "void example_2(int arg);\n");
    fprintf(file, "void example_3(char *str);\n\n");

    fprintf(file, "#endif /* _MAIN_H */\n");

    fclose(file);

    printf("main.h file created with function prototypes.\n");

    return 0;
}
