/*
 * =====================================================================================
 *
 *       Filename:  envtime.c
 *
 *    Description:  showtime
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 11时14分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int i;
	time_t the_time;

	for(i=1;i<=10;i++)
	{
		the_time=time((time_t *)0);
		printf("the time is %ld\n",the_time);
		sleep(2);
	}
	exit(0);
}

