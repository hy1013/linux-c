/*
 * =====================================================================================
 *
 *       Filename:  user.c
 *
 *    Description:  user's information
 *
 *        Version:  1.0
 *        Created:  2013年01月27日 15时38分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>
#include <stdio.h>

int main(){

	uid_t uid;
	gid_t gid;

	struct passwd *pw;
	uid=getuid();
	gid=getgid();

	printf("User is %s\n",getlogin());

	printf("User IDs:uid=%d,gid=%d\n",uid,gid);

	pw=getpwuid(uid);
	printf("UID passwd entry :\n name=%s,uid=%d,gid=%d,home=%s,shell=%s\n",pw->pw_name,pw->pw_uid,pw->pw_gid,pw->pw_dir,pw->pw_shell);

	pw=getpwnam("root");

	printf("root passwd entry:\n");
	printf("name=%s, uid=%d, gid=%d, home=%s, shell=%s\n",pw->pw_name,pw->pw_uid,pw->pw_gid,pw->pw_dir,pw->pw_shell);
	

	exit(0);
}

