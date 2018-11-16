#include "header.h"

int  whole=0;
int main(int argc,char** argv)
{
	if(argc<2)
	{
		printf("not enough argv\n");
		exit(4);
	}
	Find(argv[1],argv[2]);
	printf("====================Find %d files ====================================\n",whole);

}
