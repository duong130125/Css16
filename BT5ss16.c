#include <stdio.h>

int main() {
    FILE *bt1, *bt3, *bt5;
    char count;
    bt1 = fopen("C:\\Users\\DUONG\\Desktop\\text1.txt", "r");
    bt3 = fopen("C:\\Users\\DUONG\\Desktop\\text2.txt", "r");
    if (bt1 == NULL || bt3 == NULL) {
        printf("Khong mo duoc.\n");
        return 1;
    }
    bt5 = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "w");
    if (bt5 == NULL) {
        printf("Khong mo duoc.\n");
        return 1;
    }
    while ((count = fgetc(bt1)) != EOF) {
        fputc(count, bt5);
    }
    fprintf(bt5,"\n");
    while ((count = fgetc(bt3)) != EOF) {
        fputc(count, bt5);
    }
    
    fclose(bt1);
    fclose(bt3);
    fclose(bt5);
    bt5 = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "r");
    if (bt5 == NULL) {
        printf("Khong mo duoc.\n");
        return 1;
    }
    while((count = fgetc(bt5)) != EOF){
    	printf("%c",count);
	}
    return 0;
}

