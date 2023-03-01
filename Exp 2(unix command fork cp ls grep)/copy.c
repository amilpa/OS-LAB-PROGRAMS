#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include <dirent.h>

int main(int argc , char *argv[])
{
	FILE *fp1 , *fp2;
	char ch;
	int sc = 0;

	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"w");

	if(fp1==NULL)
	{
		printf("Unable to open the given file \n");
	}
	else
	{
		while((ch = fgetc(fp1))!=EOF)
		{
			if(ch == ' ')
			{
				sc++;
			}
			fputc(ch , fp2);
		}
		printf("no of spaces %d",sc);
		printf("\n");
		fclose(fp1);
		fclose(fp2);
	}

	DIR *d;
	struct dirent *dir;
	d = opendir(".");
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			printf("%s\n", dir->d_name);

		}
		closedir(d);

	}
	return(0);
}
