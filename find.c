#include "header.h"

int Find(char* name,char *string)
{
	int i=File_type(name);
	if(i==1)
	{
		Find_dir(name,string);
	}
	else if(i==0)
	{
		Find_in_line(name,string);
	}
	return 0;
}
