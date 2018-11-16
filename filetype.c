#include "header.h"

/*
   find the type of file
	directory:
			return 1;
	regular_file: 
			return 0;
	others;
			return 2;
			*/
int File_type(const char *path)
{
	struct stat temp;
	int revalue;

	revalue=lstat(path,&temp);
	if(revalue==-1)
	{
		printf("stat error\n");
		exit(1);
	}

	if(S_ISDIR(temp.st_mode))
		return 1;
	else if(S_IXUSR & temp.st_mode)
		return 2;
	else if(S_ISREG(temp.st_mode))
		return 0;//acsii file
	else
		return 3;
}
