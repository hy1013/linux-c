/*
 * =====================================================================================
 *
 *       Filename:  ctime.c
 *
 *    Description:  ctime.c
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 11时45分47秒
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
#include <time.h>

int main(){
	time_t timeval;

	(void)time(&timeval);
	printf("the date is: %s",ctime(&timeval));
	exit(0);
}

