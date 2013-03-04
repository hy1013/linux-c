/*
 * =====================================================================================
 *
 *       Filename:  hostget.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 15时56分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <sys/utsname.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

	char computer[256];
	struct utsname uts;


	if(gethostname(computer,255)!=0||uname(&uts)<0){
		fprintf(stderr,"Could not get host information\n");
		exit(1);
	}

	printf("computer host name is %s\n",computer);
	printf("System is %s on %s hardware\n",uts.sysname,uts.machine);
	printf("Nodename is %s \n",uts.nodename);
	printf("Version is %s,%s\n",uts.release,uts.version);

	exit(0);
}

