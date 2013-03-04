/*
 * =====================================================================================
 *
 *       Filename:  mmap.c
 *
 *    Description:  内存映射
 *
 *        Version:  1.0
 *        Created:  2013年01月26日 18时24分26秒
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
#include <sys/mman.h>
#include <fcntl.h>

typedef struct{

	int integer;
	char string[24];
}RECORD;
#define NRECORDS (100)

int main(){

	RECORD record,*mapped;
	int i,f;
	FILE *fp;
	fp=fopen("records.dat","w+");
	for(i=0;i<NRECORDS;i++){
		record.integer=i;
		sprintf(record.string,"RECORD-%d",i);
		fwrite(&record,sizeof(record),1,fp);
	}

	fclose(fp);

	fp=fopen("record.dat","r+");
	fseek(fp,43*sizeof(record),SEEK_SET);
	fread(&record,sizeof(record),1,fp);

	record.integer=143;
	sprintf(record.string,"RECORD-%d",record.integer);


	fseek(fp,43*sizeof(record),SEEK_SET);
	fwrite(&record,sizeof(record),1,fp);
	fclose(fp);


	f=open("records.dat",O_RDWR);
	mapped=(RECORD *)mmap(0,NRECORDS*sizeof(record),PROT_READ|PROT_WRITE,MAP_SHARED,f,0);


	mapped[43].integer=243;
	sprintf(mapped[43].string,"RECORD-%d",mapped[43].integer);


	msync((void *)mapped,NRECORDS*sizeof(record),MS_ASYNC);
	munmap((void *)mapped,NRECORDS*sizeof(record));
	close(f);

	exit(0);
}

