#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int count = 0;
    char content[1000];
    file = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "r");
    if (file == NULL) {
        printf("Không the mo tap tin\n");
        return 1;
    }
    while (fscanf(file, "%c", &content[count]) != EOF) {
        printf("%c", content[count]);
        if (content[count] == '\n') {
            count++;
        }
    }
    printf("So dong trong file là %d\n", count);
    fclose(file);

    return 0;
}
