/*
 * =====================================================================================
 *
 *       Filename:  copy_block.c
 *
 *    Description:  复制块
 *
 *        Version:  1.0
 *        Created:  2013年01月25日 12时45分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){

	char block[1024];
	int in,out;
	int nread;
	in=open("man.txt",O_RDONLY);
	out=open("file.out2",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	while((nread=read(in,block,sizeof(block)))>0)
		write(out,block,nread);
	exit(0);
}


