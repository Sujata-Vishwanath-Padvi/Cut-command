/*
========================================================================
======================================================================
* Name
: project1.c
* Author
: Sujata vishwanath padvi (S.Y.Btech in Computer Engineering from CoEP)
* Description : Console version of the "cut" command for GNU/Linux
* Copyright (C) sujata padvi
* ID : sujatap2103@gmail.com
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation; either version 2.1 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program; if not, write to the Free Software Foundation,
* Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
========================================================================
======================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define n_bytes 5000
 char *buffer;
void cut(int n_char, FILE *fp);
int main(int argc, char *argv[]) {	
	char *filename; 
	FILE *fp; 
	int count = 0, n = 10;   
	int  op = 0;
	char ch, *str;
	char arr[4] = {'c','f','b'};
	char *string[100];
	char line[100];
	char *ptr = (char *)malloc(sizeof(char));	
	str = (char *)malloc(sizeof(char));
	buffer = (char *)malloc(sizeof(char)*n_bytes);
	/*open file*/

	// If we have only 2 arguements 
	if(argc == 2) {
		filename = argv[1];
		fp = fopen(filename,"r");
		if(fp == NULL) {
			printf("File not found, check the error 1 %d\n",errno);
      			return -1;
		}
		cut(n,fp);
		return 0;
	}
	str = argv[1];
	ch = str[1];
	/*-c option*/
	/*if we have 4 arguments*/
	if(argc == 4) {
		if(strcmp(argv[1], "-c") == 0) {
		filename = argv[3];
		fp = fopen(filename,"r");
				if(fp == NULL) {
					printf("File not found, check the error 3 %d\n",errno);
      					return -1;
				}
			        op = atoi(argv[2]);
			        while((fp, "%c", string) != '\0') {
					if(count == op) {
						break;
					}
					else {
						printf("%c",fgetc(fp));
					}
					count++;
				}
				
				return 0;
		}
		
				
	}
	/*-f option for printing selected fields*/
	/*if we have 4 arguments*/
	if(argc == 4) {
		int i = 0;
		
		if(strcmp(argv[1], "-f") == 0) {
		filename = argv[3];
		fp = fopen(filename,"r");
				if(fp == NULL) {
					printf("File not found, check the error 3 %d\n",errno);
      					return -1;
				}
			        op = atoi(argv[2]);
				while(i < op){
					if(fgets(line, 100, fp)){
						printf("\n%s", line);
					}
					i++;
				}		
				return 0;
				
		}
		
				
	}
	/*if we have 4 arguments*/
	/*if(argc == 4) {
		char cht;
		int j=0;
		if(strcmp(argv[1], "-b") == 0) {
		filename = argv[3];
		fp = fopen(filename,"r+");
				if(fp == NULL) {
					printf("File not found, check the error 3 %d\n",errno);
      					return -1;
				}
			        op = atoi(argv[2]);
				while(fp != NULL) {
					fscanf(fp,"%c", &(cht));
					if(j == op) {
						printf("%c",cht);
					}
					j++;
				}
				
				return 0;
		}		
		
		
				
	}*/
		
 }


void cut(int n_char, FILE *fp) {
	buffer = (char *)malloc(sizeof(char)*n_bytes);
	int count = 0;
	while(fgets(buffer,sizeof(char)*n_bytes,fp)!=NULL && count<n_char) {
		count++;
		printf("%s",buffer);
	}
	free(buffer);
}
	
