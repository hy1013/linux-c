/*
 * =====================================================================================
 *
 *       Filename:  logmask.c
 *
 *    Description:  logmask.c
 *
 *        Version:  1.0
 *        Created:  2013年01月28日 12时07分42秒
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
#include <unistd.h>
#include <syslog.h>

int main(){

	int logmask;

	openlog("logmask",LOG_PID|LOG_CONS,LOG_USER);
	syslog(LOG_INFO,"informative message,pid=%d",getpid());
	syslog(LOG_DEBUG,"debug message,should appear");
	logmask=setlogmask(LOG_UPTO(LOG_NOTICE));
	syslog(LOG_DEBUG,"debug message,should not appear");
	exit(0);
}

