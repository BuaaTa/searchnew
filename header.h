#ifndef __HEADER__
#define __HEADER__

#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

int Find(char* name,char *string);
int Find_dir(const char* dirname,const char* string);

int File_type(const char*);

int Find_in_line(const char* path,const char* string);

int Compare(const char* source,const char* dsi);
#endif
