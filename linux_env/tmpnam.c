/*
 * =====================================================================================
 *
 *       Filename:  tmpnam.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 15时02分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int main(){
	char tmpname[L_tmpnam];
	char *filename;
	FILE *tmpfp;

	filename=tmpnam(tmpname);

	printf("Temporary file name is:%s\n",filename);

	tmpfp=tmpfile();
	if(tmpfp)
		printf("opened a tempornary file OK\n");
	else
		perror("tmpfile");
	exit(0);
}

