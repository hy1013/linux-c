/*
 * =====================================================================================
 *
 *       Filename:  simple_read.c
 *
 *    Description:  复制标准输入的前128个字节
 *
 *        Version:  1.0
 *        Created:  2013年01月25日 10时22分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <unistd.h>

int main(){

	char buffer[128];
	int nread;
	nread=read(0,buffer,128);
	if(nread==-1)
		write(2,"error \n",8);
	if((write(1,buffer,nread))!=nread)
		write(2,"error2\n",8);
	exit(0);
}
