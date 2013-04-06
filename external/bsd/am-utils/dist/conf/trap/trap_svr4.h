/*	$NetBSD: trap_svr4.h,v 1.1.1.1 2008/09/19 20:07:19 christos Exp $	*/

/* $srcdir/conf/trap/trap_svr4.h */
extern int mount_svr4(char *fsname, char *dir, int flags, MTYPE_TYPE type, caddr_t data, const char *optstr);
#define MOUNT_TRAP(type, mnt, flags, mnt_data) 	mount_svr4(mnt->mnt_fsname, mnt->mnt_dir, flags, type, mnt_data, mnt->mnt_opts)