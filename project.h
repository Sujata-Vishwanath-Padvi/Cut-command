#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include <unistd.h>
#include <errno.h>
#define SIZE 5000

int n;
char ch;
char buff[SIZE];
void readfile(const char *name, FILE *fp);
void readcharacter(const char *name, FILE *fp);
void readfields(const char *name, FILE *fp);
void readbyte(const char *name, FILE *fp);
void readdelimeter(const char *name, FILE *fp);

