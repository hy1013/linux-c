/*
 * =====================================================================================
 *
 *       Filename:  simple_write.c
 *
 *    Description:  write系统调用
 *
 *        Version:  1.0
 *        Created:  2013年01月25日 10时12分22秒
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

	if((write(1,"here is some data\n",18))!=18)
		write(2,"A error has ocurred\n",30);

	exit(0);
}

