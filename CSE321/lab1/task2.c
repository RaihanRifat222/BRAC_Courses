#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp,*fp1;
    char buff[100];
    fp=fopen("input.txt","r");
    fp1=fopen("output.txt","w+");
    fgets(buff,255,fp);
    char *token = strtok(buff," ");
    while (token != NULL){
        fprintf(fp1,"%s",token);
        token = strtok(NULL, " ");
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}