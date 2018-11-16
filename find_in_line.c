#include "header.h"
char buffer[256];
/*
	find the string in line;
	if find
	then print this line and continue to next line
	when all complete 
	then
	print lines which count the name
	*/
extern int whole;

int Find_in_line(const char* path,const char* string)
{
	FILE *file=fopen(path,"r");
	int j,i;
	int line=0;
	int find=0;

	if(file==NULL)
	{
		printf("open file %s failed\n",path);
		fclose(file);
		return 1;
	}

	while(fgets(buffer,256,file))
	{
		line++;
		j=strlen(buffer);
		if(j<strlen(string))
			continue;
		
		for(i=0;i<=j-strlen(string);i++)
		{
			if(strncmp(string,buffer+i,strlen(string))==0)
			{
				find++;
				printf("\t%d\t %s",line,buffer);
				break;
			}
		}
	}
	fclose(file);
	if(find)
	{
		whole++;
		printf("====================Find %d in file \"%s\"========================\n",find,path);
	}
	return 0;

}
