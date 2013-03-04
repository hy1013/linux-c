/*
 * =====================================================================================
 *
 *       Filename:  showenv.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 11时07分47秒
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

extern char **environ;
int main(){
	char **env=environ;
	while(*env){
		printf("%s\n",*env);
		env++;
	}
	exit(0);
}

