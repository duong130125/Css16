#include<stdio.h>
int main(){
    FILE *file = NULL;
    int count;
    char content[1000];
    file = fopen("C:\\Users\\DUONG\\Desktop\\text.txt","w+");
    if(file !=  NULL){
        printf("Nhap so dong: ");
		scanf("%d",&count);
		for(int i=0; i<count; i++){
		    printf("Nhap noi dung tung dong %d: ",i+1);
            fflush(stdin);
            fgets(content, sizeof(content), stdin);
            fprintf(file, "Noi dung dong %d :%s", i+1, content);
        }
        fclose(file);
    }
    return 0;
}
