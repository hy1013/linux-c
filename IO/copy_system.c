/*
 * =====================================================================================
 *
 *       Filename:  copy_system.c
 *
 *    Description:  复制文件
 *
 *        Version:  1.0
 *        Created:  2013年01月25日 12时03分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(){

	char c;
	int in,out;

	in=open("man.txt",O_RDONLY);
	out=open("file.out",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	while(read(in,&c,1)==1)
		write(out,&c,1);
	exit(0);
}
