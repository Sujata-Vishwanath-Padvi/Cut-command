#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "project8.h"
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
int main(int argc, char *argv[]) {
	FILE *fp;
	/*select all characters of file*/
	/*cut file.txt*/
	if(argc == 2) {
			fp = fopen(argv[1],"r");
			if(fp == NULL) {
				printf("File not found");
      			}
			readfile(argv[1],fp);
	}
	
	/*option -c select range of charcters*/
	/*cut -c 5 file.txt*/
	if(argc == 4) {
		if(strcmp(argv[1], "-c") == 0) {
		fp=fopen(argv[3], "r");
			if(fp == NULL) {
				printf("File not found");
      			}
			readcharacter(argv[2], fp);
		}
	}

	/*option -f */
	/*cut -f n filename.txt*/
	if(argc == 4) {
		if(strcmp(argv[1], "-f") == 0) {
		fp=fopen(argv[3], "r"); 
			if(fp == NULL) {
				printf("File not found");
      			}
 			readfields(argv[2], fp);
		}
	}

	/*option -b */
	/*cut -b n filename.txt*/
	if(argc == 4) {
		if(strcmp(argv[1], "-b") == 0) {
		fp = fopen(argv[3], "r"); 
			if(fp == NULL) {
				printf("File not found");
      			}
		}
			readbyte(argv[2], fp);	
	}

	/*option -d for accessin delimeter*/
	/*cut -d '' file.txt*/
	if(argc == 4) {
		if(strcmp(argv[1], "-d") == 0) {
		fp=fopen(argv[3], "r"); 
			if(fp == NULL) {
				printf("File not found");
      			}
		}
		readdelimeter(argv[2], fp);
	}
fclose(fp);
return 0;
}
