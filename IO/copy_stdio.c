/*
 * =====================================================================================
 *
 *       Filename:  copy_stdio.c
 *
 *    Description:  第三个复制程序
 *
 *        Version:  1.0
 *        Created:  2013年01月25日 18时38分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>

int main(){

	int c;
	FILE *in,*out;

	in=fopen("man.txt","r");
	out=fopen("file.out3","w");

	while((c=fgetc(in))!=EOF)
		fputc(c,out);

	exit(0);
}

