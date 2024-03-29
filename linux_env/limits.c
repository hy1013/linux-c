/*
 * =====================================================================================
 *
 *       Filename:  limits.c
 *
 *    Description:  资源限制
 *
 *        Version:  1.0
 *        Created:  2013年01月28日 14时30分29秒
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
#include <sys/types.h>
#include <sys/resource.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

void work(){
	FILE *f;
	int i;
	double x=4.5;

	f=tmpfile();
	for(i=0;i<10000;i++)
	{
		fprintf(f,"Do some output\n");
		if(error(f)){
			fprintf(stderr,"Error writing to temporary file\n");
			exit(1);
		}
	}
		for(i=0;i<1000000;i++)
			x=log(x*x+3.21);
	
}

int main(){
	struct rusage r_usage;
	struct rlimit r_limit;
	int priority;

	work();
	getrusage(RUSAGE_SELF,&r_usage);

	printf("CPU usage:User=%ld.%06ld,System=%ld.%06ld\n",
			r_usage.ru_utime.tv_sec,r_usage.ru_utime.tv_usec,
			r_usage.ru_stime.tv_sec,r_usage.ru_stime.tv_usec);

	priority=getpriority(PRIO_PROCESS,getpid());
	printf("Current priority = %d\n",priority);

	getrlimit(RLIMIT_FSIZE,&r_limit);
	printf("Current FSIZE limit :soft = %ld,hard=%ld\n",
			r_limit.rlim_cur,r_limit.rlim_max);

	r_limit.rlim_cur=2048;
	r_limit.rlim_max=4096;
	printf("Setting a 2K file size limit\n");
	setrlimit(RLIMIT_FSIZE,&r_limit);

	work();
	exit(0);
}

