#include "header.h"

int Find_dir(const char* dirname,const char* string)
{
	struct dirent *temp;
	int i;	
	char *name;

	DIR *dir=opendir(dirname);

	if(dir==NULL)
	{
		printf("open dir \"%s\" failed\n",dirname);
		closedir(dir);
		return -1;
	}
	while(temp=readdir(dir))
	{
		if(temp->d_name[0]=='.')
			continue;
		name=malloc(strlen(dirname)+strlen(temp->d_name)+2);
		sprintf(name,"%s/%s",dirname,temp->d_name);
		i=File_type(name);
		
		if(i== 1)
			Find_dir(name,string);
		else if(i==0)
			Find_in_line(name,string);
	}
	closedir(dir);
	return 0;
}

