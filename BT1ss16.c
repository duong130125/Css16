#include<stdio.h>
int main(){
	FILE *file = NULL;
	char Chain[100];
	file = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "w");
	if(file != NULL){
		printf("Nhap vao mot chuoi bat ki: ");
		fgets(Chain, sizeof(Chain), stdin); 
		fprintf(file, "%s", Chain);
		fclose(file); 
	} 
	return 0; 
}
