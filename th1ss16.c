#include<stdio.h>
int main(){
	//THEM MOT KY TU VAO TEP TIN:
//	FILE *taptin = NULL;
//	taptin = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "w");
//	if(taptin != NULL){
//		fputc('A', taptin);
//		fclose(taptin);
//  }

 
    //THEM MOT CHUOI VAO TEP TIN:
//    FILE *taptin = NULL;
//    taptin =  fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "w");
//    if(taptin != NULL){
//    	fputs("Xin chao hung anh dep trai\nBan co khoe khong ?", taptin);
//    	fclose(taptin);
//	}


    //HOI VA GHI VAO TEP TIN:
    FILE *taptin = NULL;
    int age = 0;
    taptin = fopen("C:\\Users\\DUONG\\Desktop\\text.txt", "w");
    if(taptin != NULL){
    	//hoi ve van j do
    	printf("Ban hung anh bao nhieu tuoi ?: ");
    	scanf("%d", &age);
    	//ghi vao tep
    	fprintf(taptin, "Nguoi dang su dung may tinh nay %d tuoi", age);
    	fclose(taptin);
	}
	return 0;
}
