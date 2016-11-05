#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "project8.h" 

void readfile(const char *name, FILE *fp) {
	int n;
	char ch;
	char *buff = NULL;
	while((ch = fgetc(fp)) != EOF) {
		printf("%c",ch);	
	}
}

void readcharacter(const char *name, FILE *fp) {
	int n;
	char ch;
	char *buff = NULL;
	while((ch = fgetc(fp))!= EOF) {
		fputc(ch, fp);
	}
}

void readfields(const char *name, FILE *fp) {
	int n;
	char ch;
	char *buff = NULL;
	fgets(buff, SIZE, fp);
    	printf("String read: %s", buff);
			
}

void readbyte(const char *name, FILE *fp) {
	int n;
	char ch;
	char *buff = NULL;
	fread(buff, sizeof(buff[5]), sizeof(buff), fp);
	fwrite(buff, sizeof(buff[5]), sizeof(buff), fp);
}

void readdelimeter(const char *name, FILE *fp) {
	int n;
	char ch;
	char *buff = NULL;
	while(ch = (fgetc(fp) == ';'||':'||','||' '||'.')) {
		printf("%c", ch);
	}
}




