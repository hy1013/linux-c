/*
 * =====================================================================================
 *
 *       Filename:  gmtime.c
 *
 *    Description:  print current date and time
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 11时25分10秒
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
int main(){
	struct tm *tm_ptr;
	time_t the_time;

	(void)time(&the_time);
	tm_ptr=localtime(&the_time);

	printf("Raw time is %ld\n",the_time);
	printf("gmtime gives:\n");
	printf("date:%02d/%02d/%02d\n",tm_ptr->tm_year,tm_ptr->tm_mon+1,tm_ptr->tm_mday);
	printf("time:%02d:%02d:%02d\n",tm_ptr->tm_hour,tm_ptr->tm_min,tm_ptr->tm_sec);
	exit(0);
}

