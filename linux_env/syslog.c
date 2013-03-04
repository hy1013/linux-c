/*
 * =====================================================================================
 *
 *       Filename:  syslog.c
 *
 *    Description:  syslog.c
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 19时10分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <syslog.h>
#include <stdio.h>


int main(){

	FILE *f;

	f=fopen("not_here","r");
	if(!f)
		syslog(LOG_ERR|LOG_USER,"oops - %m\n");
	exit(0);
}

