#include<stdio.h>

int main(){
	FILE *taptin = NULL;
	const int sokytutoida = 1000;
    char chuoi[sokytutoida];
	taptin = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "r");
	if(taptin != NULL){
		fgets(chuoi, sokytutoida, taptin);
		printf("%s", chuoi);
		fclose(taptin);
	}
	return 0;
}
