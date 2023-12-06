#include<stdio.h>

int main() {
    FILE *file = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "r");
    if(file != NULL){
        char character;
		while ((character = fgetc(file)) != EOF){
        putchar(character);
        }
        fclose(file);
    }
    return 0;
} 
