# 1 "startup.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "startup.c"





int arg_count;
char **arg_vector;
# 17 "startup.c"
void *memcpy(void *dest,const void *src,int n)
{ int j;

  for (j=0;j<n;j++) ((char*)dest)[j] = ((char*)src)[j];
  return dest;
};





unsigned char ___video_text=1;
# 65 "startup.c"
int __bss_stop;


# 1 "/usr/include/unistd.h" 1 3 4
# 71 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 32 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 2 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 34 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef int __darwin_ptrdiff_t;





typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 35 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 58 "/usr/include/sys/_types.h" 3 4
struct __darwin_pthread_handler_rec
{
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t { long __sig; char __opaque[36]; };
struct _opaque_pthread_cond_t { long __sig; char __opaque[24]; };
struct _opaque_pthread_condattr_t { long __sig; char __opaque[4]; };
struct _opaque_pthread_mutex_t { long __sig; char __opaque[40]; };
struct _opaque_pthread_mutexattr_t { long __sig; char __opaque[8]; };
struct _opaque_pthread_once_t { long __sig; char __opaque[4]; };
struct _opaque_pthread_rwlock_t { long __sig; char __opaque[124]; };
struct _opaque_pthread_rwlockattr_t { long __sig; char __opaque[12]; };
struct _opaque_pthread_t { long __sig; struct __darwin_pthread_handler_rec *__cleanup_stack; char __opaque[596]; };
# 94 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;



typedef __uint32_t __darwin_ino_t;

typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef struct _opaque_pthread_attr_t
   __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t
   __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t
   __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t
   __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t
   __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t
   __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t
   __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t
   __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t
   *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
# 28 "/usr/include/_types.h" 2 3 4

typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;



typedef unsigned long __darwin_wctype_t;
# 72 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 138 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 73 "/usr/include/unistd.h" 2 3 4




typedef __darwin_dev_t dev_t;





typedef __darwin_gid_t gid_t;




typedef __darwin_intptr_t intptr_t;





typedef __darwin_mode_t mode_t;





typedef __darwin_off_t off_t;




typedef __darwin_pid_t pid_t;






typedef __darwin_size_t size_t;




typedef __darwin_ssize_t ssize_t;




typedef __darwin_uid_t uid_t;




typedef __darwin_useconds_t useconds_t;





typedef __darwin_uuid_t uuid_t;
# 414 "/usr/include/unistd.h" 3 4


void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);
int close(int) __asm("_" "close" "$UNIX2003");
size_t confstr(int, char *, size_t) __asm("_" "confstr" "$UNIX2003");
char *crypt(const char *, const char *);
char *ctermid(char *);
int dup(int);
int dup2(int, int);

void encrypt(char *, int) __asm("_" "encrypt" "$UNIX2003");



int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
int fchown(int, uid_t, gid_t);
int fchdir(int);
pid_t fork(void);
long fpathconf(int, int);
int fsync(int) __asm("_" "fsync" "$UNIX2003");
int ftruncate(int, off_t);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);
int getgroups(int, gid_t []);
long gethostid(void);
int gethostname(char *, size_t);
char *getlogin(void);
int getlogin_r(char *, size_t);
int getopt(int, char * const [], const char *) __asm("_" "getopt" "$UNIX2003");
pid_t getpgid(pid_t);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
pid_t getsid(pid_t);
uid_t getuid(void);
char *getwd(char *);
int isatty(int);
int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" "$UNIX2003");
int link(const char *, const char *);
int lockf(int, int, off_t) __asm("_" "lockf" "$UNIX2003");
off_t lseek(int, off_t, int);
int nice(int) __asm("_" "nice" "$UNIX2003");
long pathconf(const char *, int);
int pause(void) __asm("_" "pause" "$UNIX2003");
int pipe(int [2]);
ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" "$UNIX2003");
ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" "$UNIX2003");
ssize_t read(int, void *, size_t) __asm("_" "read" "$UNIX2003");
ssize_t readlink(const char * , char * , size_t);
int rmdir(const char *);
int setegid(gid_t);
int seteuid(uid_t);
int setgid(gid_t);
int setpgid(pid_t, pid_t);

pid_t setpgrp(void) __asm("_" "setpgrp" "$UNIX2003");



int setregid(gid_t, gid_t) __asm("_" "setregid" "$UNIX2003");
int setreuid(uid_t, uid_t) __asm("_" "setreuid" "$UNIX2003");
pid_t setsid(void);
int setuid(uid_t);
unsigned int
  sleep(unsigned int) __asm("_" "sleep" "$UNIX2003");
void swab(const void * , void * , ssize_t);
int symlink(const char *, const char *);
void sync(void);
long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
int truncate(const char *, off_t);
char *ttyname(int);

int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" "$UNIX2003");



useconds_t
  ualarm(useconds_t, useconds_t);
int unlink(const char *);
int usleep(useconds_t) __asm("_" "usleep" "$UNIX2003");
pid_t vfork(void);
ssize_t write(int, const void *, size_t) __asm("_" "write" "$UNIX2003");

extern char *optarg;
extern int optind, opterr, optopt;


# 1 "/usr/include/sys/select.h" 1 3 4
# 66 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 67 "/usr/include/sys/select.h" 2 3 4
# 78 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 88 "/usr/include/sys/_structs.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};







struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 183 "/usr/include/sys/_structs.h" 3 4

typedef struct fd_set {
 __int32_t fds_bits[(((1024) + (((sizeof(__int32_t) * 8)) - 1)) / ((sizeof(__int32_t) * 8)))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, struct fd_set *_p)
{
 return (_p->fds_bits[_n/(sizeof(__int32_t) * 8)] & (1<<(_n % (sizeof(__int32_t) * 8))));
}
# 79 "/usr/include/sys/select.h" 2 3 4
# 87 "/usr/include/sys/select.h" 3 4
typedef __darwin_time_t time_t;




typedef __darwin_suseconds_t suseconds_t;




typedef __darwin_sigset_t sigset_t;
# 134 "/usr/include/sys/select.h" 3 4



int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )






  __asm("_" "pselect" "$UNIX2003")


  ;


# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )






  __asm("_" "select" "$UNIX2003")


  ;
# 153 "/usr/include/sys/select.h" 2 3 4


# 516 "/usr/include/unistd.h" 2 3 4

void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void *brk(const void *);
int chroot(const char *);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdtablesize(void);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);
mode_t getmode(const void *, mode_t);
int getpagesize(void) __attribute__((__const__));
char *getpass(const char *);
int getpeereid(int, uid_t *, gid_t *);
int getpgid(pid_t _pid);
int getsgroups_np(int *, uuid_t);
int getsid(pid_t _pid);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
void *sbrk(int);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" "$UNIX2003");



int setlogin(const char *);
void *setmode(const char *);
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);
# 597 "/usr/include/unistd.h" 3 4
int getattrlist(const char*,void*,void*,size_t,unsigned long) __asm("_" "getattrlist" "$UNIX2003");
int setattrlist(const char*,void*,void*,size_t,unsigned long) __asm("_" "setattrlist" "$UNIX2003");
int exchangedata(const char*,const char*,unsigned long);
int getdirentriesattr(int,void*,void*,size_t,unsigned long*,unsigned long*,unsigned long*,unsigned long);
int searchfs(const char*,void*,void*,unsigned long,unsigned long,void*);

int fsctl(const char *,unsigned long,void*,unsigned long);


extern int optreset;



# 69 "startup.c" 2





unsigned short __index_font[96]={
0x000,0x007,0x008,0x00B,0x012,0x017,0x021,0x028,0x029,0x02C,0x02F,0x034,
0x039,0x03B,0x03F,0x040,0x044,0x049,0x04C,0x051,0x056,0x05B,0x060,0x065,
0x06A,0x06F,0x074,0x075,0x077,0x07C,0x081,0x086,0x08B,0x097,0x0A0,0x0A7,
0x0AF,0x0B7,0x0BE,0x0C5,0x0CD,0x0D5,0x0D6,0x0DB,0x0E2,0x0E8,0x0F1,0x0F9,
0x101,0x109,0x111,0x11A,0x121,0x12A,0x132,0x13B,0x148,0x150,0x159,0x15F,
0x162,0x166,0x169,0x16E,0x175,0x177,0x17E,0x184,0x18A,0x190,0x196,0x199,
0x19F,0x1A4,0x1A5,0x1A7,0x1AD,0x1AE,0x1B7,0x1BC,0x1C2,0x1C8,0x1CE,0x1D1,
0x1D6,0x1D9,0x1DE,0x1E5,0x1EE,0x1F4,0x1FB,0x1FF,0x204,0x205,0x20A,0x211};

unsigned short __graph_font[0x211]={
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x17F8,0x0078,0x0000,
0x0078,0x0200,0x1E40,0x03C0,0x1E78,0x03C0,0x0278,0x0040,0x08E0,0x1110,
0x3FF8,0x1110,0x0E60,0x0030,0x0848,0x0448,0x0230,0x0100,0x0080,0x0C40,
0x1220,0x1210,0x0C00,0x0E00,0x1170,0x1088,0x1188,0x1670,0x0800,0x1400,
0x0078,0x1FC0,0x6030,0x8008,0x8008,0x6030,0x1FC0,0x0050,0x0060,0x0038,
0x0060,0x0050,0x0100,0x0100,0x07C0,0x0100,0x0100,0x2000,0x1000,0x0100,
0x0100,0x0100,0x0100,0x1000,0x7000,0x0E00,0x01C0,0x0038,0x0FF0,0x1008,
0x1008,0x1008,0x0FF0,0x0010,0x0010,0x1FF8,0x1C30,0x1208,0x1108,0x1088,
0x1070,0x0810,0x1008,0x1088,0x1088,0x0F70,0x0300,0x0280,0x0260,0x0210,
0x1FF8,0x09F8,0x1088,0x1088,0x1088,0x0F08,0x0FF0,0x1108,0x1088,0x1088,
0x0F10,0x0008,0x1C08,0x0308,0x00C8,0x0038,0x0F70,0x1088,0x1088,0x1088,
0x0F70,0x08F0,0x1108,0x1108,0x1088,0x0FF0,0x1040,0x2000,0x1040,0x0100,
0x0380,0x06C0,0x0C60,0x0820,0x0280,0x0280,0x0280,0x0280,0x0280,0x0820,
0x0C60,0x06C0,0x0380,0x0100,0x0030,0x0008,0x1708,0x0088,0x0070,0x03C0,
0x0C30,0x1008,0x1008,0x2384,0x2444,0x2444,0x2244,0x25C8,0x1408,0x1430,
0x03C0,0x1800,0x0600,0x0380,0x0260,0x0218,0x0260,0x0380,0x0600,0x1800,
0x1FF8,0x1088,0x1088,0x1088,0x1088,0x1088,0x0F70,0x07E0,0x0810,0x1008,
0x1008,0x1008,0x1008,0x0810,0x0420,0x1FF8,0x1008,0x1008,0x1008,0x1008,
0x1008,0x0810,0x07E0,0x1FF8,0x1088,0x1088,0x1088,0x1088,0x1088,0x1008,
0x1FF8,0x0088,0x0088,0x0088,0x0088,0x0088,0x0008,0x07E0,0x0810,0x1008,
0x1008,0x1008,0x1108,0x0910,0x1F20,0x1FF8,0x0080,0x0080,0x0080,0x0080,
0x0080,0x0080,0x1FF8,0x1FF8,0x0C00,0x1000,0x1000,0x1000,0x0FF8,0x1FF8,
0x0080,0x0140,0x0220,0x0410,0x0808,0x1000,0x1FF8,0x1000,0x1000,0x1000,
0x1000,0x1000,0x1FF8,0x0060,0x0180,0x0600,0x1800,0x0600,0x0180,0x0060,
0x1FF8,0x1FF8,0x0010,0x0060,0x0080,0x0100,0x0600,0x0800,0x1FF8,0x07E0,
0x0810,0x1008,0x1008,0x1008,0x1008,0x0810,0x07E0,0x1FF8,0x0108,0x0108,
0x0108,0x0108,0x0108,0x0090,0x0060,0x07E0,0x0810,0x1008,0x1008,0x1008,
0x1408,0x0810,0x17E0,0x1FF8,0x0108,0x0108,0x0108,0x0108,0x0108,0x0190,
0x0E60,0x1000,0x0C70,0x1088,0x1088,0x1088,0x1108,0x1108,0x0E30,0x0008,
0x0008,0x0008,0x0008,0x1FF8,0x0008,0x0008,0x0008,0x0008,0x07F8,0x0800,
0x1000,0x1000,0x1000,0x1000,0x0800,0x07F8,0x0018,0x0060,0x0180,0x0600,
0x1800,0x0600,0x0180,0x0060,0x0018,0x0038,0x00C0,0x0700,0x1800,0x0700,
0x00C0,0x0038,0x00C0,0x0700,0x1800,0x0700,0x00C0,0x0038,0x1818,0x0420,
0x0240,0x0180,0x0180,0x0240,0x0420,0x1818,0x0018,0x0020,0x0040,0x0080,
0x1F00,0x0080,0x0040,0x0020,0x0018,0x1808,0x1608,0x1108,0x1088,0x1068,
0x1018,0xFFF8,0x8008,0x8008,0x0038,0x01C0,0x0E00,0x7000,0x8008,0x8008,
0xFFF8,0x0010,0x0008,0x0004,0x0008,0x0010,0x4000,0x4000,0x4000,0x4000,
0x4000,0x4000,0x4000,0x0008,0x0010,0x0E80,0x1140,0x1140,0x1140,0x1140,
0x0F80,0x1000,0x1FF8,0x0880,0x1040,0x1040,0x1040,0x0F80,0x0F80,0x1040,
0x1040,0x1040,0x1040,0x0880,0x0F80,0x1040,0x1040,0x1040,0x0880,0x1FF8,
0x0F80,0x1240,0x1240,0x1240,0x1240,0x0B80,0x0040,0x1FF0,0x0048,0x0F80,
0x9040,0x9040,0x9040,0x8880,0x7FC0,0x1FF8,0x0080,0x0040,0x0040,0x1F80,
0x1FC8,0x8000,0x7FC8,0x1FF8,0x0200,0x0300,0x0480,0x0840,0x1000,0x1FF8,
0x1FC0,0x0080,0x0040,0x0040,0x1F80,0x0080,0x0040,0x0040,0x1F80,0x1FC0,
0x0080,0x0040,0x0040,0x1F80,0x0F80,0x1040,0x1040,0x1040,0x1040,0x0F80,
0xFFC0,0x0880,0x1040,0x1040,0x1040,0x0F80,0x0F80,0x1040,0x1040,0x1040,
0x0880,0xFFC0,0x1FC0,0x0080,0x0040,0x0980,0x1240,0x1240,0x1240,0x0C80,
0x0040,0x0FF0,0x1040,0x0FC0,0x1000,0x1000,0x0800,0x1FC0,0x00C0,0x0300,
0x0C00,0x1000,0x0C00,0x0300,0x00C0,0x00C0,0x0700,0x1800,0x0700,0x00C0,
0x0700,0x1800,0x0700,0x00C0,0x1040,0x0880,0x0700,0x0700,0x0880,0x1040,
0x80C0,0x8300,0x4C00,0x3000,0x0C00,0x0300,0x00C0,0x1840,0x1640,0x1140,
0x10C0,0x0200,0x0200,0x7DF0,0x8008,0x8008,0xFFF8,0x8008,0x8008,0x7DF0,
0x0200,0x0200,0x0030,0x0008,0x0008,0x0010,0x0020,0x0020,0x0018};




void *table_size[256/sizeof(void *)];
void *last_block[64];



# 1 "/usr/include/dirent.h" 1 3 4
# 66 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/sys/dirent.h" 1 3 4
# 82 "/usr/include/sys/dirent.h" 3 4
typedef __darwin_ino_t ino_t;






#pragma pack(4)


struct dirent {
 ino_t d_ino;
 __uint16_t d_reclen;
 __uint8_t d_type;
 __uint8_t d_namlen;
 char d_name[255 + 1];
};


#pragma pack()
# 67 "/usr/include/dirent.h" 2 3 4

struct _telldir;


typedef struct {
 int __dd_fd;
 long __dd_loc;
 long __dd_size;
 char *__dd_buf;
 int __dd_len;
 long __dd_seek;
 long __dd_rewind;
 int __dd_flags;
 __darwin_pthread_mutex_t __dd_lock;
 struct _telldir *__dd_td;
} DIR;
# 102 "/usr/include/dirent.h" 3 4


int alphasort(const void *, const void *) __asm("_" "alphasort" );

int closedir(DIR *) __asm("_" "closedir" "$UNIX2003");

int getdirentries(int, char *, int, long *);

DIR *opendir(const char *) __asm("_" "opendir" "$UNIX2003");

DIR *__opendir2(const char *, int) __asm("_" "__opendir2" "$UNIX2003");

struct dirent *readdir(DIR *) __asm("_" "readdir" );
int readdir_r(DIR *, struct dirent *, struct dirent **) __asm("_" "readdir_r" );
void rewinddir(DIR *) __asm("_" "rewinddir" "$UNIX2003");

int scandir(const char *, struct dirent ***,
    int (*)(struct dirent *), int (*)(const void *, const void *)) __asm("_" "scandir" );

void seekdir(DIR *, long) __asm("_" "seekdir" "$UNIX2003");
long telldir(DIR *) __asm("_" "telldir" "$UNIX2003");

# 148 "startup.c" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 78 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 79 "/usr/include/sys/stat.h" 2 3 4







typedef __darwin_blkcnt_t blkcnt_t;




typedef __darwin_blksize_t blksize_t;
# 107 "/usr/include/sys/stat.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 118 "/usr/include/sys/stat.h" 3 4
typedef __uint16_t nlink_t;
# 152 "/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 228 "/usr/include/sys/stat.h" 3 4
struct stat {
 dev_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 dev_t st_rdev;

 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
# 248 "/usr/include/sys/stat.h" 3 4
 off_t st_size;
 blkcnt_t st_blocks;
 blksize_t st_blksize;
 __uint32_t st_flags;
 __uint32_t st_gen;
 __int32_t st_lspare;
 __int64_t st_qspare[2];
};





struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 422 "/usr/include/sys/stat.h" 3 4


int chmod(const char *, mode_t) __asm("_" "chmod" "$UNIX2003");
int fchmod(int, mode_t) __asm("_" "fchmod" "$UNIX2003");
int fstat(int, struct stat *) __asm("_" "fstat" );
int lstat(const char *, struct stat *) __asm("_" "lstat" );
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" );
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);



struct _filesec;
typedef struct _filesec *filesec_t;


int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" );
int lchflags(const char *, __uint32_t);
int lchmod(const char *, mode_t);
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" );
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" );
int umaskx_np(filesec_t);

int fstatx64_np(int, struct stat64 *, filesec_t);
int lstatx64_np(const char *, struct stat64 *, filesec_t);
int statx64_np(const char *, struct stat64 *, filesec_t);
int fstat64(int, struct stat64 *);
int lstat64(const char *, struct stat64 *);
int stat64(const char *, struct stat64 *);



# 149 "startup.c" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 78 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 37 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 78 "/usr/include/i386/types.h" 3 4
typedef signed char int8_t;

typedef unsigned char u_int8_t;


typedef short int16_t;

typedef unsigned short u_int16_t;


typedef int int32_t;

typedef unsigned int u_int32_t;


typedef long long int64_t;

typedef unsigned long long u_int64_t;




typedef int32_t register_t;
# 109 "/usr/include/i386/types.h" 3 4
typedef unsigned long int uintptr_t;




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;





typedef u_int64_t syscall_arg_t;
# 38 "/usr/include/machine/types.h" 2 3 4
# 79 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/machine/endian.h" 1 3 4
# 37 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 124 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static __inline__
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((_data << 8) | (_data >> 8));
}

static __inline__
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{
    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;
}


static __inline__
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    __asm__ ("bswap   %%eax\n\t"
             "bswap   %%edx\n\t"
             "xchgl   %%eax, %%edx"
             : "+A" (_data));
    return _data;
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 125 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 38 "/usr/include/machine/endian.h" 2 3 4
# 82 "/usr/include/sys/types.h" 2 3 4


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;






typedef u_int32_t fixpt_t;
# 126 "/usr/include/sys/types.h" 3 4
typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;
# 148 "/usr/include/sys/types.h" 3 4
typedef __int32_t key_t;
# 163 "/usr/include/sys/types.h" 3 4
typedef __darwin_id_t id_t;
# 176 "/usr/include/sys/types.h" 3 4
typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 223 "/usr/include/sys/types.h" 3 4
typedef __darwin_clock_t clock_t;
# 260 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_structs.h" 1 3 4
# 261 "/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;
# 318 "/usr/include/sys/types.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;



typedef __darwin_pthread_cond_t pthread_cond_t;



typedef __darwin_pthread_condattr_t pthread_condattr_t;



typedef __darwin_pthread_mutex_t pthread_mutex_t;



typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;



typedef __darwin_pthread_once_t pthread_once_t;



typedef __darwin_pthread_rwlock_t pthread_rwlock_t;



typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;



typedef __darwin_pthread_t pthread_t;






typedef __darwin_pthread_key_t pthread_key_t;





typedef __darwin_fsblkcnt_t fsblkcnt_t;




typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 150 "startup.c" 2


# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
# 1 "/usr/include/architecture/i386/math.h" 1 3 4
# 49 "/usr/include/architecture/i386/math.h" 3 4
 typedef float float_t;
 typedef double double_t;
# 83 "/usr/include/architecture/i386/math.h" 3 4
enum {
 _FP_NAN = 1,
 _FP_INFINITE = 2,
 _FP_ZERO = 3,
 _FP_NORMAL = 4,
 _FP_SUBNORMAL = 5,
 _FP_SUPERNORMAL = 6
};
# 117 "/usr/include/architecture/i386/math.h" 3 4
extern unsigned int __math_errhandling ( void );
# 137 "/usr/include/architecture/i386/math.h" 3 4
extern int __fpclassifyf(float );
extern int __fpclassifyd(double );
extern int __fpclassify (long double);
# 172 "/usr/include/architecture/i386/math.h" 3 4
 static __inline__ int __inline_isfinitef (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isfinited (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isfinite (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isinff (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isinfd (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isinf (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnanf (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnand (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnan (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnormalf (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnormald (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_isnormal (long double) __attribute__ ((__always_inline__));
 static __inline__ int __inline_signbitf (float ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_signbitd (double ) __attribute__ ((__always_inline__));
 static __inline__ int __inline_signbit (long double) __attribute__ ((__always_inline__));

 static __inline__ int __inline_isinff( float __x ) { return __builtin_fabsf(__x) == __builtin_inff(); }
 static __inline__ int __inline_isinfd( double __x ) { return __builtin_fabs(__x) == __builtin_inf(); }
 static __inline__ int __inline_isinf( long double __x ) { return __builtin_fabsl(__x) == __builtin_infl(); }
 static __inline__ int __inline_isfinitef( float __x ) { return __x == __x && __builtin_fabsf(__x) != __builtin_inff(); }
 static __inline__ int __inline_isfinited( double __x ) { return __x == __x && __builtin_fabs(__x) != __builtin_inf(); }
 static __inline__ int __inline_isfinite( long double __x ) { return __x == __x && __builtin_fabsl(__x) != __builtin_infl(); }
 static __inline__ int __inline_isnanf( float __x ) { return __x != __x; }
 static __inline__ int __inline_isnand( double __x ) { return __x != __x; }
 static __inline__ int __inline_isnan( long double __x ) { return __x != __x; }
 static __inline__ int __inline_signbitf( float __x ) { union{ float __f; unsigned int __u; }__u; __u.__f = __x; return (int)(__u.__u >> 31); }
 static __inline__ int __inline_signbitd( double __x ) { union{ double __f; unsigned int __u[2]; }__u; __u.__f = __x; return (int)(__u.__u[1] >> 31); }
 static __inline__ int __inline_signbit( long double __x ){ union{ long double __ld; struct{ unsigned int __m[2]; short __sexp; }__p; }__u; __u.__ld = __x; return (int) (((unsigned short) __u.__p.__sexp) >> 15); }
 static __inline__ int __inline_isnormalf( float __x ) { float fabsf = __builtin_fabsf(__x); if( __x != __x ) return 0; return fabsf < __builtin_inff() && fabsf >= 1.17549435e-38F; }
 static __inline__ int __inline_isnormald( double __x ) { double fabsf = __builtin_fabs(__x); if( __x != __x ) return 0; return fabsf < __builtin_inf() && fabsf >= 2.2250738585072014e-308; }
 static __inline__ int __inline_isnormal( long double __x ) { long double fabsf = __builtin_fabsl(__x); if( __x != __x ) return 0; return fabsf < __builtin_infl() && fabsf >= 3.36210314311209350626e-4932L; }
# 262 "/usr/include/architecture/i386/math.h" 3 4
extern double acos( double );
extern float acosf( float );

extern double asin( double );
extern float asinf( float );

extern double atan( double );
extern float atanf( float );

extern double atan2( double, double );
extern float atan2f( float, float );

extern double cos( double );
extern float cosf( float );

extern double sin( double );
extern float sinf( float );

extern double tan( double );
extern float tanf( float );

extern double acosh( double );
extern float acoshf( float );

extern double asinh( double );
extern float asinhf( float );

extern double atanh( double );
extern float atanhf( float );

extern double cosh( double );
extern float coshf( float );

extern double sinh( double );
extern float sinhf( float );

extern double tanh( double );
extern float tanhf( float );

extern double exp ( double );
extern float expf ( float );

extern double exp2 ( double );
extern float exp2f ( float );

extern double expm1 ( double );
extern float expm1f ( float );

extern double log ( double );
extern float logf ( float );

extern double log10 ( double );
extern float log10f ( float );

extern double log2 ( double );
extern float log2f ( float );

extern double log1p ( double );
extern float log1pf ( float );

extern double logb ( double );
extern float logbf ( float );

extern double modf ( double, double * );
extern float modff ( float, float * );

extern double ldexp ( double, int );
extern float ldexpf ( float, int );

extern double frexp ( double, int * );
extern float frexpf ( float, int * );

extern int ilogb ( double );
extern int ilogbf ( float );

extern double scalbn ( double, int );
extern float scalbnf ( float, int );

extern double scalbln ( double, long int );
extern float scalblnf ( float, long int );

extern double fabs( double );
extern float fabsf( float );

extern double cbrt( double );
extern float cbrtf( float );

extern double hypot ( double, double );
extern float hypotf ( float, float );

extern double pow ( double, double );
extern float powf ( float, float );

extern double sqrt( double );
extern float sqrtf( float );

extern double erf( double );
extern float erff( float );

extern double erfc( double );
extern float erfcf( float );

extern double lgamma( double );
extern float lgammaf( float );

extern double tgamma( double );
extern float tgammaf( float );

extern double ceil ( double );
extern float ceilf ( float );

extern double floor ( double );
extern float floorf ( float );

extern double nearbyint ( double );
extern float nearbyintf ( float );

extern double rint ( double );
extern float rintf ( float );

extern long int lrint ( double );
extern long int lrintf ( float );

extern double round ( double );
extern float roundf ( float );

extern long int lround ( double );
extern long int lroundf ( float );




    extern long long int llrint ( double );
    extern long long int llrintf ( float );

    extern long long int llround ( double );
    extern long long int llroundf ( float );



extern double trunc ( double );
extern float truncf ( float );

extern double fmod ( double, double );
extern float fmodf ( float, float );

extern double remainder ( double, double );
extern float remainderf ( float, float );

extern double remquo ( double, double, int * );
extern float remquof ( float, float, int * );

extern double copysign ( double, double );
extern float copysignf ( float, float );

extern double nan( const char * );
extern float nanf( const char * );

extern double nextafter ( double, double );
extern float nextafterf ( float, float );

extern double fdim ( double, double );
extern float fdimf ( float, float );

extern double fmax ( double, double );
extern float fmaxf ( float, float );

extern double fmin ( double, double );
extern float fminf ( float, float );

extern double fma ( double, double, double );
extern float fmaf ( float, float, float );

extern long double acosl(long double);
extern long double asinl(long double);
extern long double atanl(long double);
extern long double atan2l(long double, long double);
extern long double cosl(long double);
extern long double sinl(long double);
extern long double tanl(long double);
extern long double acoshl(long double);
extern long double asinhl(long double);
extern long double atanhl(long double);
extern long double coshl(long double);
extern long double sinhl(long double);
extern long double tanhl(long double);
extern long double expl(long double);
extern long double exp2l(long double);
extern long double expm1l(long double);
extern long double logl(long double);
extern long double log10l(long double);
extern long double log2l(long double);
extern long double log1pl(long double);
extern long double logbl(long double);
extern long double modfl(long double, long double *);
extern long double ldexpl(long double, int);
extern long double frexpl(long double, int *);
extern int ilogbl(long double);
extern long double scalbnl(long double, int);
extern long double scalblnl(long double, long int);
extern long double fabsl(long double);
extern long double cbrtl(long double);
extern long double hypotl(long double, long double);
extern long double powl(long double, long double);
extern long double sqrtl(long double);
extern long double erfl(long double);
extern long double erfcl(long double);
extern long double lgammal(long double);
extern long double tgammal(long double);
extern long double ceill(long double);
extern long double floorl(long double);
extern long double nearbyintl(long double);
extern long double rintl(long double);
extern long int lrintl(long double);
extern long double roundl(long double);
extern long int lroundl(long double);



    extern long long int llrintl(long double);
    extern long long int llroundl(long double);


extern long double truncl(long double);
extern long double fmodl(long double, long double);
extern long double remainderl(long double, long double);
extern long double remquol(long double, long double, int *);
extern long double copysignl(long double, long double);
extern long double nanl(const char *);
extern long double nextafterl(long double, long double);
extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);
extern long double fdiml(long double, long double);
extern long double fmaxl(long double, long double);
extern long double fminl(long double, long double);
extern long double fmal(long double, long double, long double);
# 507 "/usr/include/architecture/i386/math.h" 3 4
extern double __inf( void );
extern float __inff( void );
extern long double __infl( void );
extern float __nan( void );


extern double j0 ( double );

extern double j1 ( double );

extern double jn ( int, double );

extern double y0 ( double );

extern double y1 ( double );

extern double yn ( int, double );

extern double scalb ( double, double );
# 543 "/usr/include/architecture/i386/math.h" 3 4
extern int signgam;
# 557 "/usr/include/architecture/i386/math.h" 3 4
extern long int rinttol ( double );

extern long int roundtol ( double );
# 568 "/usr/include/architecture/i386/math.h" 3 4
struct exception {
 int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
};
# 597 "/usr/include/architecture/i386/math.h" 3 4
extern int finite ( double );

extern double gamma ( double );




extern int matherr ( struct exception * );





extern double significand ( double );




extern double drem ( double, double );
# 29 "/usr/include/math.h" 2 3 4
# 153 "startup.c" 2



  extern unsigned char ___video_text;


  int count_char=0;

  int print_char(char car)

  { unsigned short tmp;
    int i;
    unsigned short pos_cur;
    unsigned char *screen=(unsigned char *)0xB8000LU;

    if (___video_text == 0) {
      asm("int $0x30");
    };


    asm("movw $0x0E,%%ax     \n      movw $0x3D4,%%dx    \n      outb %%al,%%dx      \n      incw %%dx           \n      inb  %%dx,%%al      \n      movw %%ax,%0        ": "=g"(tmp) : :"ax","dx");





      pos_cur = tmp;

      asm("movw $0x0F,%%ax     \n        movw $0x3D4,%%dx    \n        outb %%al,%%dx      \n        incw %%dx           \n        inb  %%dx,%%al      \n        movw %%ax,%0        ": "=g"(tmp) : :"ax","dx");





        pos_cur = ((pos_cur << 8) | tmp) << 1;


        switch (car) {
          case '\b':
          if ((pos_cur % 160) != 0) {
            pos_cur = pos_cur - 2;
          };
          break;
          case '\t':
          pos_cur = (pos_cur + 16) & 0xFFF0;
          break;
          case '\n':
          pos_cur = pos_cur + 160 - (pos_cur % 160);
          count_char++;
          if (count_char == 20) {
            do {
              asm("movw $0x60,%%dx     \n                inb  %%dx,%%al      \n                movw %%ax,%0        ": "=g"(tmp) : :"ax","dx");


              } while ((tmp & 0x80) == 0);
              do {
                asm("movw $0x60,%%dx     \n                  inb  %%dx,%%al      \n                  movw %%ax,%0        ": "=g"(tmp) : :"ax","dx");


                } while ((tmp & 0x80) == 0x80);
                count_char = 0;
              };
              break;
              case '\r':
              pos_cur = pos_cur - (pos_cur % 160);
              default:
              screen[pos_cur] = car;
              screen[pos_cur+1] = 12;
              pos_cur = pos_cur + 2;
            };


            if (pos_cur>=4000) {
              for (i=160;i<4000;i++) screen[i-160]=screen[i];
              for (i=(4000-160);i<4000;i+=2) {
                screen[i] = ' ';
                screen[i + 1] = 15;
              };
              pos_cur = pos_cur - 160;
            };


            pos_cur = pos_cur >> 1;

            tmp = pos_cur;
            asm("movw %0,%%ax        \n              movb $0x0E,%%al     \n              movw $0x3D4,%%dx    \n              outw %%ax,%%dx      ": : "g"(tmp) : "dx","ax");




              tmp = (pos_cur << 8) & 0xFF00;
              asm("movw %0,%%ax        \n                movb $0x0F,%%al     \n                movw $0x3D4,%%dx    \n                outw %%ax,%%dx      ": : "g"(tmp) : "dx","ax");



              };

              void print_nb(int n)
              { int d;
                char car;

                d = 10000000;
                while (d != 0) {
                  car = n / d;
                  print_char(car+'0');
                  n = n % d;
                  d = d / 10;
                };
              };


              int die_with_code(int code)
              {
                while (1);
              };
# 276 "startup.c"
struct ___OBJ {
  unsigned int __id;
};

typedef struct ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE_struct __FAST_ARRAYoExpanded_UINTEGER_8o__LDE;
typedef struct STRING__WH_struct __STRING__WH;
typedef struct FILE_SYSTEM__2B_struct __FILE_SYSTEM__2B;
typedef struct STRING_CONSTANT__Y_struct __STRING_CONSTANT__Y;
typedef struct HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG_struct __HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG;
typedef struct DIRECTORY_UNIX__GHB_struct __DIRECTORY_UNIX__GHB;
typedef struct FAT12__UFE_struct __FAT12__UFE;
typedef struct DIRECTORY_FAT__XFE_struct __DIRECTORY_FAT__XFE;
typedef struct FAT16__OGE_struct __FAT16__OGE;
typedef struct FAT32__4GE_struct __FAT32__4GE;
typedef struct EXT2__OHE_struct __EXT2__OHE;
typedef struct DIRECTORY_EXT2__QHE_struct __DIRECTORY_EXT2__QHE;
typedef struct LINKED_LISToENTRYo__AH_struct __LINKED_LISToENTRYo__AH;
typedef struct LINKED_LIST_NODEoENTRYo__HGX_struct __LINKED_LIST_NODEoENTRYo__HGX;
typedef struct MEMORY__0AB_struct __MEMORY__0AB;
typedef struct HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F_struct __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F;
typedef struct DRIVE__HPD_struct __DRIVE__HPD;
typedef struct CACHE_SECTOR__BZG_struct __CACHE_SECTOR__BZG;
typedef struct FILE_UNIX__OQB_struct __FILE_UNIX__OQB;
typedef struct SFN_FAT__BVBB_struct __SFN_FAT__BVBB;
typedef struct STD_FILE_FAT__RZBB_struct __STD_FILE_FAT__RZBB;
typedef struct INODE__DTQB_struct __INODE__DTQB;
typedef struct STD_FILE_EXT2__EZQB_struct __STD_FILE_EXT2__EZQB;
typedef struct DESC_INT__KL_struct __DESC_INT__KL;
typedef struct DIRECTORY__WB_struct __DIRECTORY__WB;
typedef struct ENTRY__XB_struct __ENTRY__XB;
typedef struct LINKED_COLLECTIONoENTRYo__BH_struct __LINKED_COLLECTIONoENTRYo__BH;
typedef struct CONTROLER__EPD_struct __CONTROLER__EPD;
typedef struct ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE_struct __ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE;
typedef struct MBR__ZCE_struct __MBR__ZCE;
typedef struct ENTRY_FAT__YFE_struct __ENTRY_FAT__YFE;
typedef struct PARTITION_FAT__WFE_struct __PARTITION_FAT__WFE;
typedef struct PARTITION__EDE_struct __PARTITION__EDE;
typedef struct FAT__VFE_struct __FAT__VFE;
typedef struct BOOT__SHCB_struct __BOOT__SHCB;
typedef struct ENTRY_EXT2__RHE_struct __ENTRY_EXT2__RHE;
typedef struct PARTITION_EXT2__PHE_struct __PARTITION_EXT2__PHE;
typedef struct SUPERBLOCK__YFRB_struct __SUPERBLOCK__YFRB;
typedef struct GROUP_DESCRIPTOR__OSRB_struct __GROUP_DESCRIPTOR__OSRB;
typedef struct X86_FILE_SYSTEM_FILE_SYSTEM__1J_struct __X86_FILE_SYSTEM_FILE_SYSTEM__1J;
typedef struct ENTRY__XB_struct __ENTRY_UNIX__HHB;
typedef struct BIOS_CONTROLER__MPD_struct __BIOS_CONTROLER__MPD;
typedef struct HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG_struct __HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG;





typedef void * __POINTER__GB;
typedef unsigned long __UINTEGER_CPU__3AB;
typedef unsigned int __UINTEGER_32__U;
typedef signed int __INTEGER__K;
typedef unsigned char __UINTEGER_8__CD;


struct ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE_struct {
  __INTEGER__K upper__4KT;
  __INTEGER__K capacity__KLT;
  __UINTEGER_8__CD *storage__1MT;
};


typedef unsigned char __CHARACTER__BB;


struct STRING__WH_struct {
  unsigned int __id;
  __INTEGER__K count__FK;
  __INTEGER__K capacity__KSS;
  __CHARACTER__BB *storage__VSS;
};
typedef char __BOOLEAN__C;


struct ENTRY__XB_struct {
  __STRING_CONSTANT__Y *path__YG;
  __STRING_CONSTANT__Y *name__NOD;
};


struct DIRECTORY__WB_struct {
  __LINKED_LISToENTRYo__AH *list__GH;
};


struct FILE_SYSTEM__2B_struct {
  unsigned int __id;
  __ENTRY__XB parent_entry__3B;
  __DIRECTORY__WB parent_directory__4B;
};


struct STRING_CONSTANT__Y_struct {
  unsigned int __id;
  __INTEGER__K count__LC;
  __CHARACTER__BB *storage__MC;
};


struct HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG_struct {
  __INTEGER__K capacity__W3F;
  __INTEGER__K count__3BG;
  void **buckets__43F;
};




struct DIRECTORY_UNIX__GHB_struct {
  unsigned int __id;
  __ENTRY_UNIX__HHB parent_entry_unix__JHB;
  __DIRECTORY__WB parent_directory__KHB;
};


struct ENTRY_FAT__YFE_struct {
  __ENTRY__XB parent_abstract_entry__ZFE;
  __UINTEGER_32__U position__LWBB;
};


struct DIRECTORY_FAT__XFE_struct {
  unsigned int __id;
  __ENTRY_FAT__YFE parent_entry_fat__0FE;
  __DIRECTORY__WB parent_directory__1FE;
};


struct PARTITION__EDE_struct {
  __DRIVE__HPD *drive__JLCB;
  __UINTEGER_32__U first_sector__KLCB;
  __UINTEGER_32__U step__XLCB;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *buffer__VWBB;
};


struct PARTITION_FAT__WFE_struct {
  __DIRECTORY_FAT__XFE parent_directory_fat__2FE;
  __PARTITION__EDE parent_partition_fat__3FE;
  __UINTEGER_32__U cluster__GOJB;
};
typedef unsigned short __UINTEGER_16__5F;


struct FAT__VFE_struct {
  __PARTITION_FAT__WFE parent_partition__4FE;
  __UINTEGER_32__U fat_sector__5LCB;
  __UINTEGER_32__U fat_size__DMCB;
  __UINTEGER_32__U root_offset__2MCB;
  __UINTEGER_32__U root_block__ANCB;
  __UINTEGER_32__U block_offset__MNCB;
  __UINTEGER_32__U fat_cache_index__G0VB;
  __UINTEGER_16__5F root_size__5MCB;
  __UINTEGER_8__CD fat_number__BMCB;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *fat_cache__MMCB;
};


struct FAT12__UFE_struct {
  unsigned int __id;
  __FAT__VFE parent_fat__5FE;
};


struct FAT16__OGE_struct {
  unsigned int __id;
  __FAT__VFE parent_fat__PGE;
};


struct FAT32__4GE_struct {
  unsigned int __id;
  __FAT__VFE parent_fat__5GE;
};


struct ENTRY_EXT2__RHE_struct {
  __ENTRY__XB parent_abstract_entry__SHE;
  __INODE__DTQB *inode__FUQB;
  __UINTEGER_32__U no_inode__SRRB;
};


struct DIRECTORY_EXT2__QHE_struct {
  unsigned int __id;
  __ENTRY_EXT2__RHE parent_entry_ext2__THE;
  __DIRECTORY__WB parent_directory__UHE;
};


struct PARTITION_EXT2__PHE_struct {
  __DIRECTORY_EXT2__QHE parent_directory_ext2__VHE;
  __PARTITION__EDE parent_partition__WHE;
  __UINTEGER_32__U first_block_sector__MHRB;
  __SUPERBLOCK__YFRB *superblock__MIRB;
  __UINTEGER_32__U block_type__P5VB;
  __UINTEGER_32__U block__W5VB;
  __UINTEGER_32__U array_block1__EAWB;
  __UINTEGER_32__U array_block2__BBWB;
  __UINTEGER_32__U array_block3__ECWB;
};


struct EXT2__OHE_struct {
  unsigned int __id;
  __PARTITION_EXT2__PHE parent_partition_ext2__XHE;
};


struct LINKED_COLLECTIONoENTRYo__BH_struct {
  __INTEGER__K upper__BKK;
};


struct LINKED_LISToENTRYo__AH_struct {
  __LINKED_COLLECTIONoENTRYo__BH parent_linked_collection__FH;
  __INTEGER__K mem_idx__SGX;
  __LINKED_LIST_NODEoENTRYo__HGX *first_link__LGX;
  __LINKED_LIST_NODEoENTRYo__HGX *mem_lnk__TGX;
  __LINKED_LIST_NODEoENTRYo__HGX *last_link__UGX;
};


struct LINKED_LIST_NODEoENTRYo__HGX_struct {
  void *item__2ZAB;
  __LINKED_LIST_NODEoENTRYo__HGX *next__5GBB;
};


struct MEMORY__0AB_struct {
  __MEMORY__0AB *previous_linear__2AB;
  volatile __UINTEGER_CPU__3AB size_and_id__5AB;
  __MEMORY__0AB *next_free__ABB;
  __MEMORY__0AB *previous_free__BBB;
} __attribute__ ((packed));


struct HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F_struct {
  __STRING_CONSTANT__Y *key__K4F;
  void *item__44F;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *next__W4F;
};


struct DRIVE__HPD_struct {
  void *parent_controler__IPD;
  __UINTEGER_32__U cursor__R0G;
  __UINTEGER_8__CD n_drive__EZG;
};


struct CACHE_SECTOR__BZG_struct {
  void *Nothing;
};


struct FILE_UNIX__OQB_struct {
  unsigned int __id;
  __ENTRY_UNIX__HHB parent_entry_unix__PQB;
};


struct SFN_FAT__BVBB_struct {
  volatile __CHARACTER__BB name0__DVBB;
  volatile __CHARACTER__BB name1__EVBB;
  volatile __CHARACTER__BB name2__FVBB;
  volatile __CHARACTER__BB name3__GVBB;
  volatile __CHARACTER__BB name4__HVBB;
  volatile __CHARACTER__BB name5__IVBB;
  volatile __CHARACTER__BB name6__JVBB;
  volatile __CHARACTER__BB name7__KVBB;
  volatile __CHARACTER__BB name8__LVBB;
  volatile __CHARACTER__BB name9__MVBB;
  volatile __CHARACTER__BB name10__NVBB;
  volatile __UINTEGER_8__CD attr__OVBB;
  volatile __UINTEGER_8__CD first_char__PVBB;
  volatile __UINTEGER_8__CD fat_creation_time_ms__QVBB;
  volatile __UINTEGER_16__5F fat_creation_time__RVBB;
  volatile __UINTEGER_16__5F fat_creation_date__SVBB;
  volatile __UINTEGER_16__5F fat_access_date__TVBB;
  volatile __UINTEGER_16__5F high_cluster__UVBB;
  volatile __UINTEGER_16__5F fat_update_time__VVBB;
  volatile __UINTEGER_16__5F fat_update_date__WVBB;
  volatile __UINTEGER_16__5F cluster__XVBB;
  volatile __UINTEGER_32__U map_size__YVBB;
} __attribute__ ((packed));


struct STD_FILE_FAT__RZBB_struct {
  unsigned int __id;
  __ENTRY_FAT__YFE parent_entry__SZBB;
};
typedef unsigned long long __UINTEGER_64__BG;


struct INODE__DTQB_struct {
  volatile __UINTEGER_16__5F i_mode__ETQB;
  volatile __UINTEGER_16__5F i_uid__FTQB;
  volatile __UINTEGER_32__U i_size__GTQB;
  volatile __UINTEGER_32__U i_atime__HTQB;
  volatile __UINTEGER_32__U i_ctime__ITQB;
  volatile __UINTEGER_32__U i_mtime__JTQB;
  volatile __UINTEGER_32__U i_dtime__KTQB;
  volatile __UINTEGER_16__5F i_gid__LTQB;
  volatile __UINTEGER_16__5F i_links_count__MTQB;
  volatile __UINTEGER_32__U i_blocks__NTQB;
  volatile __UINTEGER_32__U i_flags__OTQB;
  volatile __UINTEGER_32__U i_osd1__PTQB;
  volatile __UINTEGER_32__U i_block1__QTQB;
  volatile __UINTEGER_32__U i_block2__RTQB;
  volatile __UINTEGER_32__U i_block3__STQB;
  volatile __UINTEGER_32__U i_block4__TTQB;
  volatile __UINTEGER_32__U i_block5__UTQB;
  volatile __UINTEGER_32__U i_block6__VTQB;
  volatile __UINTEGER_32__U i_block7__WTQB;
  volatile __UINTEGER_32__U i_block8__XTQB;
  volatile __UINTEGER_32__U i_block9__YTQB;
  volatile __UINTEGER_32__U i_blocka__ZTQB;
  volatile __UINTEGER_32__U i_blockb__0TQB;
  volatile __UINTEGER_32__U i_blockc__1TQB;
  volatile __UINTEGER_32__U i_blockd__2TQB;
  volatile __UINTEGER_32__U i_blocke__3TQB;
  volatile __UINTEGER_32__U i_blockf__4TQB;
  volatile __UINTEGER_32__U i_generation__5TQB;
  volatile __UINTEGER_32__U i_file_acl__AUQB;
  volatile __UINTEGER_32__U i_dir_acl__BUQB;
  volatile __UINTEGER_32__U i_faddr__CUQB;
  volatile __UINTEGER_64__BG i_osd20__DUQB;
  volatile __UINTEGER_32__U i_osd21__EUQB;
} __attribute__ ((packed));


struct STD_FILE_EXT2__EZQB_struct {
  unsigned int __id;
  __ENTRY_EXT2__RHE parent_entry_ext2__FZQB;
};


struct DESC_INT__KL_struct {
  volatile __UINTEGER_16__5F offset_0_15__ML;
  volatile __UINTEGER_16__5F desc__NL;
  volatile __UINTEGER_8__CD reserved__OL;
  volatile __UINTEGER_8__CD p_dpl_0_type__PL;
  volatile __UINTEGER_16__5F offset_16_31__QL;
} __attribute__ ((packed));


struct CONTROLER__EPD_struct {
  unsigned int __id;
};


struct MBR__ZCE_struct {
  volatile __UINTEGER_8__CD flag_boot__1CE;
  volatile __UINTEGER_8__CD head_begin__2CE;
  volatile __UINTEGER_16__5F cylinder_sector_begin__3CE;
  volatile __UINTEGER_8__CD map_type__4CE;
  volatile __UINTEGER_8__CD head_end__5CE;
  volatile __UINTEGER_16__5F cylinder_sector_end__ADE;
  volatile __UINTEGER_32__U map_mbr_first_sector__BDE;
  volatile __UINTEGER_32__U size__CDE;
} __attribute__ ((packed));


struct BOOT__SHCB_struct {
  volatile __UINTEGER_8__CD jump_0__UHCB;
  volatile __UINTEGER_16__5F jump_1__VHCB;
  volatile __CHARACTER__BB oem_00__WHCB;
  volatile __CHARACTER__BB oem_01__XHCB;
  volatile __CHARACTER__BB oem_02__YHCB;
  volatile __CHARACTER__BB oem_03__ZHCB;
  volatile __CHARACTER__BB oem_04__0HCB;
  volatile __CHARACTER__BB oem_05__1HCB;
  volatile __CHARACTER__BB oem_06__2HCB;
  volatile __CHARACTER__BB oem_07__3HCB;
  volatile __UINTEGER_16__5F bytes_per_sector__4HCB;
  volatile __UINTEGER_8__CD get_sectors_per_cluster__5HCB;
  volatile __UINTEGER_16__5F get_sectors_reserved__AICB;
  volatile __UINTEGER_8__CD get_nb_fat__BICB;
  volatile __UINTEGER_16__5F get_nb_root_entries__CICB;
  volatile __UINTEGER_16__5F nb_sectors__DICB;
  volatile __UINTEGER_8__CD descriptor__EICB;
  volatile __UINTEGER_16__5F get_sectors_per_fat__FICB;
  volatile __UINTEGER_16__5F sectors_per_track__GICB;
  volatile __UINTEGER_16__5F nb_head__HICB;
  volatile __UINTEGER_32__U hidden_sectors__IICB;
  volatile __UINTEGER_32__U nb_sectors_big__JICB;
  volatile __UINTEGER_32__U get_sectors_per_fat32__KICB;
  volatile __UINTEGER_16__5F flags_fat__LICB;
  volatile __UINTEGER_16__5F version_fat__MICB;
  volatile __UINTEGER_32__U get_cluster_start_root__NICB;
  volatile __UINTEGER_16__5F fs_info_sector__OICB;
  volatile __UINTEGER_16__5F reserved_00__PICB;
  volatile __UINTEGER_32__U reserved_01__QICB;
  volatile __UINTEGER_32__U reserved_02__RICB;
  volatile __UINTEGER_32__U reserved_03__SICB;
  volatile __UINTEGER_8__CD bios_drive__TICB;
  volatile __UINTEGER_8__CD reserved_04__UICB;
  volatile __UINTEGER_8__CD ext_boot_signature__VICB;
  volatile __UINTEGER_32__U serial_number__WICB;
  volatile __CHARACTER__BB vol_label_00__XICB;
  volatile __CHARACTER__BB vol_label_01__YICB;
  volatile __CHARACTER__BB vol_label_02__ZICB;
  volatile __CHARACTER__BB vol_label_03__0ICB;
  volatile __CHARACTER__BB vol_label_04__1ICB;
  volatile __CHARACTER__BB vol_label_05__2ICB;
  volatile __CHARACTER__BB vol_label_06__3ICB;
  volatile __CHARACTER__BB vol_label_07__4ICB;
  volatile __CHARACTER__BB vol_label_08__5ICB;
  volatile __CHARACTER__BB vol_label_09__AJCB;
  volatile __CHARACTER__BB vol_label_10__BJCB;
  volatile __CHARACTER__BB fs_label_00__CJCB;
  volatile __CHARACTER__BB fs_label_01__DJCB;
  volatile __CHARACTER__BB fs_label_02__EJCB;
  volatile __CHARACTER__BB fs_label_03__FJCB;
  volatile __CHARACTER__BB fs_label_04__GJCB;
  volatile __CHARACTER__BB fs_label_05__HJCB;
  volatile __CHARACTER__BB fs_label_06__IJCB;
  volatile __CHARACTER__BB fs_label_07__JJCB;
  volatile __UINTEGER_32__U sector_cluster__KJCB;
  volatile __UINTEGER_32__U sector_root__LJCB;
  volatile __UINTEGER_32__U sector_fat__MJCB;
  volatile __UINTEGER_32__U cluster__NJCB;
  volatile __UINTEGER_64__BG code000__OJCB;
  volatile __UINTEGER_64__BG code001__PJCB;
  volatile __UINTEGER_64__BG code002__QJCB;
  volatile __UINTEGER_64__BG code003__RJCB;
  volatile __UINTEGER_64__BG code004__SJCB;
  volatile __UINTEGER_64__BG code005__TJCB;
  volatile __UINTEGER_64__BG code006__UJCB;
  volatile __UINTEGER_64__BG code007__VJCB;
  volatile __UINTEGER_64__BG code008__WJCB;
  volatile __UINTEGER_64__BG code009__XJCB;
  volatile __UINTEGER_64__BG code010__YJCB;
  volatile __UINTEGER_64__BG code011__ZJCB;
  volatile __UINTEGER_64__BG code012__0JCB;
  volatile __UINTEGER_64__BG code013__1JCB;
  volatile __UINTEGER_64__BG code014__2JCB;
  volatile __UINTEGER_64__BG code015__3JCB;
  volatile __UINTEGER_64__BG code016__4JCB;
  volatile __UINTEGER_64__BG code017__5JCB;
  volatile __UINTEGER_64__BG code018__AKCB;
  volatile __UINTEGER_64__BG code019__BKCB;
  volatile __UINTEGER_64__BG code020__CKCB;
  volatile __UINTEGER_64__BG code021__DKCB;
  volatile __UINTEGER_64__BG code022__EKCB;
  volatile __UINTEGER_64__BG code023__FKCB;
  volatile __UINTEGER_64__BG code024__GKCB;
  volatile __UINTEGER_64__BG code025__HKCB;
  volatile __UINTEGER_64__BG code026__IKCB;
  volatile __UINTEGER_64__BG code027__JKCB;
  volatile __UINTEGER_64__BG code028__KKCB;
  volatile __UINTEGER_64__BG code029__LKCB;
  volatile __UINTEGER_64__BG code030__MKCB;
  volatile __UINTEGER_64__BG code031__NKCB;
  volatile __UINTEGER_64__BG code032__OKCB;
  volatile __UINTEGER_64__BG code033__PKCB;
  volatile __UINTEGER_64__BG code034__QKCB;
  volatile __UINTEGER_64__BG code035__RKCB;
  volatile __UINTEGER_64__BG code036__SKCB;
  volatile __UINTEGER_64__BG code037__TKCB;
  volatile __UINTEGER_64__BG code038__UKCB;
  volatile __UINTEGER_64__BG code039__VKCB;
  volatile __UINTEGER_64__BG code040__WKCB;
  volatile __UINTEGER_64__BG code041__XKCB;
  volatile __UINTEGER_64__BG code042__YKCB;
  volatile __UINTEGER_64__BG code043__ZKCB;
  volatile __UINTEGER_64__BG code044__0KCB;
  volatile __UINTEGER_64__BG code045__1KCB;
  volatile __UINTEGER_64__BG code046__2KCB;
  volatile __UINTEGER_64__BG code047__3KCB;
  volatile __UINTEGER_64__BG code048__4KCB;
  volatile __UINTEGER_64__BG code049__5KCB;
  volatile __UINTEGER_32__U code050__ALCB;
  volatile __UINTEGER_16__5F code051__BLCB;
} __attribute__ ((packed));


struct SUPERBLOCK__YFRB_struct {
  volatile __UINTEGER_32__U s_inodes_count__ZFRB;
  volatile __UINTEGER_32__U s_blocks_count__0FRB;
  volatile __UINTEGER_32__U s_r_blocks_count__1FRB;
  volatile __UINTEGER_32__U s_free_blocks_count__2FRB;
  volatile __UINTEGER_32__U s_free_inodes_count__3FRB;
  volatile __UINTEGER_32__U s_first_data_block__4FRB;
  volatile __UINTEGER_32__U s_log_block_size__5FRB;
  volatile __UINTEGER_32__U s_log_frag_size__AGRB;
  volatile __UINTEGER_32__U s_blocks_per_group__BGRB;
  volatile __UINTEGER_32__U s_frags_per_group__CGRB;
  volatile __UINTEGER_32__U s_inodes_per_group__DGRB;
  volatile __UINTEGER_32__U s_mtime__EGRB;
  volatile __UINTEGER_32__U s_wtime__FGRB;
  volatile __UINTEGER_16__5F s_mnt_count__GGRB;
  volatile __UINTEGER_16__5F s_max_mnt_count__HGRB;
  volatile __UINTEGER_16__5F s_magic__IGRB;
  volatile __UINTEGER_16__5F s_state__JGRB;
  volatile __UINTEGER_16__5F s_errors__KGRB;
  volatile __UINTEGER_16__5F s_minor_rev_level__LGRB;
  volatile __UINTEGER_32__U s_lastcheck__MGRB;
  volatile __UINTEGER_32__U s_checkinterval__NGRB;
  volatile __UINTEGER_32__U s_creator_os__OGRB;
  volatile __UINTEGER_32__U s_rev_level__PGRB;
  volatile __UINTEGER_16__5F s_def_resuid__QGRB;
  volatile __UINTEGER_16__5F s_def_resgid__RGRB;
  volatile __UINTEGER_32__U s_first_ino__SGRB;
  volatile __UINTEGER_16__5F s_inode_size__TGRB;
  volatile __UINTEGER_16__5F s_block_group_nr__UGRB;
  volatile __UINTEGER_32__U s_feature_compat__VGRB;
  volatile __UINTEGER_32__U s_feature_incompat__WGRB;
  volatile __UINTEGER_32__U s_feature_ro_compat__XGRB;
  volatile __UINTEGER_64__BG s_uuid1__YGRB;
  volatile __UINTEGER_64__BG s_uuid2__ZGRB;
  volatile __UINTEGER_64__BG s_volume_name1__0GRB;
  volatile __UINTEGER_64__BG s_volume_name2__1GRB;
  volatile __UINTEGER_64__BG s_last_mounted1__2GRB;
  volatile __UINTEGER_64__BG s_last_mounted2__3GRB;
  volatile __UINTEGER_64__BG s_last_mounted3__4GRB;
  volatile __UINTEGER_64__BG s_last_mounted4__5GRB;
  volatile __UINTEGER_64__BG s_last_mounted5__AHRB;
  volatile __UINTEGER_64__BG s_last_mounted6__BHRB;
  volatile __UINTEGER_64__BG s_last_mounted7__CHRB;
  volatile __UINTEGER_64__BG s_last_mounted8__DHRB;
  volatile __UINTEGER_32__U s_algo_bitmap__EHRB;
  volatile __UINTEGER_8__CD s_prealloc_blocks__FHRB;
  volatile __UINTEGER_8__CD s_prealloc_dir_blocks__GHRB;
  volatile __UINTEGER_16__5F alignment__HHRB;
} __attribute__ ((packed));


struct GROUP_DESCRIPTOR__OSRB_struct {
  volatile __UINTEGER_32__U bg_block_bitmap__PSRB;
  volatile __UINTEGER_32__U bg_inode_bitmap__QSRB;
  volatile __UINTEGER_32__U bg_inode_table__RSRB;
  volatile __UINTEGER_16__5F bg_free_blocks_count__SSRB;
  volatile __UINTEGER_16__5F bg_free_inodes_count__TSRB;
  volatile __UINTEGER_16__5F bg_used_dirs_count__USRB;
  volatile __UINTEGER_16__5F bg_pad__VSRB;
  volatile __UINTEGER_64__BG bg_reserved0__WSRB;
  volatile __UINTEGER_32__U bg_reserved1__XSRB;
} __attribute__ ((packed));


struct X86_FILE_SYSTEM_FILE_SYSTEM__1J_struct {
  int parent_directory__0HB;
};




struct BIOS_CONTROLER__MPD_struct {
  unsigned int __id;
};


struct HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG_struct {
  void *Nothing;
};
typedef signed char __INTEGER_8__3F;
typedef signed int __INTEGER_32__Q;
typedef unsigned long __DATE__YNCB;
typedef unsigned long __TIME__UNCB;

void *table_type[28];





__ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE_;


__FAST_ARRAYoExpanded_UINTEGER_8o__LDE FAST_ARRAYoExpanded_UINTEGER_8o__LDE_;


__STRING__WH STRING__WH_={4};


__ENTRY__XB ENTRY__XB_;


__DIRECTORY__WB DIRECTORY__WB_;


__FILE_SYSTEM__2B FILE_SYSTEM__2B_={5};


__STRING_CONSTANT__Y STRING_CONSTANT__Y_={6};


__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG_;


__ENTRY_UNIX__HHB ENTRY_UNIX__HHB_;


__DIRECTORY_UNIX__GHB DIRECTORY_UNIX__GHB_={7};


__ENTRY_FAT__YFE ENTRY_FAT__YFE_;


__DIRECTORY_FAT__XFE DIRECTORY_FAT__XFE_={8};


__PARTITION__EDE PARTITION__EDE_;


__PARTITION_FAT__WFE PARTITION_FAT__WFE_;


__FAT__VFE FAT__VFE_;


__FAT12__UFE FAT12__UFE_={9};


__FAT16__OGE FAT16__OGE_={10};


__FAT32__4GE FAT32__4GE_={11};


__ENTRY_EXT2__RHE ENTRY_EXT2__RHE_;


__DIRECTORY_EXT2__QHE DIRECTORY_EXT2__QHE_={12};


__PARTITION_EXT2__PHE PARTITION_EXT2__PHE_;


__EXT2__OHE EXT2__OHE_={13};


__LINKED_COLLECTIONoENTRYo__BH LINKED_COLLECTIONoENTRYo__BH_;


__LINKED_LISToENTRYo__AH LINKED_LISToENTRYo__AH_;


__LINKED_LIST_NODEoENTRYo__HGX LINKED_LIST_NODEoENTRYo__HGX_;


__MEMORY__0AB MEMORY__0AB_;


__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F_;


__DRIVE__HPD DRIVE__HPD_;


__CACHE_SECTOR__BZG CACHE_SECTOR__BZG_;


__FILE_UNIX__OQB FILE_UNIX__OQB_={14};


__SFN_FAT__BVBB SFN_FAT__BVBB_;


__STD_FILE_FAT__RZBB STD_FILE_FAT__RZBB_={15};


__INODE__DTQB INODE__DTQB_;


__STD_FILE_EXT2__EZQB STD_FILE_EXT2__EZQB_={16};


__DESC_INT__KL DESC_INT__KL_;


__CONTROLER__EPD CONTROLER__EPD_={17};


__MBR__ZCE MBR__ZCE_;


__BOOT__SHCB BOOT__SHCB_;


__SUPERBLOCK__YFRB SUPERBLOCK__YFRB_;


__GROUP_DESCRIPTOR__OSRB GROUP_DESCRIPTOR__OSRB_;


__X86_FILE_SYSTEM_FILE_SYSTEM__1J X86_FILE_SYSTEM_FILE_SYSTEM__1J_;


__BIOS_CONTROLER__MPD BIOS_CONTROLER__MPD_={18};


__HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG_;


__UINTEGER_16__5F ax__KAB;
__INTEGER__K top_stack__BKB;
__UINTEGER_16__5F *stack__MKB;
__UINTEGER_16__5F cx__EJB;
__UINTEGER_16__5F dx__HJB;
__UINTEGER_16__5F bx__KJB;
__UINTEGER_16__5F bp__PJB;
__UINTEGER_16__5F si__SJB;
__UINTEGER_16__5F di__VJB;
__UINTEGER_16__5F es__EBB;
__UINTEGER_16__5F ds__HBB;
__UINTEGER_16__5F flags__KBB;
__UINTEGER_CPU__3AB nb_page__ZEF;
__UINTEGER_CPU__3AB capacity_max__NCJ;
__POINTER__GB get_begin_memory__2FM;
__POINTER__GB begin_memory__5AC;
__MEMORY__0AB *first_free__USI;
__UINTEGER_16__5F *idtr_mem__1KB;
__DESC_INT__KL *idt__WL;
__UINTEGER_CPU__3AB clone_allocation_size__ATC;
__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *alias__WG;
__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *buffer__UDE;
__STRING__WH *string_tmp__BHB;
__STRING__WH *string_tmp2__1H;
__STRING__WH *string_tmp3__BI;





__STRING_CONSTANT__Y __string_1={6,18,"FILE SYSTEM close"
"\n"};
__STRING_CONSTANT__Y __string_2={6,5,"icons"};
__STRING_CONSTANT__Y __string_3={6,19,"\n"
"directory is NULL\n"};
__STRING_CONSTANT__Y __string_4={6,1,"."};
__STRING_CONSTANT__Y __string_5={6,9,"WARNING: "};
__STRING_CONSTANT__Y __string_6={6,14," no readable!\n"};
__STRING_CONSTANT__Y __string_7={6,1,"/"};
__STRING_CONSTANT__Y __string_8={6,10,"Mount IDE "};
__STRING_CONSTANT__Y __string_9={6,14,"GROSSE MERDE!\n"};
__STRING_CONSTANT__Y __string_10={6,2,"/."};
__STRING_CONSTANT__Y __string_11={6,3,"/.."};
__STRING_CONSTANT__Y __string_12={6,24,"extended partiti"
"on type\n"};
__STRING_CONSTANT__Y __string_13={6,17,"\t\tFAT12 detect"
"ed\n"};
__STRING_CONSTANT__Y __string_14={6,17,"\t\tFAT16 detect"
"ed\n"};
__STRING_CONSTANT__Y __string_15={6,18,"\t\tFAT32 detect"
"ed.\n"};
__STRING_CONSTANT__Y __string_16={6,17,"\t\tEXT2 detecte"
"d.\n"};
__STRING_CONSTANT__Y __string_17={6,30,"\t\tUnknown part"
"ition detected ("};
__STRING_CONSTANT__Y __string_18={6,3,"h)\n"};
__STRING_CONSTANT__Y __string_19={6,19,"Not enough memor"
"y.\n"};
__STRING_CONSTANT__Y __string_20={6,5,"/ext2"};
__STRING_CONSTANT__Y __string_21={6,7,"Unknown"};
__STRING_CONSTANT__Y __string_22={6,14,"Slot deferred."};






static __POINTER__GB alloc_dynamic__52B(__UINTEGER_CPU__3AB sz__B3B);
static __POINTER__GB micro_alloc__table__lab__KSE(__UINTEGER_CPU__3AB new_size__MSE,__POINTER__GB ptr_table__NSE,__UINTEGER_32__U lab_type__OSE);
static __INTEGER__K prime_number_ceiling__5BI(__INTEGER__K integer__BCI);
static void** create__KNI(__INTEGER__K nb_elements__MNI);
static __FAST_ARRAYoExpanded_UINTEGER_8o__LDE* create_with_capacity__JBF(__INTEGER__K new_count__LBF);
static __STRING__WH* create__4FB(__INTEGER__K needed_capacity__AGB);
void exception_01__CL();
void exception_0d__BM();
void exception_00__EM();
void exception_02__HM();
void exception_03__KM();
void exception_04__NM();
void exception_05__QM();
void exception_06__TM();
void exception_07__WM();
void exception_08__ZM();
void exception_09__2M();
void exception_0a__5M();
void exception_0b__CN();
void exception_0c__FN();
void exception_0e__IN();
void exception_0f__LN();
void exception_10__ON();
void exception_11__RN();
void exception_12_1f__UN();
void mode_text__BO();
static __BOOLEAN__C open__FG(__FILE_SYSTEM__2B *Self__GG);
static __STRING__WH* to_string__4AE(__POINTER__GB Self__5AE);
static void print__NET(__STRING__WH *Self__OET);
static void print__SKC(__STRING_CONSTANT__Y *Self__TKC);
static void copy__5RS(__STRING__WH *Self__ASS,__STRING_CONSTANT__Y *other__BSS);
static void add_last__KTS(__STRING__WH *Self__LTS,__CHARACTER__BB ch__MTS);
static void append__PUS(__STRING__WH *Self__QUS,void *other__RUS);
static void reduce_path__YR(__STRING__WH *st__0R);
static void copy__1VS(__STRING__WH *Self__2VS,__STRING__WH *other__3VS);
static void* reference_at__E3F(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__F3F,__STRING__WH *k__G3F);
static __INTEGER__K fast_reverse_index_of__from__TAW(__CHARACTER__BB *Self__UAW,__INTEGER__K upper__WAW);
static void keep_head__3CT(__STRING__WH *Self__4CT,__INTEGER__K n__5CT);
static __DIRECTORY_UNIX__GHB* parent_directory__2GB();
static void* physical_get_entry__HYN(__STRING__WH *new_path__JYN);
static void* physical_get_entry__11BB(__FILE_SYSTEM__2B *Self__21BB,__STRING__WH *new_path__31BB);
static void* physical_get_entry__1PB(__STRING__WH *new_path__3PB);
static void* physical_get_entry__X2BB(__FAT12__UFE *Self__Y2BB,__STRING__WH *new_path__Z2BB);
static void* physical_get_entry__MWVB(__DIRECTORY_FAT__XFE *Self__NWVB,__STRING__WH *new_path__OWVB);
static void* physical_get_entry__T1QB(__FAT16__OGE *Self__U1QB,__STRING__WH *new_path__V1QB);
static void* physical_get_entry__P2QB(__FAT32__4GE *Self__Q2QB,__STRING__WH *new_path__R2QB);
static void* physical_get_entry__K3QB(__EXT2__OHE *Self__L3QB,__STRING__WH *new_path__M3QB);
static void* physical_get_entry__OO1B(__DIRECTORY_EXT2__QHE *Self__PO1B,__STRING__WH *new_path__QO1B);
static __LINKED_LISToENTRYo__AH* create__BYD();
static __BOOLEAN__C fast_memcmp__until__GU2(__CHARACTER__BB *Self__HU2,__CHARACTER__BB *other__IU2,__INTEGER__K capacity__JU2);
static __CHARACTER__BB* create__MUX(__INTEGER__K nb_elements__OUX);
static __POINTER__GB realloc_dynamic__old_size__new_size__VJ0(__POINTER__GB p__XJ0,__UINTEGER_CPU__3AB old_sz__YJ0,__UINTEGER_CPU__3AB new_sz__ZJ0);
static void clear__to__NFCB(__CHARACTER__BB *Self__OFCB,__INTEGER__K lower__PFCB,__INTEGER__K upper__QFCB);
static void copy_from__until__3UX(__CHARACTER__BB *Self__4UX,__CHARACTER__BB *model__5UX,__INTEGER__K upper__AVX);
static void reduce_path__KSDB(__STRING__WH *st__MSDB);
static __LINKED_LIST_NODEoENTRYo__HGX* create__next__CWAB(void *i__EWAB);
static __BOOLEAN__C open__0UBB(__FAT12__UFE *Self__1UBB);
static __BOOLEAN__C open__RQVB(__DIRECTORY_FAT__XFE *Self__SQVB);
static __BOOLEAN__C open__BGQB(__FAT16__OGE *Self__CGQB);
static __BOOLEAN__C open__XLQB(__FAT32__4GE *Self__YLQB);
static __BOOLEAN__C open__MRQB(__EXT2__OHE *Self__NRQB);
static __BOOLEAN__C open__GG1B(__DIRECTORY_EXT2__QHE *Self__HG1B);
static void exit__I0();
static __MEMORY__0AB* search__RRI(__UINTEGER_CPU__3AB new_size__TRI);
static __POINTER__GB new_lab__KEF(__UINTEGER_32__U t__MEF);
static void clear_all__CSO(__UINTEGER_8__CD *Self__DSO,__INTEGER__K upper__ESO);
static void put_character__UKC(__CHARACTER__BB c__WKC);
static __STRING_CONSTANT__Y* create_copy__KXD(void *other__MXD);
static __STRING_CONSTANT__Y* clone__T2N();
static __INTEGER__K hash_code__BQT(__STRING_CONSTANT__Y *Self__CQT);
static __BOOLEAN__C __infix_equal_equal__2YAB(__STRING_CONSTANT__Y *Self__3YAB,void *other__4YAB);
static void increase_capacity__PXL(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__QXL);
static __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F* new_node__to__next__UIJ(void *v__WIJ,__STRING_CONSTANT__Y *k__XIJ,__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *nxt__YIJ);
static __DRIVE__HPD* clone__EXG();
static void with_capacity__MST(__INTEGER__K medium_size__OST);
static __CACHE_SECTOR__BZG* create__ZNK();
static void print_positif__JLQ(__INTEGER__K Self__KLQ);
static void read_partition__begin__VCE(__FILE_SYSTEM__2B *Self__WCE,__DRIVE__HPD *drv__XCE,__UINTEGER_32__U logical_sector__YCE);
static void replace_all__with__DXS(__STRING__WH *Self__EXS);
static void remove_first__20T(__STRING__WH *Self__30T,__INTEGER__K n__40T);
static void remove_between__to__4IT(__STRING__WH *Self__5IT,__INTEGER__K start__AJT,__INTEGER__K end__BJT);
static __INTEGER__K last_index_of__since__PGT(__STRING__WH *Self__QGT,__INTEGER__K start_index__SGT);
static __BOOLEAN__C is_letter__Z3P(__CHARACTER__BB Self__03P);
static void remove_last__JFT(__STRING__WH *Self__KFT,__INTEGER__K n__LFT);
static __INTEGER__K hash_code__DPT(__STRING__WH *Self__EPT);
static __CHARACTER__BB* to_external__L4S(__STRING__WH *Self__M4S);
static __FILE_UNIX__OQB* clone__KVC();
static __DIRECTORY_UNIX__GHB* clone__BXC();
static void set_path__UEG(__DIRECTORY_UNIX__GHB *Self__VEG,__STRING__WH *n__WEG);
static void set_path__OFG(__FILE_UNIX__OQB *Self__PFG,__STRING__WH *n__QFG);
static void put__to__LGG(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__MGG,void *v__NGG,__STRING_CONSTANT__Y *k__OGG);
static void reduce_path__IUEB(__STRING__WH *st__KUEB);
static void reduce_path__03WB(__STRING__WH *st__23WB);
static void reduce_path__NBSB(__STRING__WH *st__PBSB);
static void reduce_path__LKSB(__STRING__WH *st__NKSB);
static void copy__to__size__O20(__POINTER__GB src__Q20,__POINTER__GB dst__R20,__UINTEGER_CPU__3AB sz__S20);
static void to_busy__index__IIO(__MEMORY__0AB *Self__JIO,__POINTER__GB sz__KIO,__UINTEGER_CPU__3AB idx__LIO);
static void add_link_free__OMO(__MEMORY__0AB *Self__PMO);
static void delete_link_free__VDP(__MEMORY__0AB *Self__WDP);
static void read__0QJB(__FAT12__UFE *Self__1QJB);
static __BOOLEAN__C next_cluster__FRJB(__FAT12__UFE *Self__GRJB);
static void name_in__PSEB(__SFN_FAT__BVBB *Self__QSEB,__STRING__WH *result__RSEB);
static __BOOLEAN__C has__R1LB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__S1LB,__STRING__WH *k__T1LB);
static void append_in__CPNB(__INTEGER__K Self__DPNB,__STRING__WH *buffer__EPNB);
static void set_path__I1EB(__FAT12__UFE *Self__J1EB,__STRING__WH *n__K1EB);
static __BOOLEAN__C is_valid__WLKB(__SFN_FAT__BVBB *Self__XLKB);
static __DIRECTORY_FAT__XFE* create__with__2HUB(__STRING_CONSTANT__Y *parent_path__4HUB,__SFN_FAT__BVBB *e__5HUB);
static __STD_FILE_FAT__RZBB* create__with__KIUB(__STRING_CONSTANT__Y *parent_path__MIUB,__SFN_FAT__BVBB *e__NIUB);
static void add_last__3JTB(__LINKED_LISToENTRYo__AH *Self__4JTB,void *element__5JTB);
static void put__to__4LTB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__5LTB,void *v__AMTB,__STRING_CONSTANT__Y *k__BMTB);
static __INTEGER__K index_of__since__RJIB(__STRING__WH *Self__SJIB);
static void* at__2KIB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__3KIB,__STRING__WH *k__4KIB);
static void read__3XVB(__FAT16__OGE *Self__4XVB);
static void read__KYVB(__FAT32__4GE *Self__LYVB);
static __BOOLEAN__C next_cluster__VYVB(__FAT16__OGE *Self__WYVB);
static __BOOLEAN__C next_cluster__C1VB(__FAT32__4GE *Self__D1VB);
static void set_path__UEXB(__DIRECTORY_FAT__XFE *Self__VEXB,__STRING__WH *n__WEXB);
static void set_path__NISB(__FAT16__OGE *Self__OISB,__STRING__WH *n__PISB);
static void set_path__LRSB(__FAT32__4GE *Self__MRSB,__STRING__WH *n__NRSB);
static void set_block_type__FNWB(__EXT2__OHE *Self__GNWB,__UINTEGER_32__U b__HNWB);
static __UINTEGER_32__U get_block__BWUB(__INODE__DTQB *Self__CWUB,__UINTEGER_32__U index__DWUB);
static void set_block__L5VB(__EXT2__OHE *Self__M5VB,__UINTEGER_32__U b__N5VB);
static void read__QCWB(__EXT2__OHE *Self__RCWB);
static __BOOLEAN__C has_suffix__CEUB(__STRING__WH *Self__DEUB,void *s__EEUB);
static __DIRECTORY_EXT2__QHE* clone__NU0B();
static __STD_FILE_EXT2__EZQB* clone__HW0B();
static void set_path__1WZB(__EXT2__OHE *Self__2WZB,__STRING__WH *n__3WZB);
static void set_path__Z21B(__DIRECTORY_EXT2__QHE *Self__021B,__STRING__WH *n__121B);
static void set_path__T31B(__STD_FILE_EXT2__EZQB *Self__U31B,__STRING__WH *n__V31B);
static void add_last__0XZB(__LINKED_LISToENTRYo__AH *Self__1XZB,void *element__2XZB);
static void put__to__4ZZB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__5ZZB,void *v__A0ZB,__STRING_CONSTANT__Y *k__B0ZB);
static void* item__NBBB(__LINKED_LISToENTRYo__AH *Self__OBBB,__INTEGER__K i__PBBB);
static void make_inode__4RRB(__EXT2__OHE *Self__5RRB);
static void make_inode__XQ1B(__DIRECTORY_EXT2__QHE *Self__YQ1B);
static void make_inode__VT1B(__STD_FILE_EXT2__EZQB *Self__WT1B);
static void* get_partition__RE2B(void *e__TE2B);
static __MEMORY__0AB* new_page__DCJ();
static __UINTEGER_32__U read__size__S0G(__DRIVE__HPD *Self__T0G,__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *dest__U0G,__INTEGER__K s__V0G);
static void set_capacity__L3CB(__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *Self__M3CB,__INTEGER__K new_capacity__N3CB);
static void add_part__with__BX3(__FILE_SYSTEM__2B *Self__CX3,void *new_part__DX3);
static void add_last__O2T(__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *Self__P2T,__UINTEGER_8__CD element__Q2T);
static void copy__3QEB(__STRING__WH *Self__4QEB,__STRING_CONSTANT__Y *other__5QEB);
static void deferred__D2I(__DRIVE__HPD *Self__E2I);
static __UINTEGER_8__CD* realloc__with__LA0(__UINTEGER_8__CD *Self__MA0,__INTEGER__K old_nb_elts__NA0,__INTEGER__K new_nb_elts__OA0);
static void set_name__OCDB();
static void crash_on__with_message__KMK(__DRIVE__HPD *Self__LMK);
static __CHARACTER__BB to_upper__55IB(__CHARACTER__BB Self__AAJB);
static void print_runtime_stack_on__OJL(__DRIVE__HPD *Self__PJL);





int main(int argc,char **argv)
{
  __POINTER__GB __tmp__Y0B,__tmp__L0MC,dir__PYS,__tmp__YJMC;
  __INTEGER__K Self__4ID,__tmp__5SC,__tmp__UPLC,__tmp__RI,Self__JUFB;
  __INTEGER__K j__CRDB,__tmp__LRDB,old_nb_elts__VJMC,Self__JLMB;
  __INTEGER__K __tmp__3ZDB;
  __UINTEGER_CPU__3AB __tmp__USC,__tmp__H0MC,__tmp__J0MC;
  __UINTEGER_32__U t__0JE;
  __STRING__WH *__tmp__1DD,*__tmp__N3,*__tmp__B4,*__tmp__WNIC;
  __STRING__WH *Self__TPLC,*__tmp__MO0,*Self__SO0,*__tmp__FY0,*Self__JBT;
  __DESC_INT__KL *__tmp__QGLC;
  void *result__UH,*__tmp__KI,*__tmp__TK,*result__HZDB,*__tmp__WZDB;
  void *__tmp__31DB;
  void *__tmp__RK,*__tmp__11DB;
  __DIRECTORY_UNIX__GHB *Self__LYS;
  __STRING_CONSTANT__Y *other__ARDB,*__tmp__B1S;
  __UINTEGER_16__5F *__tmp__A1B;
  __HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *result__LSC;
  __HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *__tmp__VTC;
  void **__tmp__BJH;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *__tmp__K0E;
  __UINTEGER_8__CD __tmp__NP,result__TNIC;
  __BOOLEAN__C __tmp__5J,result__UYS,result__IJ1,__tmp__FK1,__tmp__K1DB;
  __CHARACTER__BB *n__OYS,*__tmp__JQLC,*__tmp__KQLC,*__tmp__EYFB;
  __CHARACTER__BB *Self__NGKB;
  __LINKED_LISToENTRYo__AH *__tmp__2YS,*Self__WMIB;
  __LINKED_LIST_NODEoENTRYo__HGX *__tmp__5MIB;
  arg_count = argc;
  arg_vector = argv;





  ;
  ax__KAB= 0;
  top_stack__BKB= 1024;
  stack__MKB=((__UINTEGER_16__5F *) 6144);
  cx__EJB= 0;
  dx__HJB= 0;
  bx__KJB= 0;
  bp__PJB= 0;
  si__SJB= 0;
  di__VJB= 0;
  es__EBB= 0;
  ds__HBB= 0;
  flags__KBB= 0;
  nb_page__ZEF=((__UINTEGER_CPU__3AB ) 0);
  (&MEMORY__0AB_)->size_and_id__5AB=((__UINTEGER_CPU__3AB ) 0);
  capacity_max__NCJ=((__UINTEGER_CPU__3AB ) 0);
  get_begin_memory__2FM=((__POINTER__GB )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(&__bss_stop)) + 4095) & (__UINTEGER_32__U)(~ 4095)));
  begin_memory__5AC=((__POINTER__GB )(((void *)0)));
  __tmp__Y0B=alloc_dynamic__52B(((__UINTEGER_CPU__3AB ) 6));
  __tmp__A1B=((__UINTEGER_16__5F *)__tmp__Y0B);
  Self__4ID= 2;
  while ((Self__4ID >= 0)) {
    __tmp__A1B[Self__4ID]= 0;
    Self__4ID=(__INTEGER__K)(Self__4ID - 1);
  };
  idtr_mem__1KB=__tmp__A1B;
  idt__WL=((__DESC_INT__KL *) 2048);
  (&FILE_SYSTEM__2B_)->parent_directory__4B=(*(&DIRECTORY__WB_));
  (&FILE_SYSTEM__2B_)->parent_entry__3B=(*(&ENTRY__XB_));
  clone_allocation_size__ATC=((__UINTEGER_CPU__3AB ) 0);
  result__LSC=((void *)0);
  __tmp__Y0B=((__POINTER__GB )(((void *)0)));
  __tmp__USC=((__UINTEGER_CPU__3AB )sizeof(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG));
  if ((__tmp__USC == 0)) {
    result__LSC=(&HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG_);
  } else {
    __tmp__5SC=4;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__USC));
    if ((__tmp__5SC == (__INTEGER__K)(- 1))) {
      __tmp__H0MC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__J0MC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__USC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__H0MC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__H0MC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__H0MC=(__UINTEGER_CPU__3AB)(__tmp__J0MC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__L0MC=micro_alloc__table__lab__KSE(__tmp__J0MC,((__POINTER__GB )(&(table_size[(__tmp__H0MC)-1]))),((__UINTEGER_32__U )__tmp__J0MC));
      __tmp__Y0B=__tmp__L0MC;
    } else {
      t__0JE=((__UINTEGER_32__U )__tmp__5SC);
      __tmp__H0MC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__J0MC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__USC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__H0MC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__H0MC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__L0MC=micro_alloc__table__lab__KSE(__tmp__J0MC,((__POINTER__GB )(&(table_type[(t__0JE)]))),(__UINTEGER_32__U)(t__0JE | 1));
      __tmp__Y0B=__tmp__L0MC;
    };
    __tmp__VTC=((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)__tmp__Y0B);
    result__LSC=__tmp__VTC;
    *(__tmp__VTC) = *((&HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG_));
  };
  __tmp__VTC=((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)result__LSC);
  Self__4ID=prime_number_ceiling__5BI( 193);
  __tmp__BJH=create__KNI(Self__4ID);
  __tmp__VTC->buckets__43F=__tmp__BJH;
  __tmp__VTC->capacity__W3F=Self__4ID;
  __tmp__VTC->count__3BG= 0;
  alias__WG=result__LSC;
  (&LINKED_LISToENTRYo__AH_)->parent_linked_collection__FH=(*(&LINKED_COLLECTIONoENTRYo__BH_));
  (&DRIVE__HPD_)->parent_controler__IPD=(&CONTROLER__EPD_);
  (&DRIVE__HPD_)->n_drive__EZG= 0;
  (&DRIVE__HPD_)->cursor__R0G= 0;
  (*(&FAST_ARRAYoExpanded_UINTEGER_8o__LDE_))=(*(&ARRAYED_COLLECTIONoExpanded_UINTEGER_8o__MDE_));
  __tmp__K0E=create_with_capacity__JBF( 512);
  buffer__UDE=__tmp__K0E;
  (&MBR__ZCE_)->map_mbr_first_sector__BDE= 0;
  (&MBR__ZCE_)->map_type__4CE= 0;
  (&ENTRY_FAT__YFE_)->parent_abstract_entry__ZFE=(*(&ENTRY__XB_));
  (&ENTRY_FAT__YFE_)->position__LWBB= 0;
  (&DIRECTORY_FAT__XFE_)->parent_entry_fat__0FE=(*(&ENTRY_FAT__YFE_));
  (&DIRECTORY_FAT__XFE_)->parent_directory__1FE=(*(&DIRECTORY__WB_));
  (&PARTITION_FAT__WFE_)->parent_directory_fat__2FE=(*(&DIRECTORY_FAT__XFE_));
  (&PARTITION__EDE_)->first_sector__KLCB= 0;
  (&PARTITION__EDE_)->step__XLCB= 0;
  (&PARTITION_FAT__WFE_)->parent_partition_fat__3FE=(*(&PARTITION__EDE_));
  (&PARTITION_FAT__WFE_)->cluster__GOJB= 0;
  (&FAT__VFE_)->parent_partition__4FE=(*(&PARTITION_FAT__WFE_));
  (&FAT__VFE_)->fat_sector__5LCB= 0;
  (&FAT__VFE_)->fat_number__BMCB= 0;
  (&FAT__VFE_)->fat_size__DMCB= 0;
  (&FAT__VFE_)->root_offset__2MCB= 0;
  (&FAT__VFE_)->root_size__5MCB= 0;
  (&FAT__VFE_)->root_block__ANCB= 0;
  (&FAT__VFE_)->block_offset__MNCB= 0;
  (&FAT__VFE_)->fat_cache_index__G0VB= 0;
  (&FAT12__UFE_)->parent_fat__5FE=(*(&FAT__VFE_));
  (&BOOT__SHCB_)->get_sectors_per_cluster__5HCB= 0;
  (&BOOT__SHCB_)->get_sectors_reserved__AICB= 0;
  (&BOOT__SHCB_)->get_nb_fat__BICB= 0;
  (&BOOT__SHCB_)->get_sectors_per_fat__FICB= 0;
  (&BOOT__SHCB_)->get_nb_root_entries__CICB= 0;
  (&SFN_FAT__BVBB_)->attr__OVBB= 0;
  (&SFN_FAT__BVBB_)->cluster__XVBB= 0;
  (&SFN_FAT__BVBB_)->high_cluster__UVBB= 0;
  __tmp__1DD=create__4FB( 255);
  string_tmp__BHB=__tmp__1DD;
  (&SFN_FAT__BVBB_)->map_size__YVBB= 0;
  (&FAT16__OGE_)->parent_fat__PGE=(*(&FAT__VFE_));
  (&FAT32__4GE_)->parent_fat__5GE=(*(&FAT__VFE_));
  (&SFN_FAT__BVBB_)->name0__DVBB='\0';
  (&SFN_FAT__BVBB_)->name1__EVBB='\0';
  (&STD_FILE_FAT__RZBB_)->parent_entry__SZBB=(*(&ENTRY_FAT__YFE_));
  (&ENTRY_EXT2__RHE_)->parent_abstract_entry__SHE=(*(&ENTRY__XB_));
  (&ENTRY_EXT2__RHE_)->no_inode__SRRB= 0;
  (&DIRECTORY_EXT2__QHE_)->parent_entry_ext2__THE=(*(&ENTRY_EXT2__RHE_));
  (&DIRECTORY_EXT2__QHE_)->parent_directory__UHE=(*(&DIRECTORY__WB_));
  (&PARTITION_EXT2__PHE_)->parent_directory_ext2__VHE=(*(&DIRECTORY_EXT2__QHE_));
  (&PARTITION_EXT2__PHE_)->parent_partition__WHE=(*(&PARTITION__EDE_));
  (&PARTITION_EXT2__PHE_)->first_block_sector__MHRB= 0;
  (&PARTITION_EXT2__PHE_)->block_type__P5VB= 0;
  (&PARTITION_EXT2__PHE_)->block__W5VB= 0;
  (&PARTITION_EXT2__PHE_)->array_block1__EAWB= 0;
  (&PARTITION_EXT2__PHE_)->array_block2__BBWB= 0;
  (&PARTITION_EXT2__PHE_)->array_block3__ECWB= 0;
  (&EXT2__OHE_)->parent_partition_ext2__XHE=(*(&PARTITION_EXT2__PHE_));
  (&SUPERBLOCK__YFRB_)->s_inodes_per_group__DGRB= 0;
  (&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB= 0;
  (&GROUP_DESCRIPTOR__OSRB_)->bg_inode_table__RSRB= 0;
  (&BOOT__SHCB_)->get_sectors_per_fat32__KICB= 0;
  (&BOOT__SHCB_)->get_cluster_start_root__NICB= 0;
  __tmp__N3=create__4FB( 255);
  string_tmp2__1H=__tmp__N3;
  __tmp__B4=create__4FB( 255);
  string_tmp3__BI=__tmp__B4;
  (&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB=1;
  (*(&ENTRY_UNIX__HHB_))=(*(&ENTRY__XB_));
  (&FILE_UNIX__OQB_)->parent_entry_unix__PQB=(*(&ENTRY_UNIX__HHB_));
  (&DIRECTORY_UNIX__GHB_)->parent_entry_unix__JHB=(*(&ENTRY_UNIX__HHB_));
  (&DIRECTORY_UNIX__GHB_)->parent_directory__KHB=(*(&DIRECTORY__WB_));
  (&INODE__DTQB_)->i_blockd__2TQB= 0;
  (&INODE__DTQB_)->i_blocke__3TQB= 0;
  (&INODE__DTQB_)->i_blockf__4TQB= 0;
  (&STD_FILE_EXT2__EZQB_)->parent_entry_ext2__FZQB=(*(&ENTRY_EXT2__RHE_));
  __tmp__Y0B=exception_01__CL;
  __tmp__QGLC=&(idt__WL[ 1]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_0d__BM;
  __tmp__QGLC=&(idt__WL[ 13]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_00__EM;
  __tmp__QGLC=&(idt__WL[ 0]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_02__HM;
  __tmp__QGLC=&(idt__WL[ 2]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_03__KM;
  __tmp__QGLC=&(idt__WL[ 3]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_04__NM;
  __tmp__QGLC=&(idt__WL[ 4]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_05__QM;
  __tmp__QGLC=&(idt__WL[ 5]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_06__TM;
  __tmp__QGLC=&(idt__WL[ 6]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_07__WM;
  __tmp__QGLC=&(idt__WL[ 7]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_08__ZM;
  __tmp__QGLC=&(idt__WL[ 8]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_09__2M;
  __tmp__QGLC=&(idt__WL[ 9]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_0a__5M;
  __tmp__QGLC=&(idt__WL[ 10]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_0b__CN;
  __tmp__QGLC=&(idt__WL[ 11]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_0c__FN;
  __tmp__QGLC=&(idt__WL[ 12]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_0e__IN;
  __tmp__QGLC=&(idt__WL[ 14]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_0f__LN;
  __tmp__QGLC=&(idt__WL[ 15]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_10__ON;
  __tmp__QGLC=&(idt__WL[ 16]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_11__RN;
  __tmp__QGLC=&(idt__WL[ 17]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 18]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 19]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 20]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 21]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 22]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 26]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 27]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 28]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 29]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 30]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=exception_12_1f__UN;
  __tmp__QGLC=&(idt__WL[ 31]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__Y0B=mode_text__BO;
  __tmp__QGLC=&(idt__WL[ 48]);
  t__0JE=((__UINTEGER_32__U )((__UINTEGER_CPU__3AB )__tmp__Y0B));
  __tmp__QGLC->offset_0_15__ML=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE & 65535));
  __tmp__QGLC->offset_16_31__QL=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__0JE >> 16));
  __tmp__QGLC->desc__NL= 24;
  __tmp__QGLC->reserved__OL= 0;
  __tmp__QGLC->p_dpl_0_type__PL= 142;
  __tmp__NP=((__UINTEGER_8__CD )(__INTEGER__K)((__INTEGER__K)(~ 4) & 255));
  { unsigned short port;
       volatile unsigned short val;

       port=( 33);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
  result__TNIC=((__UINTEGER_8__CD )(val));
  };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =((__UINTEGER_8__CD)(result__TNIC & __tmp__NP));
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  asm("STI");
  open__FG((&FILE_SYSTEM__2B_));
  if (((void *)(&FILE_SYSTEM__2B_)->parent_directory__4B.list__GH != (void *)((void *)0))) {
    __tmp__WNIC=to_string__4AE(((__POINTER__GB )(&FILE_SYSTEM__2B_)));
    print__NET(((__STRING__WH *)__tmp__WNIC));
  } else {
    print__SKC((&__string_1));
  };
  result__UH=((void *)0);
  copy__5RS(((__STRING__WH *)__tmp__N3),(&FILE_SYSTEM__2B_)->parent_entry__3B.path__YG);
  add_last__KTS(((__STRING__WH *)__tmp__N3),'/');
  append__PUS(((__STRING__WH *)__tmp__N3),(&__string_2));
  reduce_path__YR(__tmp__N3);
  copy__1VS(((__STRING__WH *)__tmp__B4),__tmp__N3);
  do {
    __tmp__KI=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),__tmp__N3);
    result__UH=__tmp__KI;
    if (((void *)__tmp__KI == (void *)((void *)0))) {
      Self__TPLC=((__STRING__WH *)__tmp__N3);
      __tmp__UPLC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__TPLC->storage__VSS),(__INTEGER__K)(Self__TPLC->count__FK - 1));
      __tmp__RI=(__INTEGER__K)( 1 + __tmp__UPLC);
      if ((__tmp__RI > 0)) {
        keep_head__3CT(((__STRING__WH *)__tmp__N3),(__INTEGER__K)(__tmp__RI - 1));
      } else {
        ((__STRING__WH *)__tmp__N3)->count__FK= 0;
      };
    };
  } while ((((void *)__tmp__KI == (void *)((void *)0)) && (((__STRING__WH *)__tmp__N3)->count__FK != 0)));
  if (((void *)result__UH == (void *)((void *)0))) {
    if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
    } else {
      parent_directory__2GB();
    };
    __tmp__KI=physical_get_entry__HYN(__tmp__B4);
    result__UH=__tmp__KI;
    __tmp__5J=1;
  } else {
    __tmp__5J=0;
  };
  if ((! __tmp__5J)) {
    if ((__tmp__B4->count__FK != __tmp__N3->count__FK)) {
      if (result__UH==((void *)0)) {
        __tmp__RK=((void *)0);
      } else {
        switch (((struct ___OBJ *)result__UH)->__id) {
        case 5: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 7: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 14:
        case 15:
        case 16: {
          __tmp__RK=((void *)0);
        } break;
        case 9: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 8: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 10: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 11: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 13: {
          __tmp__RK=((void *)result__UH);
        } break;
        case 12: {
          __tmp__RK=((void *)result__UH);
        } break;
        }
      };
      switch (((struct ___OBJ *)__tmp__RK)->__id) {
      case 5: {
        __tmp__TK=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      case 7: {
        __tmp__TK=physical_get_entry__1PB(__tmp__B4);
      } break;
      case 9: {
        __tmp__TK=physical_get_entry__X2BB(((__FAT12__UFE *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      case 8: {
        __tmp__TK=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      case 10: {
        __tmp__TK=physical_get_entry__T1QB(((__FAT16__OGE *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      case 11: {
        __tmp__TK=physical_get_entry__P2QB(((__FAT32__4GE *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      case 13: {
        __tmp__TK=physical_get_entry__K3QB(((__EXT2__OHE *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      case 12: {
        __tmp__TK=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__DIRECTORY_UNIX__GHB *)__tmp__RK)),__tmp__B4);
      } break;
      };
      result__UH=__tmp__TK;
    };
  };
  if (result__UH==((void *)0)) {
    __tmp__KI=((void *)0);
  } else {
    switch (((struct ___OBJ *)result__UH)->__id) {
    case 5: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 7: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 14:
    case 15:
    case 16: {
      __tmp__KI=((void *)0);
    } break;
    case 9: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 8: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 10: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 11: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 13: {
      __tmp__KI=((void *)result__UH);
    } break;
    case 12: {
      __tmp__KI=((void *)result__UH);
    } break;
    }
  };
  if (((void *)__tmp__KI == (void *)((void *)0))) {
    print__SKC((&__string_3));
  } else {
    switch (((struct ___OBJ *)__tmp__KI)->__id) {
    case 5: {
      open__FG(((__FILE_SYSTEM__2B *)__tmp__KI));
    } break;
    case 7: {
      Self__LYS=((__DIRECTORY_UNIX__GHB *)__tmp__KI);
      n__OYS=((void *)0);
      __tmp__L0MC=((__POINTER__GB )(((void *)0)));
      result__UYS=0;
      __tmp__UPLC= 0;
      if (((void *)Self__LYS->parent_directory__KHB.list__GH == (void *)((void *)0))) {
        __tmp__2YS=create__BYD();
        Self__LYS->parent_directory__KHB.list__GH=__tmp__2YS;
      } else {
        __tmp__2YS=((__LINKED_LISToENTRYo__AH *)Self__LYS->parent_directory__KHB.list__GH);
        if (((void *)__tmp__2YS->first_link__LGX != (void *)((void *)0))) {
          __tmp__2YS->first_link__LGX=((void *)0);
          __tmp__2YS->mem_idx__SGX= 0;
          __tmp__2YS->mem_lnk__TGX=((void *)0);
          __tmp__2YS->parent_linked_collection__FH.upper__BKK= 0;
          __tmp__2YS->last_link__UGX=((void *)0);
        };
        ;
      };
      dir__PYS=((__POINTER__GB )(opendir((((__STRING_CONSTANT__Y *)Self__LYS->parent_entry_unix__JHB.path__YG)->storage__MC))));
      if ((dir__PYS != (void *)((void *)0))) {
        result__UYS=1;
        do {
          __tmp__L0MC=((__POINTER__GB )(readdir((dir__PYS))));
          if ((__tmp__L0MC != (void *)((void *)0))) {
            n__OYS=((__CHARACTER__BB *)(((struct dirent *)(__tmp__L0MC))->d_name));
            ((__STRING__WH *)__tmp__1DD)->count__FK= 0;
            __tmp__UPLC= 0;
            while ((((__CHARACTER__BB *)n__OYS)[__tmp__UPLC] != '\0')) {
              add_last__KTS(((__STRING__WH *)__tmp__1DD),((__CHARACTER__BB *)n__OYS)[__tmp__UPLC]);
              __tmp__UPLC=(__INTEGER__K)(__tmp__UPLC + 1);
            };
            __tmp__MO0=create__4FB( 1);
            copy__5RS(((__STRING__WH *)__tmp__MO0),(&__string_4));
            Self__SO0=((__STRING__WH *)__tmp__1DD);
            if (__tmp__MO0==((void *)0)) {
              __tmp__FY0=((void *)0);
            } else {
              __tmp__FY0=((void *)__tmp__MO0);
            };
            if (((void *)__tmp__FY0 != (void *)((void *)0))) {
              result__IJ1=0;
              if ((Self__SO0->count__FK == __tmp__FY0->count__FK)) {
                if ((Self__SO0->count__FK == 0)) {
                  result__IJ1=1;
                } else {
                  __tmp__FK1=fast_memcmp__until__GU2(((__CHARACTER__BB *)Self__SO0->storage__VSS),__tmp__FY0->storage__VSS,Self__SO0->count__FK);
                  result__IJ1=__tmp__FK1;
                };
              };
              __tmp__FK1=result__IJ1;
            } else {
              __tmp__FK1=0;
            };
            if ((! __tmp__FK1)) {
              __tmp__FY0=((__STRING__WH *)__tmp__1DD);
              add_last__KTS(__tmp__FY0,' ');
              Self__JUFB=__tmp__FY0->count__FK;
              __tmp__JQLC=__tmp__FY0->storage__VSS;
              __tmp__KQLC=__tmp__FY0->storage__VSS;
              while ((Self__JUFB >= 2)) {
                ((__CHARACTER__BB *)__tmp__KQLC)[(__INTEGER__K)(Self__JUFB - 1)]=((__CHARACTER__BB *)__tmp__JQLC)[(__INTEGER__K)((__INTEGER__K)(Self__JUFB - 1) - 1)];
                Self__JUFB=(__INTEGER__K)(Self__JUFB - 1);
              };
              ((__CHARACTER__BB *)__tmp__FY0->storage__VSS)[ 0]='/';
              __tmp__FY0=((__STRING__WH *)__tmp__1DD);
              other__ARDB=Self__LYS->parent_entry_unix__JHB.path__YG;
              Self__JUFB=__tmp__FY0->count__FK;
              j__CRDB=other__ARDB->count__LC;
              __tmp__LRDB=(__INTEGER__K)(Self__JUFB + j__CRDB);
              if ((! (__tmp__LRDB <= __tmp__FY0->count__FK))) {
                if ((__tmp__FY0->capacity__KSS < __tmp__LRDB)) {
                  if ((__tmp__FY0->capacity__KSS == 0)) {
                    __tmp__EYFB=create__MUX(__tmp__LRDB);
                    __tmp__FY0->storage__VSS=__tmp__EYFB;
                  } else {
                    __tmp__EYFB=((__CHARACTER__BB *)__tmp__FY0->storage__VSS);
                    old_nb_elts__VJMC=__tmp__FY0->capacity__KSS;
                    __tmp__YJMC=realloc_dynamic__old_size__new_size__VJ0(((__POINTER__GB )__tmp__EYFB),((__UINTEGER_CPU__3AB )old_nb_elts__VJMC),((__UINTEGER_CPU__3AB )__tmp__LRDB));
                    __tmp__EYFB=((__CHARACTER__BB *)__tmp__YJMC);
                    clear__to__NFCB(__tmp__EYFB,old_nb_elts__VJMC,(__INTEGER__K)(__tmp__LRDB - 1));
                    __tmp__FY0->storage__VSS=__tmp__EYFB;
                  };
                  __tmp__FY0->capacity__KSS=__tmp__LRDB;
                } else {
                  clear__to__NFCB(((__CHARACTER__BB *)__tmp__FY0->storage__VSS),__tmp__FY0->count__FK,(__INTEGER__K)(__tmp__LRDB - 1));
                };
              };
              __tmp__FY0->count__FK=__tmp__LRDB;
              if (((Self__JUFB > 0) && (j__CRDB > 0))) {
                __tmp__EYFB=__tmp__FY0->storage__VSS;
                old_nb_elts__VJMC=(__INTEGER__K)(Self__JUFB - 1);
                Self__NGKB=((__CHARACTER__BB *)__tmp__EYFB);
                if ((j__CRDB != 0)) {
                  if ((j__CRDB < 0)) {
                    Self__JLMB= 0;
                    while ((Self__JLMB <= old_nb_elts__VJMC)) {
                      Self__NGKB[(__INTEGER__K)(Self__JLMB + j__CRDB)]=Self__NGKB[Self__JLMB];
                      Self__JLMB=(__INTEGER__K)(Self__JLMB + 1);
                    };
                  } else {
                    Self__JLMB=old_nb_elts__VJMC;
                    while ((Self__JLMB >= 0)) {
                      Self__NGKB[(__INTEGER__K)(Self__JLMB + j__CRDB)]=Self__NGKB[Self__JLMB];
                      Self__JLMB=(__INTEGER__K)(Self__JLMB - 1);
                    };
                  };
                };
              };
              copy_from__until__3UX(((__CHARACTER__BB *)__tmp__FY0->storage__VSS),other__ARDB->storage__MC,(__INTEGER__K)(j__CRDB - 1));
              reduce_path__KSDB(__tmp__1DD);
              result__HZDB=((void *)0);
              copy__5RS(((__STRING__WH *)__tmp__N3),Self__LYS->parent_entry_unix__JHB.path__YG);
              add_last__KTS(((__STRING__WH *)__tmp__N3),'/');
              append__PUS(((__STRING__WH *)__tmp__N3),__tmp__1DD);
              reduce_path__KSDB(__tmp__N3);
              copy__1VS(((__STRING__WH *)__tmp__B4),__tmp__N3);
              do {
                __tmp__WZDB=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),__tmp__N3);
                result__HZDB=__tmp__WZDB;
                if (((void *)__tmp__WZDB == (void *)((void *)0))) {
                  Self__JBT=((__STRING__WH *)__tmp__N3);
                  Self__JLMB=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__JBT->storage__VSS),(__INTEGER__K)(Self__JBT->count__FK - 1));
                  __tmp__3ZDB=(__INTEGER__K)( 1 + Self__JLMB);
                  if ((__tmp__3ZDB > 0)) {
                    keep_head__3CT(((__STRING__WH *)__tmp__N3),(__INTEGER__K)(__tmp__3ZDB - 1));
                  } else {
                    ((__STRING__WH *)__tmp__N3)->count__FK= 0;
                  };
                };
              } while ((((void *)__tmp__WZDB == (void *)((void *)0)) && (((__STRING__WH *)__tmp__N3)->count__FK != 0)));
              if (((void *)result__HZDB == (void *)((void *)0))) {
                if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
                } else {
                  parent_directory__2GB();
                };
                __tmp__WZDB=physical_get_entry__HYN(__tmp__B4);
                result__HZDB=__tmp__WZDB;
                __tmp__K1DB=1;
              } else {
                __tmp__K1DB=0;
              };
              if ((! __tmp__K1DB)) {
                if ((__tmp__B4->count__FK != __tmp__N3->count__FK)) {
                  if (result__HZDB==((void *)0)) {
                    __tmp__11DB=((void *)0);
                  } else {
                    switch (((struct ___OBJ *)result__HZDB)->__id) {
                    case 5: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 7: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 14:
                    case 15:
                    case 16: {
                      __tmp__11DB=((void *)0);
                    } break;
                    case 9: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 8: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 10: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 11: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 13: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    case 12: {
                      __tmp__11DB=((void *)result__HZDB);
                    } break;
                    }
                  };
                  switch (((struct ___OBJ *)__tmp__11DB)->__id) {
                  case 5: {
                    __tmp__31DB=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__11DB),__tmp__B4);
                  } break;
                  case 7: {
                    __tmp__31DB=physical_get_entry__1PB(__tmp__B4);
                  } break;
                  case 9: {
                    __tmp__31DB=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__11DB)),__tmp__B4);
                  } break;
                  case 8: {
                    __tmp__31DB=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__11DB)),__tmp__B4);
                  } break;
                  case 10: {
                    __tmp__31DB=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__11DB)),__tmp__B4);
                  } break;
                  case 11: {
                    __tmp__31DB=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__11DB)),__tmp__B4);
                  } break;
                  case 13: {
                    __tmp__31DB=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__11DB)),__tmp__B4);
                  } break;
                  case 12: {
                    __tmp__31DB=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__11DB)),__tmp__B4);
                  } break;
                  };
                  result__HZDB=__tmp__31DB;
                };
              };
              if (((void *)result__HZDB == (void *)((void *)0))) {
                print__SKC((&__string_5));
                print__NET(((__STRING__WH *)__tmp__1DD));
                print__SKC((&__string_6));
              } else {
                switch (((struct ___OBJ *)result__HZDB)->__id) {
                case 5: {
                  __tmp__B1S=((__FILE_SYSTEM__2B *)result__HZDB)->parent_entry__3B.path__YG;
                } break;
                case 7: {
                  __tmp__B1S=((__DIRECTORY_UNIX__GHB *)result__HZDB)->parent_entry_unix__JHB.path__YG;
                } break;
                case 14: {
                  __tmp__B1S=((__FILE_UNIX__OQB *)result__HZDB)->parent_entry_unix__PQB.path__YG;
                } break;
                case 9: {
                  __tmp__B1S=((__FAT12__UFE *)result__HZDB)->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
                } break;
                case 8: {
                  __tmp__B1S=((__DIRECTORY_FAT__XFE *)result__HZDB)->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
                } break;
                case 10: {
                  __tmp__B1S=((__FAT16__OGE *)result__HZDB)->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
                } break;
                case 11: {
                  __tmp__B1S=((__FAT32__4GE *)result__HZDB)->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
                } break;
                case 13: {
                  __tmp__B1S=((__EXT2__OHE *)result__HZDB)->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
                } break;
                case 12: {
                  __tmp__B1S=((__DIRECTORY_EXT2__QHE *)result__HZDB)->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
                } break;
                case 15: {
                  __tmp__B1S=((__STD_FILE_FAT__RZBB *)result__HZDB)->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG;
                } break;
                case 16: {
                  __tmp__B1S=((__STD_FILE_EXT2__EZQB *)result__HZDB)->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG;
                } break;
                };
                if ((__tmp__B1S->count__LC >= Self__LYS->parent_entry_unix__JHB.path__YG->count__LC)) {
                  Self__WMIB=((__LINKED_LISToENTRYo__AH *)Self__LYS->parent_directory__KHB.list__GH);
                  if (((void *)Self__WMIB->first_link__LGX == (void *)((void *)0))) {
                    __tmp__5MIB=create__next__CWAB(result__HZDB);
                    Self__WMIB->first_link__LGX=__tmp__5MIB;
                    Self__WMIB->parent_linked_collection__FH.upper__BKK= 1;
                    Self__WMIB->last_link__UGX=__tmp__5MIB;
                    Self__WMIB->mem_idx__SGX= 1;
                    Self__WMIB->mem_lnk__TGX=__tmp__5MIB;
                  } else {
                    __tmp__5MIB=create__next__CWAB(result__HZDB);
                    ((__LINKED_LIST_NODEoENTRYo__HGX *)Self__WMIB->last_link__UGX)->next__5GBB=__tmp__5MIB;
                    Self__WMIB->parent_linked_collection__FH.upper__BKK=(__INTEGER__K)(Self__WMIB->parent_linked_collection__FH.upper__BKK + 1);
                    Self__WMIB->last_link__UGX=__tmp__5MIB;
                  };
                };
              };
            };
          };
        } while (((__tmp__L0MC != (void *)((void *)0)) & result__UYS));
        closedir((dir__PYS));
      };
    } break;
    case 9: {
      open__0UBB(((__FAT12__UFE *)__tmp__KI));
    } break;
    case 8: {
      open__RQVB(((__DIRECTORY_FAT__XFE *)__tmp__KI));
    } break;
    case 10: {
      open__BGQB(((__FAT16__OGE *)__tmp__KI));
    } break;
    case 11: {
      open__XLQB(((__FAT32__4GE *)__tmp__KI));
    } break;
    case 13: {
      open__MRQB(((__EXT2__OHE *)__tmp__KI));
    } break;
    case 12: {
      open__GG1B(((__DIRECTORY_EXT2__QHE *)__tmp__KI));
    } break;
    };
    switch (((struct ___OBJ *)__tmp__KI)->__id) {
    case 5: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__FILE_SYSTEM__2B *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 7: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__DIRECTORY_UNIX__GHB *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 9: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__FAT12__UFE *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 8: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__DIRECTORY_FAT__XFE *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 10: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__FAT16__OGE *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 11: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__FAT32__4GE *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 13: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__EXT2__OHE *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    case 12: {
      Self__TPLC=to_string__4AE(((__POINTER__GB )((__DIRECTORY_EXT2__QHE *)__tmp__KI)));
      print__NET(((__STRING__WH *)Self__TPLC));
    } break;
    };
  };
  exit__I0();
  return(0);
}


static __POINTER__GB alloc_dynamic__52B(__UINTEGER_CPU__3AB sz__B3B)

{
  __POINTER__GB result__J3B,__tmp__VJE,Result__C3B;
  __UINTEGER_CPU__3AB __tmp__2JMC,__tmp__U3B,__tmp__CKMC,__tmp__1IE;
  __MEMORY__0AB *__tmp__E4B;
  result__J3B=((__POINTER__GB )(((void *)0)));
  __tmp__2JMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
  __tmp__U3B=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(sz__B3B - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2JMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2JMC) - ((__UINTEGER_CPU__3AB ) 1)));
  if ((__tmp__U3B <= ((__UINTEGER_CPU__3AB )(256)))) {
    __tmp__CKMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
    __tmp__1IE=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__U3B - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__CKMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__CKMC) - ((__UINTEGER_CPU__3AB ) 1)));
    __tmp__CKMC=(__UINTEGER_CPU__3AB)(__tmp__1IE / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
    __tmp__VJE=micro_alloc__table__lab__KSE(__tmp__1IE,((__POINTER__GB )(&(table_size[(__tmp__CKMC)-1]))),((__UINTEGER_32__U )__tmp__1IE));
    result__J3B=__tmp__VJE;
  } else {
    __tmp__E4B=search__RRI(__tmp__U3B);
    result__J3B=(void *)((unsigned long)((__POINTER__GB )((__MEMORY__0AB *)__tmp__E4B)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))))));
  };
  Result__C3B=result__J3B;
  return(Result__C3B);
}

static __POINTER__GB micro_alloc__table__lab__KSE(__UINTEGER_CPU__3AB new_size__MSE,__POINTER__GB ptr_table__NSE,__UINTEGER_32__U lab_type__OSE)

{
  __POINTER__GB next__SSE,__tmp__5FJC,result__QSE,__tmp__XTE,__tmp__YTE;
  __POINTER__GB __tmp__CVE,Result__PSE;
  next__SSE=((__POINTER__GB )(((void *)0)));
  __tmp__5FJC=((__POINTER__GB *)ptr_table__NSE)[ 0];
  result__QSE=__tmp__5FJC;
  if ((__tmp__5FJC == (void *)((void *)0))) {
    __tmp__XTE=new_lab__KEF(lab_type__OSE);
    result__QSE=__tmp__XTE;
    __tmp__YTE=(void *)((unsigned long)__tmp__XTE - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )new_size__MSE)));
    next__SSE=__tmp__YTE;
    ((__POINTER__GB *)__tmp__YTE)[ 0]=((void *)0);
    ((__POINTER__GB *)ptr_table__NSE)[ 0]=__tmp__YTE;
  } else {
    __tmp__XTE=((__POINTER__GB *)result__QSE)[ 0];
    next__SSE=__tmp__XTE;
    if ((__tmp__XTE == (void *)((void *)0))) {
      if (((void *)((unsigned long)(void *)((unsigned long)(void *)((unsigned long)result__QSE - (unsigned long)begin_memory__5AC) & (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 4095))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(new_size__MSE << 1)))) <= ((__POINTER__GB )((__UINTEGER_CPU__3AB ) 4096)))) {
        next__SSE=(void *)((unsigned long)result__QSE - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )new_size__MSE)));
      } else {
        __tmp__CVE=new_lab__KEF(lab_type__OSE);
        next__SSE=__tmp__CVE;
      };
      ((__POINTER__GB *)next__SSE)[ 0]=((void *)0);
      ((__POINTER__GB *)ptr_table__NSE)[ 0]=next__SSE;
    } else {
      ((__POINTER__GB *)result__QSE)[ 0]=(void *)((unsigned long)((__POINTER__GB *)next__SSE)[ 0] & (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1))));
      result__QSE=next__SSE;
    };
  };
  Result__PSE=result__QSE;
  return(Result__PSE);
}

static __INTEGER__K prime_number_ceiling__5BI(__INTEGER__K integer__BCI)

{
  __INTEGER__K result__DCI,Result__CCI;
  __BOOLEAN__C __tmp__LCI,__tmp__QCI;
  result__DCI= 0;
  if ((integer__BCI <= 11)) {
    result__DCI= 11;
    __tmp__LCI=1;
  } else {
    __tmp__LCI=0;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 23);
    if (__tmp__QCI) {
      result__DCI= 23;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 53);
    if (__tmp__QCI) {
      result__DCI= 53;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 97);
    if (__tmp__QCI) {
      result__DCI= 97;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 193);
    if (__tmp__QCI) {
      result__DCI= 193;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 389);
    if (__tmp__QCI) {
      result__DCI= 389;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 769);
    if (__tmp__QCI) {
      result__DCI= 769;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 1543);
    if (__tmp__QCI) {
      result__DCI= 1543;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 3079);
    if (__tmp__QCI) {
      result__DCI= 3079;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 6151);
    if (__tmp__QCI) {
      result__DCI= 6151;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 12289);
    if (__tmp__QCI) {
      result__DCI= 12289;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 24593);
    if (__tmp__QCI) {
      result__DCI= 24593;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 49157);
    if (__tmp__QCI) {
      result__DCI= 49157;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 98317);
    if (__tmp__QCI) {
      result__DCI= 98317;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 196613);
    if (__tmp__QCI) {
      result__DCI= 196613;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 393241);
    if (__tmp__QCI) {
      result__DCI= 393241;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 786433);
    if (__tmp__QCI) {
      result__DCI= 786433;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 1572869);
    if (__tmp__QCI) {
      result__DCI= 1572869;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 3145739);
    if (__tmp__QCI) {
      result__DCI= 3145739;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 6291469);
    if (__tmp__QCI) {
      result__DCI= 6291469;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 12582917);
    if (__tmp__QCI) {
      result__DCI= 12582917;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 25165843);
    if (__tmp__QCI) {
      result__DCI= 25165843;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 50331653);
    if (__tmp__QCI) {
      result__DCI= 50331653;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 100663319);
    if (__tmp__QCI) {
      result__DCI= 100663319;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 201326611);
    if (__tmp__QCI) {
      result__DCI= 201326611;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if (__tmp__LCI) {
    __tmp__LCI=1;
  } else {
    __tmp__QCI=(integer__BCI <= 402653189);
    if (__tmp__QCI) {
      result__DCI= 402653189;
    };
    __tmp__LCI=__tmp__QCI;
  };
  if ((! __tmp__LCI)) {
    if ((integer__BCI <= 805306457)) {
      result__DCI= 805306457;
    } else {
      result__DCI= 1610612741;
    };
  };
  Result__CCI=result__DCI;
  return(Result__CCI);
}

static void** create__KNI(__INTEGER__K nb_elements__MNI)

{
  __POINTER__GB __tmp__L1J;
  __INTEGER__K Self__QBP;
  void **__tmp__P1J,**Result__NNI;
  __tmp__L1J=alloc_dynamic__52B(((__UINTEGER_CPU__3AB )(__INTEGER__K)(nb_elements__MNI * ((__INTEGER__K )(sizeof(void *))))));
  __tmp__P1J=((void **)__tmp__L1J);
  Self__QBP=(__INTEGER__K)(nb_elements__MNI - 1);
  while ((Self__QBP >= 0)) {
    __tmp__P1J[Self__QBP]=((void *)0);
    Self__QBP=(__INTEGER__K)(Self__QBP - 1);
  };
  Result__NNI=__tmp__P1J;
  return(Result__NNI);
}

static __FAST_ARRAYoExpanded_UINTEGER_8o__LDE* create_with_capacity__JBF(__INTEGER__K new_count__LBF)

{
  __POINTER__GB ptr__KBO,__tmp__NKMC;
  __UINTEGER_CPU__3AB __tmp__SBO,__tmp__JKMC,__tmp__LKMC;
  __INTEGER__K __tmp__3BO;
  __UINTEGER_32__U t__UKMC;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *result__JBO,*__tmp__SCO;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *Result__MBF;
  __UINTEGER_8__CD *__tmp__P3P;
  result__JBO=((void *)0);
  ptr__KBO=((__POINTER__GB )(((void *)0)));
  __tmp__SBO=((__UINTEGER_CPU__3AB )sizeof(__FAST_ARRAYoExpanded_UINTEGER_8o__LDE));
  if ((__tmp__SBO == 0)) {
    result__JBO=(&FAST_ARRAYoExpanded_UINTEGER_8o__LDE_);
  } else {
    __tmp__3BO=1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__SBO));
    if ((__tmp__3BO == (__INTEGER__K)(- 1))) {
      __tmp__JKMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__LKMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__SBO - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JKMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JKMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__JKMC=(__UINTEGER_CPU__3AB)(__tmp__LKMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__NKMC=micro_alloc__table__lab__KSE(__tmp__LKMC,((__POINTER__GB )(&(table_size[(__tmp__JKMC)-1]))),((__UINTEGER_32__U )__tmp__LKMC));
      ptr__KBO=__tmp__NKMC;
    } else {
      t__UKMC=((__UINTEGER_32__U )__tmp__3BO);
      __tmp__JKMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__LKMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__SBO - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JKMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JKMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__NKMC=micro_alloc__table__lab__KSE(__tmp__LKMC,((__POINTER__GB )(&(table_type[(t__UKMC)]))),(__UINTEGER_32__U)(t__UKMC | 1));
      ptr__KBO=__tmp__NKMC;
    };
    __tmp__SCO=((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)ptr__KBO);
    result__JBO=__tmp__SCO;
    *(__tmp__SCO) = *((&FAST_ARRAYoExpanded_UINTEGER_8o__LDE_));
  };
  __tmp__SCO=((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)result__JBO);
  if (((*(__tmp__SCO)).capacity__KLT < new_count__LBF)) {
    __tmp__NKMC=alloc_dynamic__52B(((__UINTEGER_CPU__3AB )new_count__LBF));
    __tmp__P3P=((__UINTEGER_8__CD *)__tmp__NKMC);
    clear_all__CSO(__tmp__P3P,(__INTEGER__K)(new_count__LBF - 1));
    (*(__tmp__SCO)).storage__1MT=__tmp__P3P;
    (*(__tmp__SCO)).capacity__KLT=new_count__LBF;
  };
  (*(__tmp__SCO)).upper__4KT=(__INTEGER__K)(- 1);
  Result__MBF=result__JBO;
  return(Result__MBF);
}

static __STRING__WH* create__4FB(__INTEGER__K needed_capacity__AGB)

{
  __STRING__WH *result__E0N,*__tmp__N1N,*Result__BGB;
  __POINTER__GB ptr__F0N,__tmp__4KMC;
  __UINTEGER_CPU__3AB __tmp__N0N,__tmp__0KMC,__tmp__2KMC;
  __INTEGER__K __tmp__Y0N;
  __UINTEGER_32__U t__FLMC;
  __CHARACTER__BB *__tmp__Y3S;
  result__E0N=((void *)0);
  ptr__F0N=((__POINTER__GB )(((void *)0)));
  __tmp__N0N=((__UINTEGER_CPU__3AB )sizeof(__STRING__WH));
  if ((__tmp__N0N == 0)) {
    result__E0N=(&STRING__WH_);
  } else {
    __tmp__Y0N=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__N0N));
    if ((__tmp__Y0N == (__INTEGER__K)(- 1))) {
      __tmp__0KMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__2KMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__N0N - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0KMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0KMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__0KMC=(__UINTEGER_CPU__3AB)(__tmp__2KMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__4KMC=micro_alloc__table__lab__KSE(__tmp__2KMC,((__POINTER__GB )(&(table_size[(__tmp__0KMC)-1]))),((__UINTEGER_32__U )__tmp__2KMC));
      ptr__F0N=__tmp__4KMC;
    } else {
      t__FLMC=((__UINTEGER_32__U )__tmp__Y0N);
      __tmp__0KMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__2KMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__N0N - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0KMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0KMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__4KMC=micro_alloc__table__lab__KSE(__tmp__2KMC,((__POINTER__GB )(&(table_type[(t__FLMC)]))),(__UINTEGER_32__U)(t__FLMC | 1));
      ptr__F0N=__tmp__4KMC;
    };
    __tmp__N1N=((__STRING__WH *)ptr__F0N);
    result__E0N=__tmp__N1N;
    *(__tmp__N1N) = *((&STRING__WH_));
  };
  __tmp__N1N=((__STRING__WH *)result__E0N);
  if ((needed_capacity__AGB > 0)) {
    if ((__tmp__N1N->capacity__KSS < needed_capacity__AGB)) {
      __tmp__Y3S=create__MUX(needed_capacity__AGB);
      __tmp__N1N->storage__VSS=__tmp__Y3S;
      __tmp__N1N->capacity__KSS=needed_capacity__AGB;
    };
  };
  __tmp__N1N->count__FK= 0;
  Result__BGB=result__E0N;
  return(Result__BGB);
}

void exception_01__CL()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('1');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_0d__BM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('d');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_00__EM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('0');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_02__HM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('2');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_03__KM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('3');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_04__NM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('4');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_05__QM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('5');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_06__TM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('6');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_07__WM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('7');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_08__ZM()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('8');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_09__2M()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('9');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_0a__5M()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('a');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_0b__CN()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('b');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_0c__FN()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('c');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_0e__IN()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('e');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_0f__LN()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('f');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_10__ON()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");
  put_character__UKC('E');
  put_character__UKC('1');
  put_character__UKC('0');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");
}

void exception_11__RN()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('1');
  put_character__UKC('1');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void exception_12_1f__UN()

{
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  put_character__UKC('E');
  put_character__UKC('x');
  exit__I0();
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

void mode_text__BO()

{
  __INTEGER__K __tmp__U2MC,__tmp__W2MC;
  __UINTEGER_32__U __tmp__L3MC,__tmp__M3MC;
  __UINTEGER_16__5F val__V2MC;
  __UINTEGER_8__CD result__N3MC,result__O3MC;
  volatile unsigned long eax; volatile unsigned long ebx; volatile unsigned long ecx; volatile unsigned long edx; volatile unsigned long esi; volatile unsigned long edi; asm volatile ( "/* BEGIN INTERRUPT */ \n  movl %%eax,%0 \n  movl %%ebx,%1 \n  movl %%ecx,%2 \n  movl %%edx,%3 \n  movl %%esi,%4 \n  movl %%edi,%5 \n  /* BEGIN CODE */" : "=m"(eax),"=m"(ebx),"=m"(ecx),"=m"(edx),"=m"(esi),"=m"(edi) : : "eax","edx","ecx","ebx","esi","edi", "memory");;
  ___video_text = 1;
  ax__KAB= 3;
  __tmp__U2MC=(__INTEGER__K)(top_stack__BKB - 1);
  top_stack__BKB=__tmp__U2MC;
  stack__MKB[__tmp__U2MC]= 3;
  val__V2MC=cx__EJB;
  __tmp__W2MC=(__INTEGER__K)(__tmp__U2MC - 1);
  top_stack__BKB=__tmp__W2MC;
  stack__MKB[__tmp__W2MC]=val__V2MC;
  val__V2MC=dx__HJB;
  __tmp__U2MC=(__INTEGER__K)(__tmp__W2MC - 1);
  top_stack__BKB=__tmp__U2MC;
  stack__MKB[__tmp__U2MC]=val__V2MC;
  val__V2MC=bx__KJB;
  __tmp__W2MC=(__INTEGER__K)(__tmp__U2MC - 1);
  top_stack__BKB=__tmp__W2MC;
  stack__MKB[__tmp__W2MC]=val__V2MC;
  __tmp__U2MC=(__INTEGER__K)(__tmp__W2MC - 1);
  top_stack__BKB=__tmp__U2MC;
  stack__MKB[__tmp__U2MC]= 0;
  val__V2MC=bp__PJB;
  __tmp__W2MC=(__INTEGER__K)(__tmp__U2MC - 1);
  top_stack__BKB=__tmp__W2MC;
  stack__MKB[__tmp__W2MC]=val__V2MC;
  val__V2MC=si__SJB;
  __tmp__U2MC=(__INTEGER__K)(__tmp__W2MC - 1);
  top_stack__BKB=__tmp__U2MC;
  stack__MKB[__tmp__U2MC]=val__V2MC;
  val__V2MC=di__VJB;
  __tmp__W2MC=(__INTEGER__K)(__tmp__U2MC - 1);
  top_stack__BKB=__tmp__W2MC;
  stack__MKB[__tmp__W2MC]=val__V2MC;
  val__V2MC=es__EBB;
  __tmp__U2MC=(__INTEGER__K)(__tmp__W2MC - 1);
  top_stack__BKB=__tmp__U2MC;
  stack__MKB[__tmp__U2MC]=val__V2MC;
  val__V2MC=ds__HBB;
  __tmp__W2MC=(__INTEGER__K)(__tmp__U2MC - 1);
  top_stack__BKB=__tmp__W2MC;
  stack__MKB[__tmp__W2MC]=val__V2MC;
  val__V2MC=flags__KBB;
  __tmp__U2MC=(__INTEGER__K)(__tmp__W2MC - 1);
  top_stack__BKB=__tmp__U2MC;
  stack__MKB[__tmp__U2MC]=val__V2MC;
  __tmp__W2MC=(__INTEGER__K)(__tmp__U2MC - 1);
  top_stack__BKB=__tmp__W2MC;
  stack__MKB[__tmp__W2MC]= 16;
  asm volatile ("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x08        \n": : "g" ((((__UINTEGER_32__U )idtr_mem__1KB))) : "eax", "memory");



  __tmp__L3MC=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )idtr_mem__1KB[ 2]) << 16) | ((__UINTEGER_32__U )idtr_mem__1KB[ 1]));
  asm("CLI");
  __tmp__M3MC=((__UINTEGER_32__U )idtr_mem__1KB);
  idtr_mem__1KB[ 2]= 0;
  idtr_mem__1KB[ 1]= 0;
  idtr_mem__1KB[ 0]= 1023;
  asm("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x18        \n": : "g" ((__tmp__M3MC)) : "eax");



  { unsigned short port;
       volatile unsigned short val;

       port=( 33);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
  result__N3MC=((__UINTEGER_8__CD )(val));
  };
  { unsigned short port;
       volatile unsigned short val;

       port=( 161);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
  result__O3MC=((__UINTEGER_8__CD )(val));
  };
  { unsigned short port;
       unsigned short val;

       port=( 32);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 160);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 8);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 112);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 4);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 2);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 0);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 158);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };

    asm("                       \n      .byte 0x9A		\n      .long 0x1000		\n      .word 0x08		\n": : : "memory");



    ;
  { unsigned short port;
       unsigned short val;

       port=( 32);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 160);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 32);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 40);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 4);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 2);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 33);
       val =(result__N3MC);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       unsigned short val;

       port=( 161);
       val =(result__O3MC);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  __tmp__M3MC=((__UINTEGER_32__U )idtr_mem__1KB);
  idtr_mem__1KB[ 2]=((__UINTEGER_16__5F )(__UINTEGER_32__U)(__tmp__L3MC >> 16));
  idtr_mem__1KB[ 1]=((__UINTEGER_16__5F )(__UINTEGER_32__U)(__tmp__L3MC & 65535));
  idtr_mem__1KB[ 0]= 2047;
  asm("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x18        \n": : "g" ((__tmp__M3MC)) : "eax");



  asm("STI");
  top_stack__BKB=(__INTEGER__K)(__tmp__W2MC + 1);
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  flags__KBB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  ds__HBB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  es__EBB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  di__VJB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  si__SJB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  bp__PJB=val__V2MC;
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  bx__KJB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  dx__HJB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  cx__EJB=val__V2MC;
  val__V2MC=stack__MKB[top_stack__BKB];
  top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
  ax__KAB=val__V2MC;
  asm volatile ( "/* END CODE */  \n  movl %0,%%eax \n  movl %1,%%ebx \n  movl %2,%%ecx \n  movl %3,%%edx \n  movl %4,%%esi \n  movl %5,%%edi \n movl %%ebp,%%esp \n popl %%ebp       \n iret             \n /* END INTERRUPT */" : : "m"(eax),"m"(ebx),"m"(ecx),"m"(edx),"m"(esi),"m"(edi) : "eax","edx","ecx","ebx","esi","edi", "memory");;
}

static __BOOLEAN__C open__FG(__FILE_SYSTEM__2B *Self__GG)

{
  __STRING_CONSTANT__Y *__tmp__KOD,*__tmp__UOD;
  __INTEGER__K __tmp__CTU,__tmp__MOD,idx__CNG,__tmp__QVG,__tmp__NTO;
  __BIOS_CONTROLER__MPD *result__2UG,*__tmp__FWG;
  __POINTER__GB ptr__3UG,__tmp__PLMC,__tmp__AMMC;
  __UINTEGER_CPU__3AB __tmp__FVG,__tmp__LLMC,__tmp__NLMC,__tmp__2LMC;
  __UINTEGER_CPU__3AB __tmp__4LMC;
  __UINTEGER_32__U t__WLMC,__tmp__APMC,t__HMMC;
  __DRIVE__HPD *__tmp__RAE,*Self__2YG;
  __UINTEGER_16__5F val__O0LC,__tmp__P2LC;
  __CHARACTER__BB *__tmp__0OD;
  __HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__YMG;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__DNG;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__SOG;
  __BOOLEAN__C __tmp__WNG,__tmp__TNG,Result__HG;
  __LINKED_LISToENTRYo__AH *__tmp__LPD;
  __UINTEGER_16__5F *__tmp__3YH;
  __UINTEGER_8__CD result__VJFC,result__YJFC;
  if ((! ((void *)Self__GG->parent_directory__4B.list__GH != (void *)((void *)0)))) {
    __tmp__KOD=create_copy__KXD((&__string_7));
    Self__GG->parent_entry__3B.path__YG=__tmp__KOD;
    __tmp__KOD=((__STRING_CONSTANT__Y *)Self__GG->parent_entry__3B.path__YG);
    __tmp__CTU=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__KOD->storage__MC),(__INTEGER__K)(__tmp__KOD->count__LC - 1));
    __tmp__MOD=(__INTEGER__K)( 1 + __tmp__CTU);
    if (((void *)Self__GG->parent_entry__3B.name__NOD == (void *)((void *)0))) {
      __tmp__UOD=clone__T2N();
      Self__GG->parent_entry__3B.name__NOD=__tmp__UOD;
    };
    __tmp__KOD=Self__GG->parent_entry__3B.name__NOD;
    __tmp__0OD=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__GG->parent_entry__3B.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__MOD)))));
    __tmp__CTU=(__INTEGER__K)(Self__GG->parent_entry__3B.path__YG->count__LC - __tmp__MOD);
    __tmp__UOD=((__STRING_CONSTANT__Y *)__tmp__KOD);
    __tmp__UOD->storage__MC=__tmp__0OD;
    __tmp__UOD->count__LC=__tmp__CTU;
    Self__YMG=((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG);
    __tmp__KOD=Self__GG->parent_entry__3B.path__YG;
    __tmp__CTU=hash_code__BQT(((__STRING_CONSTANT__Y *)__tmp__KOD));
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU % Self__YMG->capacity__W3F);
    idx__CNG=__tmp__MOD;
    node__DNG=((void **)Self__YMG->buckets__43F)[__tmp__MOD];
    until_do__BWH:
    {
      if (((void *)node__DNG == (void *)((void *)0))) {
        __tmp__WNG=1;
      } else {
        __tmp__TNG=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__DNG->key__K4F),__tmp__KOD);
        __tmp__WNG=__tmp__TNG;
      };
      if ((! __tmp__WNG)) {
        node__DNG=node__DNG->next__W4F;
        goto until_do__BWH;
      };
    };
    if (((void *)node__DNG == (void *)((void *)0))) {
      if ((Self__YMG->capacity__W3F == Self__YMG->count__3BG)) {
        increase_capacity__PXL(Self__YMG);
        idx__CNG=(__INTEGER__K)(__tmp__CTU % Self__YMG->capacity__W3F);
      };
      __tmp__SOG=new_node__to__next__UIJ(Self__GG,__tmp__KOD,((void **)Self__YMG->buckets__43F)[idx__CNG]);
      node__DNG=__tmp__SOG;
      ((void **)Self__YMG->buckets__43F)[idx__CNG]=__tmp__SOG;
      Self__YMG->count__3BG=(__INTEGER__K)(Self__YMG->count__3BG + 1);
    } else {
      ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node__DNG)->item__44F=Self__GG;
    };
    __tmp__LPD=create__BYD();
    Self__GG->parent_directory__4B.list__GH=__tmp__LPD;
    result__2UG=((void *)0);
    ptr__3UG=((__POINTER__GB )(((void *)0)));
    __tmp__FVG=((__UINTEGER_CPU__3AB )sizeof(__BIOS_CONTROLER__MPD));
    if ((__tmp__FVG == 0)) {
      result__2UG=(&BIOS_CONTROLER__MPD_);
    } else {
      __tmp__QVG=-1;
      clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__FVG));
      if ((__tmp__QVG == (__INTEGER__K)(- 1))) {
        __tmp__LLMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
        __tmp__NLMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__FVG - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LLMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LLMC) - ((__UINTEGER_CPU__3AB ) 1)));
        __tmp__LLMC=(__UINTEGER_CPU__3AB)(__tmp__NLMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
        __tmp__PLMC=micro_alloc__table__lab__KSE(__tmp__NLMC,((__POINTER__GB )(&(table_size[(__tmp__LLMC)-1]))),((__UINTEGER_32__U )__tmp__NLMC));
        ptr__3UG=__tmp__PLMC;
      } else {
        t__WLMC=((__UINTEGER_32__U )__tmp__QVG);
        __tmp__LLMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
        __tmp__NLMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__FVG - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LLMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LLMC) - ((__UINTEGER_CPU__3AB ) 1)));
        __tmp__PLMC=micro_alloc__table__lab__KSE(__tmp__NLMC,((__POINTER__GB )(&(table_type[(t__WLMC)]))),(__UINTEGER_32__U)(t__WLMC | 1));
        ptr__3UG=__tmp__PLMC;
      };
      __tmp__FWG=((__BIOS_CONTROLER__MPD *)ptr__3UG);
      result__2UG=__tmp__FWG;
      *(__tmp__FWG) = *((&BIOS_CONTROLER__MPD_));
    };
    if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
      __tmp__RAE=clone__EXG();
    } else {
      __tmp__RAE=clone__EXG();
    };
    Self__2YG=((__DRIVE__HPD *)__tmp__RAE);
    __tmp__RAE=((void *)0);
    Self__2YG->parent_controler__IPD=result__2UG;
    Self__2YG->n_drive__EZG= 128;
    __tmp__WNG=0;
    __tmp__3YH=((__UINTEGER_16__5F *)((__UINTEGER_8__CD *) 10240));
    ax__KAB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(ax__KAB & 255) | 18432);
    dx__HJB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(dx__HJB & 65280) | 128);
    ds__HBB= 640;
    si__SJB= 0;
    clear_all__CSO(((__UINTEGER_8__CD *) 10240), 2047);
    __tmp__3YH[ 0]= 30;
    __tmp__CTU=(__INTEGER__K)(top_stack__BKB - 1);
    top_stack__BKB=__tmp__CTU;
    stack__MKB[__tmp__CTU]=ax__KAB;
    val__O0LC=cx__EJB;
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU - 1);
    top_stack__BKB=__tmp__MOD;
    stack__MKB[__tmp__MOD]=val__O0LC;
    __tmp__CTU=(__INTEGER__K)(__tmp__MOD - 1);
    top_stack__BKB=__tmp__CTU;
    stack__MKB[__tmp__CTU]=dx__HJB;
    val__O0LC=bx__KJB;
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU - 1);
    top_stack__BKB=__tmp__MOD;
    stack__MKB[__tmp__MOD]=val__O0LC;
    __tmp__CTU=(__INTEGER__K)(__tmp__MOD - 1);
    top_stack__BKB=__tmp__CTU;
    stack__MKB[__tmp__CTU]= 0;
    val__O0LC=bp__PJB;
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU - 1);
    top_stack__BKB=__tmp__MOD;
    stack__MKB[__tmp__MOD]=val__O0LC;
    __tmp__CTU=(__INTEGER__K)(__tmp__MOD - 1);
    top_stack__BKB=__tmp__CTU;
    stack__MKB[__tmp__CTU]=si__SJB;
    val__O0LC=di__VJB;
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU - 1);
    top_stack__BKB=__tmp__MOD;
    stack__MKB[__tmp__MOD]=val__O0LC;
    val__O0LC=es__EBB;
    __tmp__CTU=(__INTEGER__K)(__tmp__MOD - 1);
    top_stack__BKB=__tmp__CTU;
    stack__MKB[__tmp__CTU]=val__O0LC;
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU - 1);
    top_stack__BKB=__tmp__MOD;
    stack__MKB[__tmp__MOD]=ds__HBB;
    val__O0LC=flags__KBB;
    __tmp__CTU=(__INTEGER__K)(__tmp__MOD - 1);
    top_stack__BKB=__tmp__CTU;
    stack__MKB[__tmp__CTU]=val__O0LC;
    __tmp__MOD=(__INTEGER__K)(__tmp__CTU - 1);
    top_stack__BKB=__tmp__MOD;
    stack__MKB[__tmp__MOD]= 19;
    asm volatile ("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x08        \n": : "g" ((((__UINTEGER_32__U )idtr_mem__1KB))) : "eax", "memory");



    t__WLMC=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )idtr_mem__1KB[ 2]) << 16) | ((__UINTEGER_32__U )idtr_mem__1KB[ 1]));
    asm("CLI");
    __tmp__APMC=((__UINTEGER_32__U )idtr_mem__1KB);
    idtr_mem__1KB[ 2]= 0;
    idtr_mem__1KB[ 1]= 0;
    idtr_mem__1KB[ 0]= 1023;
    asm("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x18        \n": : "g" ((__tmp__APMC)) : "eax");



    { unsigned short port;
       volatile unsigned short val;

       port=( 33);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
    result__VJFC=((__UINTEGER_8__CD )(val));
    };
    { unsigned short port;
       volatile unsigned short val;

       port=( 161);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
    result__YJFC=((__UINTEGER_8__CD )(val));
    };
    { unsigned short port;
       unsigned short val;

       port=( 32);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 160);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 8);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 112);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 4);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 2);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 0);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 158);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };

    asm("                       \n      .byte 0x9A		\n      .long 0x1000		\n      .word 0x08		\n": : : "memory");



    ;
    { unsigned short port;
       unsigned short val;

       port=( 32);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 160);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 32);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 40);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 4);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 2);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 33);
       val =(result__VJFC);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    { unsigned short port;
       unsigned short val;

       port=( 161);
       val =(result__YJFC);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
    __tmp__APMC=((__UINTEGER_32__U )idtr_mem__1KB);
    idtr_mem__1KB[ 2]=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__WLMC >> 16));
    idtr_mem__1KB[ 1]=((__UINTEGER_16__5F )(__UINTEGER_32__U)(t__WLMC & 65535));
    idtr_mem__1KB[ 0]= 2047;
    asm("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x18        \n": : "g" ((__tmp__APMC)) : "eax");



    asm("STI");
    top_stack__BKB=(__INTEGER__K)(__tmp__MOD + 1);
    val__O0LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    flags__KBB=val__O0LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    ds__HBB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    es__EBB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    di__VJB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    si__SJB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    bp__PJB=__tmp__P2LC;
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    bx__KJB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    dx__HJB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    cx__EJB=__tmp__P2LC;
    __tmp__P2LC=stack__MKB[top_stack__BKB];
    top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
    ax__KAB=__tmp__P2LC;
    if ((! ((__UINTEGER_16__5F)(val__O0LC & 1) != 0))) {
      __tmp__WNG=1;
    };
    if (__tmp__WNG) {
      __tmp__RAE=Self__2YG;
      __tmp__PLMC=((__POINTER__GB )(((void *)0)));
      __tmp__LLMC=((__UINTEGER_CPU__3AB )sizeof(__HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG));
      if ((__tmp__LLMC != 0)) {
        __tmp__NTO=27;
        clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LLMC));
        if ((__tmp__NTO == (__INTEGER__K)(- 1))) {
          __tmp__2LMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
          __tmp__4LMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__LLMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2LMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2LMC) - ((__UINTEGER_CPU__3AB ) 1)));
          __tmp__2LMC=(__UINTEGER_CPU__3AB)(__tmp__4LMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
          __tmp__AMMC=micro_alloc__table__lab__KSE(__tmp__4LMC,((__POINTER__GB )(&(table_size[(__tmp__2LMC)-1]))),((__UINTEGER_32__U )__tmp__4LMC));
          __tmp__PLMC=__tmp__AMMC;
        } else {
          t__HMMC=((__UINTEGER_32__U )__tmp__NTO);
          __tmp__2LMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
          __tmp__4LMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__LLMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2LMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2LMC) - ((__UINTEGER_CPU__3AB ) 1)));
          __tmp__AMMC=micro_alloc__table__lab__KSE(__tmp__4LMC,((__POINTER__GB )(&(table_type[(t__HMMC)]))),(__UINTEGER_32__U)(t__HMMC | 1));
          __tmp__PLMC=__tmp__AMMC;
        };
        *(((__HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG *)__tmp__PLMC)) = *((&HASHED_DICTIONARYoCACHE_SECTORxExpanded_UINTEGER_32o__LZG_));
      };
      with_capacity__MST( 193);
      with_capacity__MST( 53);
      create__ZNK();
      __tmp__QVG= 1;
      while ((__tmp__QVG <= 53)) {
        create__ZNK();
        __tmp__QVG=(__INTEGER__K)(__tmp__QVG + 1);
      };
    };
    if (((void *)__tmp__RAE != (void *)((void *)0))) {
      print__SKC((&__string_8));
      print_positif__JLQ( 128);
      put_character__UKC('\n');
      read_partition__begin__VCE(Self__GG,__tmp__RAE, 0);
    };
  };
  Result__HG=1;
  return(Result__HG);
}

static __STRING__WH* to_string__4AE(__POINTER__GB Self__5AE)

{
  __UINTEGER_CPU__3AB __tmp__BBE,val__UYE,__tmp__PZE;
  __STRING__WH *__tmp__NNE,*Self__LMMC,*Result__ABE;
  __INTEGER__K i__XYE,old_count__YYE;
  __CHARACTER__BB result__LYF;
  __tmp__BBE=((__UINTEGER_CPU__3AB )Self__5AE);
  __tmp__NNE=create__4FB( 8);
  val__UYE=((__UINTEGER_CPU__3AB ) 0);
  i__XYE= 0;
  old_count__YYE= 0;
  if ((__tmp__BBE == 0)) {
    add_last__KTS(((__STRING__WH *)__tmp__NNE),'0');
  } else {
    i__XYE=(__INTEGER__K)(__tmp__NNE->count__FK + 1);
    val__UYE=__tmp__BBE;
    while ((val__UYE != 0)) {
      __tmp__PZE=(__UINTEGER_CPU__3AB)(val__UYE & ((__UINTEGER_CPU__3AB ) 15));
      result__LYF='\0';
      if ((__tmp__PZE <= ((__UINTEGER_CPU__3AB ) 9))) {
        result__LYF=((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )__tmp__PZE) + ((__UINTEGER_8__CD )'0')));
      } else {
        result__LYF=((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )'A') + ((__UINTEGER_8__CD )(__UINTEGER_CPU__3AB)(__tmp__PZE - ((__UINTEGER_CPU__3AB ) 10)))));
      };
      add_last__KTS(((__STRING__WH *)__tmp__NNE),result__LYF);
      val__UYE=(__UINTEGER_CPU__3AB)(val__UYE >> 4);
    };
    old_count__YYE=__tmp__NNE->count__FK;
    while ((i__XYE < old_count__YYE)) {
      Self__LMMC=((__STRING__WH *)__tmp__NNE);
      result__LYF=((__CHARACTER__BB *)Self__LMMC->storage__VSS)[(__INTEGER__K)(i__XYE - 1)];
      ((__CHARACTER__BB *)Self__LMMC->storage__VSS)[(__INTEGER__K)(i__XYE - 1)]=((__CHARACTER__BB *)Self__LMMC->storage__VSS)[(__INTEGER__K)(old_count__YYE - 1)];
      ((__CHARACTER__BB *)Self__LMMC->storage__VSS)[(__INTEGER__K)(old_count__YYE - 1)]=result__LYF;
      old_count__YYE=(__INTEGER__K)(old_count__YYE - 1);
      i__XYE=(__INTEGER__K)(i__XYE + 1);
    };
  };
  Result__ABE=__tmp__NNE;
  return(Result__ABE);
}

static void print__NET(__STRING__WH *Self__OET)

{
  __INTEGER__K Self__AAW,limit_up__BAW;
  Self__AAW= 1;
  limit_up__BAW=Self__OET->count__FK;
  while ((Self__AAW <= limit_up__BAW)) {
    put_character__UKC(((__CHARACTER__BB *)Self__OET->storage__VSS)[(__INTEGER__K)(Self__AAW - 1)]);
    Self__AAW=(__INTEGER__K)(Self__AAW + 1);
  };
}

static void print__SKC(__STRING_CONSTANT__Y *Self__TKC)

{
  __INTEGER__K Self__OPH,limit_up__PPH;
  Self__OPH= 1;
  limit_up__PPH=Self__TKC->count__LC;
  while ((Self__OPH <= limit_up__PPH)) {
    put_character__UKC(((__CHARACTER__BB *)Self__TKC->storage__MC)[(__INTEGER__K)(Self__OPH - 1)]);
    Self__OPH=(__INTEGER__K)(Self__OPH + 1);
  };
}

static void copy__5RS(__STRING__WH *Self__ASS,__STRING_CONSTANT__Y *other__BSS)

{
  __CHARACTER__BB *__tmp__USS;
  Self__ASS->count__FK=other__BSS->count__LC;
  if ((Self__ASS->count__FK > 0)) {
    if ((Self__ASS->capacity__KSS < Self__ASS->count__FK)) {
      __tmp__USS=create__MUX(Self__ASS->count__FK);
      Self__ASS->storage__VSS=__tmp__USS;
      Self__ASS->capacity__KSS=Self__ASS->count__FK;
    };
    copy_from__until__3UX(((__CHARACTER__BB *)Self__ASS->storage__VSS),other__BSS->storage__MC,(__INTEGER__K)(Self__ASS->count__FK - 1));
  };
}

static void add_last__KTS(__STRING__WH *Self__LTS,__CHARACTER__BB ch__MTS)

{
  __INTEGER__K __tmp__EUS,old_nb_elts__SMMC;
  __POINTER__GB __tmp__VMMC;
  __CHARACTER__BB *__tmp__3TS;
  if ((Self__LTS->capacity__KSS <= Self__LTS->count__FK)) {
    if ((Self__LTS->capacity__KSS == 0)) {
      Self__LTS->capacity__KSS= 32;
      __tmp__3TS=create__MUX( 32);
      Self__LTS->storage__VSS=__tmp__3TS;
    } else {
      __tmp__EUS=(__INTEGER__K)(Self__LTS->capacity__KSS << 1);
      __tmp__3TS=((__CHARACTER__BB *)Self__LTS->storage__VSS);
      old_nb_elts__SMMC=Self__LTS->capacity__KSS;
      __tmp__VMMC=realloc_dynamic__old_size__new_size__VJ0(((__POINTER__GB )__tmp__3TS),((__UINTEGER_CPU__3AB )old_nb_elts__SMMC),((__UINTEGER_CPU__3AB )__tmp__EUS));
      __tmp__3TS=((__CHARACTER__BB *)__tmp__VMMC);
      clear__to__NFCB(__tmp__3TS,old_nb_elts__SMMC,(__INTEGER__K)(__tmp__EUS - 1));
      Self__LTS->storage__VSS=__tmp__3TS;
      Self__LTS->capacity__KSS=__tmp__EUS;
    };
  };
  ((__CHARACTER__BB *)Self__LTS->storage__VSS)[Self__LTS->count__FK]=ch__MTS;
  Self__LTS->count__FK=(__INTEGER__K)(Self__LTS->count__FK + 1);
}

static void append__PUS(__STRING__WH *Self__QUS,void *other__RUS)

{
  __INTEGER__K __tmp__0US,__tmp__2US,old_nb_elts__0N2,src_capacity__JE2;
  __INTEGER__K i1__YE2;
  __POINTER__GB __tmp__4O2;
  __CHARACTER__BB *__tmp__LVS,*__tmp__YVS,*Self__GE2;
  if (((struct ___OBJ *)other__RUS)->__id==6) {
    __tmp__0US=((__STRING_CONSTANT__Y *)other__RUS)->count__LC;
  } else {
    __tmp__0US=((__STRING__WH *)other__RUS)->count__FK;
  };
  __tmp__2US=(__INTEGER__K)(Self__QUS->count__FK + __tmp__0US);
  if ((Self__QUS->capacity__KSS < __tmp__2US)) {
    if ((Self__QUS->capacity__KSS == 0)) {
      Self__QUS->capacity__KSS=__tmp__2US;
      __tmp__LVS=create__MUX(__tmp__2US);
      Self__QUS->storage__VSS=__tmp__LVS;
    } else {
      __tmp__LVS=((__CHARACTER__BB *)Self__QUS->storage__VSS);
      old_nb_elts__0N2=Self__QUS->capacity__KSS;
      __tmp__4O2=realloc_dynamic__old_size__new_size__VJ0(((__POINTER__GB )__tmp__LVS),((__UINTEGER_CPU__3AB )old_nb_elts__0N2),((__UINTEGER_CPU__3AB )__tmp__2US));
      __tmp__LVS=((__CHARACTER__BB *)__tmp__4O2);
      clear__to__NFCB(__tmp__LVS,old_nb_elts__0N2,(__INTEGER__K)(__tmp__2US - 1));
      Self__QUS->storage__VSS=__tmp__LVS;
      Self__QUS->capacity__KSS=__tmp__2US;
    };
  };
  __tmp__LVS=Self__QUS->storage__VSS;
  if (((struct ___OBJ *)other__RUS)->__id==6) {
    __tmp__YVS=((__STRING_CONSTANT__Y *)other__RUS)->storage__MC;
  } else {
    __tmp__YVS=((__STRING__WH *)other__RUS)->storage__VSS;
  };
  Self__GE2=((__CHARACTER__BB *)__tmp__LVS);
  __tmp__LVS=__tmp__YVS;
  old_nb_elts__0N2=Self__QUS->count__FK;
  src_capacity__JE2=__tmp__0US;
  __tmp__0US= 0;
  i1__YE2=old_nb_elts__0N2;
  while ((__tmp__0US != src_capacity__JE2)) {
    Self__GE2[i1__YE2]=((__CHARACTER__BB *)__tmp__LVS)[__tmp__0US];
    __tmp__0US=(__INTEGER__K)(__tmp__0US + 1);
    i1__YE2=(__INTEGER__K)(i1__YE2 + 1);
  };
  Self__QUS->count__FK=__tmp__2US;
}

static void reduce_path__YR(__STRING__WH *st__0R)

{
  __INTEGER__K stat__2R,i__1R,Self__LUL,__tmp__RT;
  __CHARACTER__BB __tmp__MS;
  __BOOLEAN__C __tmp__FU,__tmp__5GJ,__tmp__4V,__tmp__LW;
  stat__2R= 0;
  replace_all__with__DXS(((__STRING__WH *)st__0R));
  i__1R= 1;
  while ((i__1R <= ((__STRING__WH *)st__0R)->count__FK)) {
    __tmp__MS=((__CHARACTER__BB *)((__STRING__WH *)st__0R)->storage__VSS)[(__INTEGER__K)(i__1R - 1)];
    if ((__tmp__MS == '/')) {
      Self__LUL=stat__2R;
      if ((stat__2R == 0)) {
        stat__2R= 1;
      };
      if ((Self__LUL == 1)) {
        remove_first__20T(((__STRING__WH *)st__0R),(__INTEGER__K)(i__1R - 1));
        i__1R= 1;
      };
      if ((Self__LUL == 2)) {
        remove_between__to__4IT(((__STRING__WH *)st__0R),(__INTEGER__K)(i__1R - 1),i__1R);
        i__1R=(__INTEGER__K)(i__1R - 2);
        stat__2R= 1;
      };
      if ((Self__LUL == 3)) {
        __tmp__RT=last_index_of__since__PGT(((__STRING__WH *)st__0R),(__INTEGER__K)(i__1R - 4));
        if ((__tmp__RT == 0)) {
          remove_first__20T(((__STRING__WH *)st__0R),(__INTEGER__K)(i__1R - 1));
          i__1R= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)st__0R),__tmp__RT,(__INTEGER__K)(i__1R - 1));
          i__1R=__tmp__RT;
        };
        stat__2R= 1;
      };
      __tmp__FU=1;
    } else {
      __tmp__FU=0;
    };
    if (__tmp__FU) {
      __tmp__FU=1;
    } else {
      __tmp__5GJ=(__tmp__MS == '.');
      if (__tmp__5GJ) {
        __tmp__RT=stat__2R;
        if ((stat__2R == 1)) {
          stat__2R= 2;
        };
        if ((__tmp__RT == 2)) {
          stat__2R= 3;
        };
        if ((__tmp__RT == 3)) {
          stat__2R= 0;
        };
      };
      __tmp__FU=__tmp__5GJ;
    };
    if ((! __tmp__FU)) {
      if (((__tmp__MS == ':') && (i__1R > 2))) {
        __tmp__4V=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)st__0R)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__1R - 1) - 1)]);
        __tmp__LW=__tmp__4V;
      } else {
        __tmp__LW=0;
      };
      if ((__tmp__LW && (((__CHARACTER__BB *)((__STRING__WH *)st__0R)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__1R - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)st__0R),(__INTEGER__K)(i__1R - 2));
        i__1R= 1;
      } else {
        stat__2R= 0;
      };
    };
    i__1R=(__INTEGER__K)(i__1R + 1);
  };
  if ((stat__2R == 1)) {
    remove_last__JFT(((__STRING__WH *)st__0R), 1);
  };
  if ((stat__2R == 2)) {
    remove_last__JFT(((__STRING__WH *)st__0R), 2);
  };
  if ((stat__2R == 3)) {
    Self__LUL=last_index_of__since__PGT(((__STRING__WH *)st__0R),(__INTEGER__K)(i__1R - 4));
    if ((Self__LUL == 0)) {
      ((__STRING__WH *)st__0R)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)st__0R),Self__LUL,(__INTEGER__K)(i__1R - 1));
    };
  };
  if ((((__STRING__WH *)st__0R)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)st__0R),'/');
  };
}

static void copy__1VS(__STRING__WH *Self__2VS,__STRING__WH *other__3VS)

{
  __CHARACTER__BB *__tmp__PWS;
  Self__2VS->count__FK=other__3VS->count__FK;
  if ((Self__2VS->count__FK > 0)) {
    if ((Self__2VS->capacity__KSS < Self__2VS->count__FK)) {
      __tmp__PWS=create__MUX(Self__2VS->count__FK);
      Self__2VS->storage__VSS=__tmp__PWS;
      Self__2VS->capacity__KSS=Self__2VS->count__FK;
    };
    copy_from__until__3UX(((__CHARACTER__BB *)Self__2VS->storage__VSS),other__3VS->storage__VSS,(__INTEGER__K)(Self__2VS->count__FK - 1));
  };
}

static void* reference_at__E3F(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__F3F,__STRING__WH *k__G3F)

{
  void *result__U3F,*Result__H3F;
  __INTEGER__K __tmp__V3F;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__T3F;
  __BOOLEAN__C __tmp__P4F,__tmp__M4F;
  result__U3F=((void *)0);
  __tmp__V3F=hash_code__DPT(((__STRING__WH *)k__G3F));
  node__T3F=((void **)Self__F3F->buckets__43F)[(__INTEGER__K)(__tmp__V3F % Self__F3F->capacity__W3F)];
  until_do__4EH:
  {
    if (((void *)node__T3F == (void *)((void *)0))) {
      __tmp__P4F=1;
    } else {
      __tmp__M4F=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__T3F->key__K4F),k__G3F);
      __tmp__P4F=__tmp__M4F;
    };
    if ((! __tmp__P4F)) {
      node__T3F=node__T3F->next__W4F;
      goto until_do__4EH;
    };
  };
  if (((void *)node__T3F != (void *)((void *)0))) {
    result__U3F=node__T3F->item__44F;
  };
  Result__H3F=result__U3F;
  return(Result__H3F);
}

static __INTEGER__K fast_reverse_index_of__from__TAW(__CHARACTER__BB *Self__UAW,__INTEGER__K upper__WAW)

{
  __INTEGER__K idx__ABW,Result__XAW;
  idx__ABW=upper__WAW;
  while ((! ((idx__ABW < 0) || ('/' == Self__UAW[idx__ABW])))) {
    idx__ABW=(__INTEGER__K)(idx__ABW - 1);
  };
  Result__XAW=idx__ABW;
  return(Result__XAW);
}

static void keep_head__3CT(__STRING__WH *Self__4CT,__INTEGER__K n__5CT)

{
  if ((n__5CT < Self__4CT->count__FK)) {
    remove_last__JFT(Self__4CT,(__INTEGER__K)(Self__4CT->count__FK - n__5CT));
  };
}

static __DIRECTORY_UNIX__GHB* parent_directory__2GB()

{
  __STRING__WH *Self__T5S;
  void *__tmp__NHB;
  __DIRECTORY_UNIX__GHB *__tmp__PHB,*Result__4GB;
  __STRING_CONSTANT__Y *k__SAG;
  __INTEGER__K __tmp__2AG,__tmp__4AG,idx__0AG;
  __CHARACTER__BB *__tmp__EHB;
  __HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__QAG;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__1AG;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__LCG;
  __BOOLEAN__C __tmp__OBG,__tmp__LBG;
  ((__STRING__WH *)string_tmp__BHB)->count__FK= 0;
  __tmp__EHB=to_external__L4S(((__STRING__WH *)string_tmp__BHB));
  getcwd((__tmp__EHB),255);
  Self__T5S=((__STRING__WH *)string_tmp__BHB);
  Self__T5S->count__FK= 0;
  while ((((__CHARACTER__BB *)__tmp__EHB)[Self__T5S->count__FK] != '\0')) {
    Self__T5S->count__FK=(__INTEGER__K)(Self__T5S->count__FK + 1);
  };
  if (((void *)Self__T5S->storage__VSS != (void *)__tmp__EHB)) {
    Self__T5S->storage__VSS=__tmp__EHB;
    Self__T5S->capacity__KSS=(__INTEGER__K)(Self__T5S->count__FK + 1);
  };
  __tmp__NHB=physical_get_entry__1PB(string_tmp__BHB);
  if (__tmp__NHB==((void *)0)) {
    __tmp__PHB=((void *)0);
  } else {
    if (((struct ___OBJ *)__tmp__NHB)->__id==7) {
      __tmp__PHB=((void *)__tmp__NHB);
    } else {
      __tmp__PHB=((void *)0);
    }
  };
  Self__QAG=((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG);
  k__SAG=__tmp__PHB->parent_entry_unix__JHB.path__YG;
  __tmp__2AG=hash_code__BQT(((__STRING_CONSTANT__Y *)k__SAG));
  __tmp__4AG=(__INTEGER__K)(__tmp__2AG % Self__QAG->capacity__W3F);
  idx__0AG=__tmp__4AG;
  node__1AG=((void **)Self__QAG->buckets__43F)[__tmp__4AG];
  until_do__GHH:
  {
    if (((void *)node__1AG == (void *)((void *)0))) {
      __tmp__OBG=1;
    } else {
      __tmp__LBG=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__1AG->key__K4F),k__SAG);
      __tmp__OBG=__tmp__LBG;
    };
    if ((! __tmp__OBG)) {
      node__1AG=node__1AG->next__W4F;
      goto until_do__GHH;
    };
  };
  if (((void *)node__1AG == (void *)((void *)0))) {
    if ((Self__QAG->capacity__W3F == Self__QAG->count__3BG)) {
      increase_capacity__PXL(Self__QAG);
      idx__0AG=(__INTEGER__K)(__tmp__2AG % Self__QAG->capacity__W3F);
    };
    __tmp__LCG=new_node__to__next__UIJ(__tmp__PHB,k__SAG,((void **)Self__QAG->buckets__43F)[idx__0AG]);
    node__1AG=__tmp__LCG;
    ((void **)Self__QAG->buckets__43F)[idx__0AG]=__tmp__LCG;
    Self__QAG->count__3BG=(__INTEGER__K)(Self__QAG->count__3BG + 1);
  } else {
    ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node__1AG)->item__44F=__tmp__PHB;
  };
  (&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB=0;
  Result__4GB=__tmp__PHB;
  return(Result__4GB);
}

static void* physical_get_entry__HYN(__STRING__WH *new_path__JYN)

{
  void *result__MYN,*Result__KYN;
  __FILE_UNIX__OQB *__tmp__0YN;
  __DIRECTORY_UNIX__GHB *__tmp__AZN;
  __STRING_CONSTANT__Y *__tmp__DZN;
  __CHARACTER__BB *__tmp__NYN;
  result__MYN=((void *)0);
  __tmp__NYN=to_external__L4S(((__STRING__WH *)new_path__JYN));

    ;
  { struct stat t;
  if ((((__INTEGER__K )(stat((__tmp__NYN),&t))) == 0)) {
    if ((((__INTEGER__K )((((t.st_mode) & 0170000) == 0040000))) == 0)) {
      __tmp__0YN=clone__KVC();
      result__MYN=__tmp__0YN;
    } else {
      __tmp__AZN=clone__BXC();
      result__MYN=__tmp__AZN;
    };
    if (((struct ___OBJ *)result__MYN)->__id==7) {
      set_path__UEG(((__DIRECTORY_UNIX__GHB *)result__MYN),new_path__JYN);
    } else {
      set_path__OFG(((__FILE_UNIX__OQB *)((__DIRECTORY_UNIX__GHB *)result__MYN)),new_path__JYN);
    };
    if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
    } else {
      parent_directory__2GB();
    };
    if (((struct ___OBJ *)result__MYN)->__id==7) {
      __tmp__DZN=((__DIRECTORY_UNIX__GHB *)result__MYN)->parent_entry_unix__JHB.path__YG;
    } else {
      __tmp__DZN=((__FILE_UNIX__OQB *)result__MYN)->parent_entry_unix__PQB.path__YG;
    };
    put__to__LGG(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),result__MYN,__tmp__DZN);
  };
  };
# 3946 "startup.c"
    ;
  Result__KYN=result__MYN;
  return(Result__KYN);
}

static void* physical_get_entry__11BB(__FILE_SYSTEM__2B *Self__21BB,__STRING__WH *new_path__31BB)

{
  void *result__51BB,*result__35JB,*__tmp__MAKB,*__tmp__TCKB;
  void *Result__41BB;
  __STRING__WH *Self__KEKC;
  __INTEGER__K __tmp__LEKC,__tmp__TAKB;
  void *__tmp__RCKB;
  __BOOLEAN__C __tmp__H2BB,__tmp__K2BB,__tmp__ACKB;
  result__51BB=((void *)0);
  if ((! ((void *)Self__21BB->parent_directory__4B.list__GH != (void *)((void *)0)))) {
    __tmp__H2BB=open__FG(Self__21BB);
    __tmp__K2BB=__tmp__H2BB;
  } else {
    __tmp__K2BB=0;
  };
  if (__tmp__K2BB) {
    result__35JB=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__21BB->parent_entry__3B.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__31BB);
    reduce_path__YR(string_tmp2__1H);
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__MAKB=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__35JB=__tmp__MAKB;
      if (((void *)__tmp__MAKB == (void *)((void *)0))) {
        Self__KEKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__LEKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__KEKC->storage__VSS),(__INTEGER__K)(Self__KEKC->count__FK - 1));
        __tmp__TAKB=(__INTEGER__K)( 1 + __tmp__LEKC);
        if ((__tmp__TAKB > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__TAKB - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__MAKB == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__35JB == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__MAKB=physical_get_entry__HYN(string_tmp3__BI);
      result__35JB=__tmp__MAKB;
      __tmp__ACKB=1;
    } else {
      __tmp__ACKB=0;
    };
    if ((! __tmp__ACKB)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__35JB==((void *)0)) {
          __tmp__RCKB=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__35JB)->__id) {
          case 5: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 7: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__RCKB=((void *)0);
          } break;
          case 9: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 8: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 10: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 11: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 13: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          case 12: {
            __tmp__RCKB=((void *)result__35JB);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__RCKB)->__id) {
        case 5: {
          __tmp__TCKB=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__RCKB),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__TCKB=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__TCKB=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__RCKB)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__TCKB=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__RCKB)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__TCKB=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__RCKB)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__TCKB=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__RCKB)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__TCKB=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__RCKB)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__TCKB=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__RCKB)),string_tmp3__BI);
        } break;
        };
        result__35JB=__tmp__TCKB;
      };
    };
    result__51BB=result__35JB;
  };
  Result__41BB=result__51BB;
  return(Result__41BB);
}

static void* physical_get_entry__1PB(__STRING__WH *new_path__3PB)

{
  void *result__AQB,*Result__4PB;
  __FILE_UNIX__OQB *__tmp__TQB;
  __DIRECTORY_UNIX__GHB *__tmp__ZQB;
  __STRING_CONSTANT__Y *__tmp__2QB;
  __CHARACTER__BB *__tmp__BQB;
  result__AQB=((void *)0);
  __tmp__BQB=to_external__L4S(((__STRING__WH *)new_path__3PB));

    ;
  { struct stat t;
  if ((((__INTEGER__K )(stat((__tmp__BQB),&t))) == 0)) {
    if ((((__INTEGER__K )((((t.st_mode) & 0170000) == 0040000))) == 0)) {
      __tmp__TQB=clone__KVC();
      result__AQB=__tmp__TQB;
    } else {
      __tmp__ZQB=clone__BXC();
      result__AQB=__tmp__ZQB;
    };
    if (((struct ___OBJ *)result__AQB)->__id==7) {
      set_path__UEG(((__DIRECTORY_UNIX__GHB *)result__AQB),new_path__3PB);
    } else {
      set_path__OFG(((__FILE_UNIX__OQB *)((__DIRECTORY_UNIX__GHB *)result__AQB)),new_path__3PB);
    };
    if (((struct ___OBJ *)result__AQB)->__id==7) {
      __tmp__2QB=((__DIRECTORY_UNIX__GHB *)result__AQB)->parent_entry_unix__JHB.path__YG;
    } else {
      __tmp__2QB=((__FILE_UNIX__OQB *)result__AQB)->parent_entry_unix__PQB.path__YG;
    };
    put__to__LGG(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),result__AQB,__tmp__2QB);
  };
  };
# 4130 "startup.c"
    ;
  Result__4PB=result__AQB;
  return(Result__4PB);
}

static void* physical_get_entry__X2BB(__FAT12__UFE *Self__Y2BB,__STRING__WH *new_path__Z2BB)

{
  void *result__12BB,*result__5CKB,*__tmp__ODKB,*__tmp__VFKB;
  void *Result__02BB;
  __STRING__WH *Self__OEKC;
  __INTEGER__K __tmp__PEKC,__tmp__VDKB;
  void *__tmp__TFKB;
  __BOOLEAN__C __tmp__D3BB,__tmp__G3BB,__tmp__CFKB;
  result__12BB=((void *)0);
  if ((! ((void *)Self__Y2BB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    __tmp__D3BB=open__0UBB(Self__Y2BB);
    __tmp__G3BB=__tmp__D3BB;
  } else {
    __tmp__G3BB=0;
  };
  if (__tmp__G3BB) {
    result__5CKB=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__Y2BB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__Z2BB);
    reduce_path__IUEB(string_tmp2__1H);
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__ODKB=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__5CKB=__tmp__ODKB;
      if (((void *)__tmp__ODKB == (void *)((void *)0))) {
        Self__OEKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__PEKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__OEKC->storage__VSS),(__INTEGER__K)(Self__OEKC->count__FK - 1));
        __tmp__VDKB=(__INTEGER__K)( 1 + __tmp__PEKC);
        if ((__tmp__VDKB > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__VDKB - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__ODKB == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__5CKB == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__ODKB=physical_get_entry__HYN(string_tmp3__BI);
      result__5CKB=__tmp__ODKB;
      __tmp__CFKB=1;
    } else {
      __tmp__CFKB=0;
    };
    if ((! __tmp__CFKB)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__5CKB==((void *)0)) {
          __tmp__TFKB=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__5CKB)->__id) {
          case 5: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 7: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__TFKB=((void *)0);
          } break;
          case 9: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 8: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 10: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 11: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 13: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          case 12: {
            __tmp__TFKB=((void *)result__5CKB);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__TFKB)->__id) {
        case 5: {
          __tmp__VFKB=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__TFKB),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__VFKB=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__VFKB=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__TFKB)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__VFKB=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__TFKB)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__VFKB=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__TFKB)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__VFKB=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__TFKB)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__VFKB=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__TFKB)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__VFKB=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__TFKB)),string_tmp3__BI);
        } break;
        };
        result__5CKB=__tmp__VFKB;
      };
    };
    result__12BB=result__5CKB;
  };
  Result__02BB=result__12BB;
  return(Result__02BB);
}

static void* physical_get_entry__MWVB(__DIRECTORY_FAT__XFE *Self__NWVB,__STRING__WH *new_path__OWVB)

{
  void *result__QWVB,*result__ZT2B,*__tmp__IU2B,*__tmp__PW2B;
  void *Result__PWVB;
  __STRING__WH *Self__SEKC;
  __INTEGER__K __tmp__TEKC,__tmp__PU2B;
  void *__tmp__NW2B;
  __BOOLEAN__C __tmp__YWVB,__tmp__1WVB,__tmp__2V2B;
  result__QWVB=((void *)0);
  if ((! ((void *)Self__NWVB->parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    __tmp__YWVB=open__RQVB(Self__NWVB);
    __tmp__1WVB=__tmp__YWVB;
  } else {
    __tmp__1WVB=0;
  };
  if (__tmp__1WVB) {
    result__ZT2B=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__NWVB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__OWVB);
    reduce_path__03WB(string_tmp2__1H);
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__IU2B=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__ZT2B=__tmp__IU2B;
      if (((void *)__tmp__IU2B == (void *)((void *)0))) {
        Self__SEKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__TEKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__SEKC->storage__VSS),(__INTEGER__K)(Self__SEKC->count__FK - 1));
        __tmp__PU2B=(__INTEGER__K)( 1 + __tmp__TEKC);
        if ((__tmp__PU2B > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__PU2B - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__IU2B == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__ZT2B == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__IU2B=physical_get_entry__HYN(string_tmp3__BI);
      result__ZT2B=__tmp__IU2B;
      __tmp__2V2B=1;
    } else {
      __tmp__2V2B=0;
    };
    if ((! __tmp__2V2B)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__ZT2B==((void *)0)) {
          __tmp__NW2B=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__ZT2B)->__id) {
          case 5: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 7: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__NW2B=((void *)0);
          } break;
          case 9: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 8: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 10: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 11: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 13: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          case 12: {
            __tmp__NW2B=((void *)result__ZT2B);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__NW2B)->__id) {
        case 5: {
          __tmp__PW2B=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__NW2B),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__PW2B=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__PW2B=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__NW2B)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__PW2B=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__NW2B)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__PW2B=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__NW2B)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__PW2B=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__NW2B)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__PW2B=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__NW2B)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__PW2B=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__NW2B)),string_tmp3__BI);
        } break;
        };
        result__ZT2B=__tmp__PW2B;
      };
    };
    result__QWVB=result__ZT2B;
  };
  Result__PWVB=result__QWVB;
  return(Result__PWVB);
}

static void* physical_get_entry__T1QB(__FAT16__OGE *Self__U1QB,__STRING__WH *new_path__V1QB)

{
  void *result__X1QB,*result__DTXB,*__tmp__STXB,*__tmp__ZVXB;
  void *Result__W1QB;
  __STRING__WH *Self__WEKC;
  __INTEGER__K __tmp__XEKC,__tmp__ZTXB;
  void *__tmp__XVXB;
  __BOOLEAN__C __tmp__51QB,__tmp__C2QB,__tmp__GVXB;
  result__X1QB=((void *)0);
  if ((! ((void *)Self__U1QB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    __tmp__51QB=open__BGQB(Self__U1QB);
    __tmp__C2QB=__tmp__51QB;
  } else {
    __tmp__C2QB=0;
  };
  if (__tmp__C2QB) {
    result__DTXB=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__U1QB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__V1QB);
    reduce_path__NBSB(string_tmp2__1H);
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__STXB=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__DTXB=__tmp__STXB;
      if (((void *)__tmp__STXB == (void *)((void *)0))) {
        Self__WEKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__XEKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__WEKC->storage__VSS),(__INTEGER__K)(Self__WEKC->count__FK - 1));
        __tmp__ZTXB=(__INTEGER__K)( 1 + __tmp__XEKC);
        if ((__tmp__ZTXB > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__ZTXB - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__STXB == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__DTXB == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__STXB=physical_get_entry__HYN(string_tmp3__BI);
      result__DTXB=__tmp__STXB;
      __tmp__GVXB=1;
    } else {
      __tmp__GVXB=0;
    };
    if ((! __tmp__GVXB)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__DTXB==((void *)0)) {
          __tmp__XVXB=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__DTXB)->__id) {
          case 5: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 7: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__XVXB=((void *)0);
          } break;
          case 9: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 8: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 10: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 11: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 13: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          case 12: {
            __tmp__XVXB=((void *)result__DTXB);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__XVXB)->__id) {
        case 5: {
          __tmp__ZVXB=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__XVXB),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__ZVXB=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__ZVXB=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__XVXB)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__ZVXB=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__XVXB)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__ZVXB=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__XVXB)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__ZVXB=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__XVXB)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__ZVXB=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__XVXB)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__ZVXB=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__XVXB)),string_tmp3__BI);
        } break;
        };
        result__DTXB=__tmp__ZVXB;
      };
    };
    result__X1QB=result__DTXB;
  };
  Result__W1QB=result__X1QB;
  return(Result__W1QB);
}

static void* physical_get_entry__P2QB(__FAT32__4GE *Self__Q2QB,__STRING__WH *new_path__R2QB)

{
  void *result__T2QB,*result__FWXB,*__tmp__UWXB,*__tmp__1YXB;
  void *Result__S2QB;
  __STRING__WH *Self__0EKC;
  __INTEGER__K __tmp__1EKC,__tmp__1WXB;
  void *__tmp__ZYXB;
  __BOOLEAN__C __tmp__12QB,__tmp__42QB,__tmp__IYXB;
  result__T2QB=((void *)0);
  if ((! ((void *)Self__Q2QB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    __tmp__12QB=open__XLQB(Self__Q2QB);
    __tmp__42QB=__tmp__12QB;
  } else {
    __tmp__42QB=0;
  };
  if (__tmp__42QB) {
    result__FWXB=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__Q2QB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__R2QB);
    reduce_path__LKSB(string_tmp2__1H);
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__UWXB=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__FWXB=__tmp__UWXB;
      if (((void *)__tmp__UWXB == (void *)((void *)0))) {
        Self__0EKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__1EKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__0EKC->storage__VSS),(__INTEGER__K)(Self__0EKC->count__FK - 1));
        __tmp__1WXB=(__INTEGER__K)( 1 + __tmp__1EKC);
        if ((__tmp__1WXB > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__1WXB - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__UWXB == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__FWXB == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__UWXB=physical_get_entry__HYN(string_tmp3__BI);
      result__FWXB=__tmp__UWXB;
      __tmp__IYXB=1;
    } else {
      __tmp__IYXB=0;
    };
    if ((! __tmp__IYXB)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__FWXB==((void *)0)) {
          __tmp__ZYXB=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__FWXB)->__id) {
          case 5: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 7: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__ZYXB=((void *)0);
          } break;
          case 9: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 8: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 10: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 11: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 13: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          case 12: {
            __tmp__ZYXB=((void *)result__FWXB);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__ZYXB)->__id) {
        case 5: {
          __tmp__1YXB=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__ZYXB),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__1YXB=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__1YXB=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__ZYXB)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__1YXB=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__ZYXB)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__1YXB=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__ZYXB)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__1YXB=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__ZYXB)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__1YXB=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__ZYXB)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__1YXB=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__ZYXB)),string_tmp3__BI);
        } break;
        };
        result__FWXB=__tmp__1YXB;
      };
    };
    result__T2QB=result__FWXB;
  };
  Result__S2QB=result__T2QB;
  return(Result__S2QB);
}

static void* physical_get_entry__K3QB(__EXT2__OHE *Self__L3QB,__STRING__WH *new_path__M3QB)

{
  void *result__O3QB,*result__GZXB,*__tmp__VZXB,*__tmp__21XB;
  void *Result__N3QB;
  __INTEGER__K stat__WVYB,i__VVYB,Self__RJ4B,__tmp__KXYB,__tmp__2ZXB;
  __STRING__WH *Self__5EKC;
  void *__tmp__01XB;
  __BOOLEAN__C __tmp__W3QB,__tmp__Z3QB,__tmp__4XYB,__tmp__DR3B;
  __BOOLEAN__C __tmp__XZYB,__tmp__E0YB;
  __CHARACTER__BB __tmp__FWYB;
  result__O3QB=((void *)0);
  if ((! ((void *)Self__L3QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_directory__UHE.list__GH != (void *)((void *)0)))) {
    __tmp__W3QB=open__MRQB(Self__L3QB);
    __tmp__Z3QB=__tmp__W3QB;
  } else {
    __tmp__Z3QB=0;
  };
  if (__tmp__Z3QB) {
    result__GZXB=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__L3QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__M3QB);
    stat__WVYB= 0;
    replace_all__with__DXS(((__STRING__WH *)string_tmp2__1H));
    i__VVYB= 1;
    while ((i__VVYB <= ((__STRING__WH *)string_tmp2__1H)->count__FK)) {
      __tmp__FWYB=((__CHARACTER__BB *)((__STRING__WH *)string_tmp2__1H)->storage__VSS)[(__INTEGER__K)(i__VVYB - 1)];
      if ((__tmp__FWYB == '/')) {
        Self__RJ4B=stat__WVYB;
        if ((stat__WVYB == 0)) {
          stat__WVYB= 1;
        };
        if ((Self__RJ4B == 1)) {
          remove_first__20T(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__VVYB - 1));
          i__VVYB= 1;
        };
        if ((Self__RJ4B == 2)) {
          remove_between__to__4IT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__VVYB - 1),i__VVYB);
          i__VVYB=(__INTEGER__K)(i__VVYB - 2);
          stat__WVYB= 1;
        };
        if ((Self__RJ4B == 3)) {
          __tmp__KXYB=last_index_of__since__PGT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__VVYB - 4));
          if ((__tmp__KXYB == 0)) {
            remove_first__20T(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__VVYB - 1));
            i__VVYB= 1;
          } else {
            remove_between__to__4IT(((__STRING__WH *)string_tmp2__1H),__tmp__KXYB,(__INTEGER__K)(i__VVYB - 1));
            i__VVYB=__tmp__KXYB;
          };
          stat__WVYB= 1;
        };
        __tmp__4XYB=1;
      } else {
        __tmp__4XYB=0;
      };
      if (__tmp__4XYB) {
        __tmp__4XYB=1;
      } else {
        __tmp__DR3B=(__tmp__FWYB == '.');
        if (__tmp__DR3B) {
          __tmp__KXYB=stat__WVYB;
          if ((stat__WVYB == 1)) {
            stat__WVYB= 2;
          };
          if ((__tmp__KXYB == 2)) {
            stat__WVYB= 3;
          };
          if ((__tmp__KXYB == 3)) {
            stat__WVYB= 0;
          };
        };
        __tmp__4XYB=__tmp__DR3B;
      };
      if ((! __tmp__4XYB)) {
        if (((__tmp__FWYB == ':') && (i__VVYB > 2))) {
          __tmp__XZYB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)string_tmp2__1H)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__VVYB - 1) - 1)]);
          __tmp__E0YB=__tmp__XZYB;
        } else {
          __tmp__E0YB=0;
        };
        if ((__tmp__E0YB && (((__CHARACTER__BB *)((__STRING__WH *)string_tmp2__1H)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__VVYB - 2) - 1)] == '/'))) {
          remove_first__20T(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__VVYB - 2));
          i__VVYB= 1;
        } else {
          stat__WVYB= 0;
        };
      };
      i__VVYB=(__INTEGER__K)(i__VVYB + 1);
    };
    if ((stat__WVYB == 1)) {
      remove_last__JFT(((__STRING__WH *)string_tmp2__1H), 1);
    };
    if ((stat__WVYB == 2)) {
      remove_last__JFT(((__STRING__WH *)string_tmp2__1H), 2);
    };
    if ((stat__WVYB == 3)) {
      Self__RJ4B=last_index_of__since__PGT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__VVYB - 4));
      if ((Self__RJ4B == 0)) {
        ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
      } else {
        remove_between__to__4IT(((__STRING__WH *)string_tmp2__1H),Self__RJ4B,(__INTEGER__K)(i__VVYB - 1));
      };
    };
    if ((((__STRING__WH *)string_tmp2__1H)->count__FK == 0)) {
      add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    };
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__VZXB=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__GZXB=__tmp__VZXB;
      if (((void *)__tmp__VZXB == (void *)((void *)0))) {
        Self__5EKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__KXYB=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__5EKC->storage__VSS),(__INTEGER__K)(Self__5EKC->count__FK - 1));
        __tmp__2ZXB=(__INTEGER__K)( 1 + __tmp__KXYB);
        if ((__tmp__2ZXB > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__2ZXB - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__VZXB == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__GZXB == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__VZXB=physical_get_entry__HYN(string_tmp3__BI);
      result__GZXB=__tmp__VZXB;
      __tmp__4XYB=1;
    } else {
      __tmp__4XYB=0;
    };
    if ((! __tmp__4XYB)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__GZXB==((void *)0)) {
          __tmp__01XB=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__GZXB)->__id) {
          case 5: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 7: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__01XB=((void *)0);
          } break;
          case 9: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 8: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 10: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 11: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 13: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          case 12: {
            __tmp__01XB=((void *)result__GZXB);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__01XB)->__id) {
        case 5: {
          __tmp__21XB=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__01XB),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__21XB=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__21XB=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__01XB)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__21XB=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__01XB)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__21XB=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__01XB)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__21XB=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__01XB)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__21XB=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__01XB)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__21XB=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__01XB)),string_tmp3__BI);
        } break;
        };
        result__GZXB=__tmp__21XB;
      };
    };
    result__O3QB=result__GZXB;
  };
  Result__N3QB=result__O3QB;
  return(Result__N3QB);
}

static void* physical_get_entry__OO1B(__DIRECTORY_EXT2__QHE *Self__PO1B,__STRING__WH *new_path__QO1B)

{
  void *result__SO1B,*result__JE5B,*__tmp__YE5B,*__tmp__5G5B;
  void *Result__RO1B;
  __INTEGER__K stat__FK5B,i__EK5B,Self__BPAC,__tmp__ZL5B,__tmp__5E5B;
  __STRING__WH *Self__EFKC;
  void *__tmp__3G5B;
  __BOOLEAN__C __tmp__0O1B,__tmp__3O1B,__tmp__NM5B,__tmp__TMAC;
  __BOOLEAN__C __tmp__GO5B,__tmp__TO5B;
  __CHARACTER__BB __tmp__UK5B;
  result__SO1B=((void *)0);
  if ((! ((void *)Self__PO1B->parent_directory__UHE.list__GH != (void *)((void *)0)))) {
    __tmp__0O1B=open__GG1B(Self__PO1B);
    __tmp__3O1B=__tmp__0O1B;
  } else {
    __tmp__3O1B=0;
  };
  if (__tmp__3O1B) {
    result__JE5B=((void *)0);
    copy__5RS(((__STRING__WH *)string_tmp2__1H),Self__PO1B->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
    add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    append__PUS(((__STRING__WH *)string_tmp2__1H),new_path__QO1B);
    stat__FK5B= 0;
    replace_all__with__DXS(((__STRING__WH *)string_tmp2__1H));
    i__EK5B= 1;
    while ((i__EK5B <= ((__STRING__WH *)string_tmp2__1H)->count__FK)) {
      __tmp__UK5B=((__CHARACTER__BB *)((__STRING__WH *)string_tmp2__1H)->storage__VSS)[(__INTEGER__K)(i__EK5B - 1)];
      if ((__tmp__UK5B == '/')) {
        Self__BPAC=stat__FK5B;
        if ((stat__FK5B == 0)) {
          stat__FK5B= 1;
        };
        if ((Self__BPAC == 1)) {
          remove_first__20T(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__EK5B - 1));
          i__EK5B= 1;
        };
        if ((Self__BPAC == 2)) {
          remove_between__to__4IT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__EK5B - 1),i__EK5B);
          i__EK5B=(__INTEGER__K)(i__EK5B - 2);
          stat__FK5B= 1;
        };
        if ((Self__BPAC == 3)) {
          __tmp__ZL5B=last_index_of__since__PGT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__EK5B - 4));
          if ((__tmp__ZL5B == 0)) {
            remove_first__20T(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__EK5B - 1));
            i__EK5B= 1;
          } else {
            remove_between__to__4IT(((__STRING__WH *)string_tmp2__1H),__tmp__ZL5B,(__INTEGER__K)(i__EK5B - 1));
            i__EK5B=__tmp__ZL5B;
          };
          stat__FK5B= 1;
        };
        __tmp__NM5B=1;
      } else {
        __tmp__NM5B=0;
      };
      if (__tmp__NM5B) {
        __tmp__NM5B=1;
      } else {
        __tmp__TMAC=(__tmp__UK5B == '.');
        if (__tmp__TMAC) {
          __tmp__ZL5B=stat__FK5B;
          if ((stat__FK5B == 1)) {
            stat__FK5B= 2;
          };
          if ((__tmp__ZL5B == 2)) {
            stat__FK5B= 3;
          };
          if ((__tmp__ZL5B == 3)) {
            stat__FK5B= 0;
          };
        };
        __tmp__NM5B=__tmp__TMAC;
      };
      if ((! __tmp__NM5B)) {
        if (((__tmp__UK5B == ':') && (i__EK5B > 2))) {
          __tmp__GO5B=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)string_tmp2__1H)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__EK5B - 1) - 1)]);
          __tmp__TO5B=__tmp__GO5B;
        } else {
          __tmp__TO5B=0;
        };
        if ((__tmp__TO5B && (((__CHARACTER__BB *)((__STRING__WH *)string_tmp2__1H)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__EK5B - 2) - 1)] == '/'))) {
          remove_first__20T(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__EK5B - 2));
          i__EK5B= 1;
        } else {
          stat__FK5B= 0;
        };
      };
      i__EK5B=(__INTEGER__K)(i__EK5B + 1);
    };
    if ((stat__FK5B == 1)) {
      remove_last__JFT(((__STRING__WH *)string_tmp2__1H), 1);
    };
    if ((stat__FK5B == 2)) {
      remove_last__JFT(((__STRING__WH *)string_tmp2__1H), 2);
    };
    if ((stat__FK5B == 3)) {
      Self__BPAC=last_index_of__since__PGT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(i__EK5B - 4));
      if ((Self__BPAC == 0)) {
        ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
      } else {
        remove_between__to__4IT(((__STRING__WH *)string_tmp2__1H),Self__BPAC,(__INTEGER__K)(i__EK5B - 1));
      };
    };
    if ((((__STRING__WH *)string_tmp2__1H)->count__FK == 0)) {
      add_last__KTS(((__STRING__WH *)string_tmp2__1H),'/');
    };
    copy__1VS(((__STRING__WH *)string_tmp3__BI),string_tmp2__1H);
    do {
      __tmp__YE5B=reference_at__E3F(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp2__1H);
      result__JE5B=__tmp__YE5B;
      if (((void *)__tmp__YE5B == (void *)((void *)0))) {
        Self__EFKC=((__STRING__WH *)string_tmp2__1H);
        __tmp__ZL5B=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)Self__EFKC->storage__VSS),(__INTEGER__K)(Self__EFKC->count__FK - 1));
        __tmp__5E5B=(__INTEGER__K)( 1 + __tmp__ZL5B);
        if ((__tmp__5E5B > 0)) {
          keep_head__3CT(((__STRING__WH *)string_tmp2__1H),(__INTEGER__K)(__tmp__5E5B - 1));
        } else {
          ((__STRING__WH *)string_tmp2__1H)->count__FK= 0;
        };
      };
    } while ((((void *)__tmp__YE5B == (void *)((void *)0)) && (((__STRING__WH *)string_tmp2__1H)->count__FK != 0)));
    if (((void *)result__JE5B == (void *)((void *)0))) {
      if ((&X86_FILE_SYSTEM_FILE_SYSTEM__1J_)->parent_directory__0HB==0) {
      } else {
        parent_directory__2GB();
      };
      __tmp__YE5B=physical_get_entry__HYN(string_tmp3__BI);
      result__JE5B=__tmp__YE5B;
      __tmp__NM5B=1;
    } else {
      __tmp__NM5B=0;
    };
    if ((! __tmp__NM5B)) {
      if ((string_tmp3__BI->count__FK != string_tmp2__1H->count__FK)) {
        if (result__JE5B==((void *)0)) {
          __tmp__3G5B=((void *)0);
        } else {
          switch (((struct ___OBJ *)result__JE5B)->__id) {
          case 5: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 7: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 14:
          case 15:
          case 16: {
            __tmp__3G5B=((void *)0);
          } break;
          case 9: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 8: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 10: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 11: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 13: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          case 12: {
            __tmp__3G5B=((void *)result__JE5B);
          } break;
          }
        };
        switch (((struct ___OBJ *)__tmp__3G5B)->__id) {
        case 5: {
          __tmp__5G5B=physical_get_entry__11BB(((__FILE_SYSTEM__2B *)__tmp__3G5B),string_tmp3__BI);
        } break;
        case 7: {
          __tmp__5G5B=physical_get_entry__1PB(string_tmp3__BI);
        } break;
        case 9: {
          __tmp__5G5B=physical_get_entry__X2BB(((__FAT12__UFE *)((__FILE_SYSTEM__2B *)__tmp__3G5B)),string_tmp3__BI);
        } break;
        case 8: {
          __tmp__5G5B=physical_get_entry__MWVB(((__DIRECTORY_FAT__XFE *)((__FILE_SYSTEM__2B *)__tmp__3G5B)),string_tmp3__BI);
        } break;
        case 10: {
          __tmp__5G5B=physical_get_entry__T1QB(((__FAT16__OGE *)((__FILE_SYSTEM__2B *)__tmp__3G5B)),string_tmp3__BI);
        } break;
        case 11: {
          __tmp__5G5B=physical_get_entry__P2QB(((__FAT32__4GE *)((__FILE_SYSTEM__2B *)__tmp__3G5B)),string_tmp3__BI);
        } break;
        case 13: {
          __tmp__5G5B=physical_get_entry__K3QB(((__EXT2__OHE *)((__FILE_SYSTEM__2B *)__tmp__3G5B)),string_tmp3__BI);
        } break;
        case 12: {
          __tmp__5G5B=physical_get_entry__OO1B(((__DIRECTORY_EXT2__QHE *)((__FILE_SYSTEM__2B *)__tmp__3G5B)),string_tmp3__BI);
        } break;
        };
        result__JE5B=__tmp__5G5B;
      };
    };
    result__SO1B=result__JE5B;
  };
  Result__RO1B=result__SO1B;
  return(Result__RO1B);
}

static __LINKED_LISToENTRYo__AH* create__BYD()

{
  __POINTER__GB ptr__P4N,__tmp__4MMC;
  __UINTEGER_CPU__3AB __tmp__X4N,__tmp__0MMC,__tmp__2MMC;
  __INTEGER__K __tmp__C5N;
  __UINTEGER_32__U t__FNMC;
  __LINKED_LISToENTRYo__AH *result__O4N,*__tmp__X5N,*Result__DYD;
  result__O4N=((void *)0);
  ptr__P4N=((__POINTER__GB )(((void *)0)));
  __tmp__X4N=((__UINTEGER_CPU__3AB )sizeof(__LINKED_LISToENTRYo__AH));
  if ((__tmp__X4N == 0)) {
    result__O4N=(&LINKED_LISToENTRYo__AH_);
  } else {
    __tmp__C5N=13;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__X4N));
    if ((__tmp__C5N == (__INTEGER__K)(- 1))) {
      __tmp__0MMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__2MMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__X4N - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0MMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0MMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__0MMC=(__UINTEGER_CPU__3AB)(__tmp__2MMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__4MMC=micro_alloc__table__lab__KSE(__tmp__2MMC,((__POINTER__GB )(&(table_size[(__tmp__0MMC)-1]))),((__UINTEGER_32__U )__tmp__2MMC));
      ptr__P4N=__tmp__4MMC;
    } else {
      t__FNMC=((__UINTEGER_32__U )__tmp__C5N);
      __tmp__0MMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__2MMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__X4N - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0MMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0MMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__4MMC=micro_alloc__table__lab__KSE(__tmp__2MMC,((__POINTER__GB )(&(table_type[(t__FNMC)]))),(__UINTEGER_32__U)(t__FNMC | 1));
      ptr__P4N=__tmp__4MMC;
    };
    __tmp__X5N=((__LINKED_LISToENTRYo__AH *)ptr__P4N);
    result__O4N=__tmp__X5N;
    *(__tmp__X5N) = *((&LINKED_LISToENTRYo__AH_));
  };
  Result__DYD=result__O4N;
  return(Result__DYD);
}

static __BOOLEAN__C fast_memcmp__until__GU2(__CHARACTER__BB *Self__HU2,__CHARACTER__BB *other__IU2,__INTEGER__K capacity__JU2)

{
  __INTEGER__K i__1U2;
  __BOOLEAN__C Result__KU2;
  i__1U2=(__INTEGER__K)(capacity__JU2 - 1);
  while (((i__1U2 >= 0) && (Self__HU2[i__1U2] == ((__CHARACTER__BB *)other__IU2)[i__1U2]))) {
    i__1U2=(__INTEGER__K)(i__1U2 - 1);
  };
  Result__KU2=(i__1U2 < 0);
  return(Result__KU2);
}

static __CHARACTER__BB* create__MUX(__INTEGER__K nb_elements__OUX)

{
  __POINTER__GB __tmp__TAZ;
  __INTEGER__K Self__I42;
  __CHARACTER__BB *Result__FAZ,*Result__PUX;
  __tmp__TAZ=alloc_dynamic__52B(((__UINTEGER_CPU__3AB )nb_elements__OUX));
  Result__FAZ=((__CHARACTER__BB *)__tmp__TAZ);
  Self__I42=(__INTEGER__K)(nb_elements__OUX - 1);
  while ((Self__I42 >= 0)) {
    Result__FAZ[Self__I42]='\0';
    Self__I42=(__INTEGER__K)(Self__I42 - 1);
  };
  Result__PUX=Result__FAZ;
  return(Result__PUX);
}

static __POINTER__GB realloc_dynamic__old_size__new_size__VJ0(__POINTER__GB p__XJ0,__UINTEGER_CPU__3AB old_sz__YJ0,__UINTEGER_CPU__3AB new_sz__ZJ0)

{
  __POINTER__GB result__FK0,__tmp__BL0,__tmp__JRGC,Result__0J0;
  __UINTEGER_CPU__3AB __tmp__BBMC,__tmp__RK0,__tmp__XK0,__tmp__NBMC;
  __UINTEGER_CPU__3AB __tmp__E40,__tmp__FA1,new_size__YW1;
  __MEMORY__0AB *__tmp__NL0,*result__F50,*__tmp__TA1,*new_free__WW1;
  __MEMORY__0AB *Self__EOMC;
  result__FK0=((__POINTER__GB )(((void *)0)));
  __tmp__BBMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
  __tmp__RK0=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(old_sz__YJ0 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__BBMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__BBMC) - ((__UINTEGER_CPU__3AB ) 1)));
  __tmp__BBMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
  __tmp__XK0=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(new_sz__ZJ0 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__BBMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__BBMC) - ((__UINTEGER_CPU__3AB ) 1)));
  if ((__tmp__RK0 <= ((__UINTEGER_CPU__3AB )(256)))) {
    __tmp__BL0=alloc_dynamic__52B(__tmp__XK0);
    result__FK0=__tmp__BL0;
    copy__to__size__O20(p__XJ0,__tmp__BL0,__tmp__RK0);
    __tmp__NBMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
    __tmp__E40=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__RK0 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NBMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NBMC) - ((__UINTEGER_CPU__3AB ) 1)));
    __tmp__NBMC=(__UINTEGER_CPU__3AB)(__tmp__E40 / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
    __tmp__BL0=((__POINTER__GB )(&(table_size[(__tmp__NBMC)-1])));
    __tmp__JRGC=((__POINTER__GB *)__tmp__BL0)[ 0];
    ((__POINTER__GB *)p__XJ0)[ 0]=(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)(void *)((unsigned long)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB *)__tmp__JRGC)[ 0]) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 1))) & (unsigned long)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 3))) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 1))))) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 1)));
    ((__POINTER__GB *)__tmp__JRGC)[ 0]=p__XJ0;
    ;
  } else {
    __tmp__NL0=((__MEMORY__0AB *)(void *)((unsigned long)p__XJ0 - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))))));
    __tmp__NBMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )(void *)((unsigned long)p__XJ0 - (unsigned long)begin_memory__5AC)) >> 26);
    result__F50=((void *)0);
    __tmp__E40=((__UINTEGER_CPU__3AB ) 0);
    __tmp__FA1=(__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1)));
    if ((__tmp__XK0 > __tmp__FA1)) {
      if ((! ((__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 2)) != 0))) {
        __tmp__TA1=((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )__tmp__NL0) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1)))))));
        __tmp__E40=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__XK0 - __tmp__FA1) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))));
        if ((((__UINTEGER_CPU__3AB)(__tmp__TA1->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 1)) == ((__UINTEGER_CPU__3AB ) 0)) && ((__UINTEGER_CPU__3AB)(__tmp__TA1->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1))) >= __tmp__E40))) {
          to_busy__index__IIO(__tmp__TA1,((__POINTER__GB )__tmp__E40),__tmp__NBMC);
          __tmp__NL0->size_and_id__5AB=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - (__UINTEGER_CPU__3AB)(__tmp__TA1->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 1)) - ((__UINTEGER_CPU__3AB ) 1))))) - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))));
          if (((__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 2)) != 0)) {
            last_block[(__tmp__NBMC)] = (__tmp__NL0);
          } else {
            ((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )__tmp__NL0) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1)))))))->previous_linear__2AB=__tmp__NL0;
          };
          result__F50=__tmp__NL0;
        };
      };
      if (((void *)result__F50 == (void *)((void *)0))) {
        __tmp__TA1=search__RRI(__tmp__XK0);
        result__F50=__tmp__TA1;
        copy__to__size__O20((void *)((unsigned long)((__POINTER__GB )__tmp__NL0) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))),(void *)((unsigned long)((__POINTER__GB )((__MEMORY__0AB *)__tmp__TA1)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))),__tmp__FA1);
        __tmp__TA1=((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )__tmp__NL0) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1)))))));
        new_free__WW1=__tmp__NL0->previous_linear__2AB;
        new_size__YW1=(__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 1)) - ((__UINTEGER_CPU__3AB ) 1)));
        if ((((void *)new_free__WW1 == (void *)((void *)0)) || ((__UINTEGER_CPU__3AB)(((__MEMORY__0AB *)new_free__WW1)->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 1)) != ((__UINTEGER_CPU__3AB ) 0)))) {
          new_free__WW1=__tmp__NL0;
          add_link_free__OMO(__tmp__NL0);
        } else {
          new_size__YW1=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(new_size__YW1 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - new_free__WW1->size_and_id__5AB)) - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))));
        };
        if (((! ((__UINTEGER_CPU__3AB)(__tmp__NL0->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 2)) != 0)) && ((__UINTEGER_CPU__3AB)(__tmp__TA1->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 1)) == ((__UINTEGER_CPU__3AB ) 0)))) {
          new_size__YW1=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(new_size__YW1 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__TA1->size_and_id__5AB)) - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))));
          delete_link_free__VDP(__tmp__TA1);
        };
        ((__MEMORY__0AB *)new_free__WW1)->size_and_id__5AB=new_size__YW1;
        if (((__UINTEGER_CPU__3AB)(((__MEMORY__0AB *)new_free__WW1)->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 2)) != 0)) {
          last_block[(__tmp__NBMC)] = (new_free__WW1);
        } else {
          Self__EOMC=((__MEMORY__0AB *)new_free__WW1);
          ((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )Self__EOMC) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(Self__EOMC->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1)))))))->previous_linear__2AB=new_free__WW1;
        };
      };
    } else {
      result__F50=__tmp__NL0;
    };
    result__FK0=(void *)((unsigned long)((__POINTER__GB )((__MEMORY__0AB *)result__F50)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))))));
  };
  Result__0J0=result__FK0;
  return(Result__0J0);
}

static void clear__to__NFCB(__CHARACTER__BB *Self__OFCB,__INTEGER__K lower__PFCB,__INTEGER__K upper__QFCB)

{
  __INTEGER__K Self__OWCB;
  Self__OWCB=lower__PFCB;
  while ((Self__OWCB <= upper__QFCB)) {
    Self__OFCB[Self__OWCB]='\0';
    Self__OWCB=(__INTEGER__K)(Self__OWCB + 1);
  };
}

static void copy_from__until__3UX(__CHARACTER__BB *Self__4UX,__CHARACTER__BB *model__5UX,__INTEGER__K upper__AVX)

{
  __INTEGER__K Self__ZBZ;
  Self__ZBZ=upper__AVX;
  while ((Self__ZBZ >= 0)) {
    Self__4UX[Self__ZBZ]=((__CHARACTER__BB *)model__5UX)[Self__ZBZ];
    Self__ZBZ=(__INTEGER__K)(Self__ZBZ - 1);
  };
}

static void reduce_path__KSDB(__STRING__WH *st__MSDB)

{
  __INTEGER__K stat__OSDB,i__NSDB,Self__YAMB,__tmp__CUDB;
  __CHARACTER__BB __tmp__3SDB;
  __BOOLEAN__C __tmp__WUDB,__tmp__3ELB,__tmp__PWDB,__tmp__2WDB;
  stat__OSDB= 0;
  replace_all__with__DXS(((__STRING__WH *)st__MSDB));
  i__NSDB= 1;
  while ((i__NSDB <= ((__STRING__WH *)st__MSDB)->count__FK)) {
    __tmp__3SDB=((__CHARACTER__BB *)((__STRING__WH *)st__MSDB)->storage__VSS)[(__INTEGER__K)(i__NSDB - 1)];
    if ((__tmp__3SDB == '/')) {
      Self__YAMB=stat__OSDB;
      if ((stat__OSDB == 0)) {
        stat__OSDB= 1;
      };
      if ((Self__YAMB == 1)) {
        remove_first__20T(((__STRING__WH *)st__MSDB),(__INTEGER__K)(i__NSDB - 1));
        i__NSDB= 1;
      };
      if ((Self__YAMB == 2)) {
        remove_between__to__4IT(((__STRING__WH *)st__MSDB),(__INTEGER__K)(i__NSDB - 1),i__NSDB);
        i__NSDB=(__INTEGER__K)(i__NSDB - 2);
        stat__OSDB= 1;
      };
      if ((Self__YAMB == 3)) {
        __tmp__CUDB=last_index_of__since__PGT(((__STRING__WH *)st__MSDB),(__INTEGER__K)(i__NSDB - 4));
        if ((__tmp__CUDB == 0)) {
          remove_first__20T(((__STRING__WH *)st__MSDB),(__INTEGER__K)(i__NSDB - 1));
          i__NSDB= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)st__MSDB),__tmp__CUDB,(__INTEGER__K)(i__NSDB - 1));
          i__NSDB=__tmp__CUDB;
        };
        stat__OSDB= 1;
      };
      __tmp__WUDB=1;
    } else {
      __tmp__WUDB=0;
    };
    if (__tmp__WUDB) {
      __tmp__WUDB=1;
    } else {
      __tmp__3ELB=(__tmp__3SDB == '.');
      if (__tmp__3ELB) {
        __tmp__CUDB=stat__OSDB;
        if ((stat__OSDB == 1)) {
          stat__OSDB= 2;
        };
        if ((__tmp__CUDB == 2)) {
          stat__OSDB= 3;
        };
        if ((__tmp__CUDB == 3)) {
          stat__OSDB= 0;
        };
      };
      __tmp__WUDB=__tmp__3ELB;
    };
    if ((! __tmp__WUDB)) {
      if (((__tmp__3SDB == ':') && (i__NSDB > 2))) {
        __tmp__PWDB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)st__MSDB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__NSDB - 1) - 1)]);
        __tmp__2WDB=__tmp__PWDB;
      } else {
        __tmp__2WDB=0;
      };
      if ((__tmp__2WDB && (((__CHARACTER__BB *)((__STRING__WH *)st__MSDB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__NSDB - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)st__MSDB),(__INTEGER__K)(i__NSDB - 2));
        i__NSDB= 1;
      } else {
        stat__OSDB= 0;
      };
    };
    i__NSDB=(__INTEGER__K)(i__NSDB + 1);
  };
  if ((stat__OSDB == 1)) {
    remove_last__JFT(((__STRING__WH *)st__MSDB), 1);
  };
  if ((stat__OSDB == 2)) {
    remove_last__JFT(((__STRING__WH *)st__MSDB), 2);
  };
  if ((stat__OSDB == 3)) {
    Self__YAMB=last_index_of__since__PGT(((__STRING__WH *)st__MSDB),(__INTEGER__K)(i__NSDB - 4));
    if ((Self__YAMB == 0)) {
      ((__STRING__WH *)st__MSDB)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)st__MSDB),Self__YAMB,(__INTEGER__K)(i__NSDB - 1));
    };
  };
  if ((((__STRING__WH *)st__MSDB)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)st__MSDB),'/');
  };
}

static __LINKED_LIST_NODEoENTRYo__HGX* create__next__CWAB(void *i__EWAB)

{
  __POINTER__GB ptr__1KJB,__tmp__TOMC;
  __UINTEGER_CPU__3AB __tmp__DLJB,__tmp__POMC,__tmp__ROMC;
  __INTEGER__K __tmp__OLJB;
  __UINTEGER_32__U t__0OMC;
  __LINKED_LIST_NODEoENTRYo__HGX *result__0KJB,*__tmp__DMJB;
  __LINKED_LIST_NODEoENTRYo__HGX *Result__GWAB;
  result__0KJB=((void *)0);
  ptr__1KJB=((__POINTER__GB )(((void *)0)));
  __tmp__DLJB=((__UINTEGER_CPU__3AB )sizeof(__LINKED_LIST_NODEoENTRYo__HGX));
  if ((__tmp__DLJB == 0)) {
    result__0KJB=(&LINKED_LIST_NODEoENTRYo__HGX_);
  } else {
    __tmp__OLJB=14;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__DLJB));
    if ((__tmp__OLJB == (__INTEGER__K)(- 1))) {
      __tmp__POMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__ROMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__DLJB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__POMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__POMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__POMC=(__UINTEGER_CPU__3AB)(__tmp__ROMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__TOMC=micro_alloc__table__lab__KSE(__tmp__ROMC,((__POINTER__GB )(&(table_size[(__tmp__POMC)-1]))),((__UINTEGER_32__U )__tmp__ROMC));
      ptr__1KJB=__tmp__TOMC;
    } else {
      t__0OMC=((__UINTEGER_32__U )__tmp__OLJB);
      __tmp__POMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__ROMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__DLJB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__POMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__POMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__TOMC=micro_alloc__table__lab__KSE(__tmp__ROMC,((__POINTER__GB )(&(table_type[(t__0OMC)]))),(__UINTEGER_32__U)(t__0OMC | 1));
      ptr__1KJB=__tmp__TOMC;
    };
    __tmp__DMJB=((__LINKED_LIST_NODEoENTRYo__HGX *)ptr__1KJB);
    result__0KJB=__tmp__DMJB;
    *(__tmp__DMJB) = *((&LINKED_LIST_NODEoENTRYo__HGX_));
  };
  __tmp__DMJB=((__LINKED_LIST_NODEoENTRYo__HGX *)result__0KJB);
  __tmp__DMJB->item__2ZAB=i__EWAB;
  __tmp__DMJB->next__5GBB=((void *)0);
  Result__GWAB=result__0KJB;
  return(Result__GWAB);
}

static __BOOLEAN__C open__0UBB(__FAT12__UFE *Self__1UBB)

{
  void *new_entry__3UBB;
  __UINTEGER_32__U nb_entry_cluster__4UBB,j__0VBB,__tmp__5ZBB;
  __SFN_FAT__BVBB *entry__ZVBB;
  __FAT12__UFE *partition__4VBB;
  __INTEGER__K base__5VBB,cpt__AWBB;
  void *__tmp__IXBB;
  __DIRECTORY_FAT__XFE *__tmp__LZBB;
  __STD_FILE_FAT__RZBB *__tmp__XZBB;
  __STRING_CONSTANT__Y *__tmp__1ZBB;
  __UINTEGER_8__CD *buffer_raw__3VBB;
  __LINKED_LISToENTRYo__AH *__tmp__NWBB;
  __BOOLEAN__C __tmp__UWBB,__tmp__ZXBB,Result__2UBB;
  new_entry__3UBB=((void *)0);
  nb_entry_cluster__4UBB= 0;
  entry__ZVBB=((void *)0);
  j__0VBB= 0;
  buffer_raw__3VBB=((void *)0);
  partition__4VBB=((void *)0);
  base__5VBB= 0;
  cpt__AWBB= 0;
  if ((! ((void *)Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    partition__4VBB=Self__1UBB;
    Self__1UBB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.position__LWBB;
    __tmp__NWBB=create__BYD();
    Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH=__tmp__NWBB;
    nb_entry_cluster__4UBB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9) >> 5);
    do {
      read__0QJB(((__FAT12__UFE *)partition__4VBB));
      __tmp__UWBB=next_cluster__FRJB(((__FAT12__UFE *)partition__4VBB));
      buffer_raw__3VBB=(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__4VBB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).storage__1MT;
      j__0VBB= 0;
      do {
        __tmp__IXBB=((void *)((__UINTEGER_8__CD *)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_8__CD *)buffer_raw__3VBB)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )((__INTEGER__K )(__UINTEGER_32__U)(j__0VBB * ((__UINTEGER_32__U )sizeof(__SFN_FAT__BVBB))))))))));
        entry__ZVBB=__tmp__IXBB;
        if ((((__SFN_FAT__BVBB *)__tmp__IXBB)->attr__OVBB == 8)) {
          copy__5RS(((__STRING__WH *)string_tmp__BHB),(&__string_7));
          name_in__PSEB(__tmp__IXBB,string_tmp__BHB);
          cpt__AWBB= 1;
          base__5VBB=string_tmp__BHB->count__FK;
          while_do__CLKB:
          {
            __tmp__ZXBB=has__R1LB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
            if (__tmp__ZXBB) {
              keep_head__3CT(((__STRING__WH *)string_tmp__BHB),base__5VBB);
              append_in__CPNB(cpt__AWBB,string_tmp__BHB);
              cpt__AWBB=(__INTEGER__K)(cpt__AWBB + 1);
              goto while_do__CLKB;
            };
          };
          set_path__I1EB(Self__1UBB,string_tmp__BHB);
          __tmp__ZXBB=1;
        } else {
          __tmp__ZXBB=0;
        };
        if ((! __tmp__ZXBB)) {
          __tmp__ZXBB=is_valid__WLKB(__tmp__IXBB);
          if (((__tmp__ZXBB && (! ((((__SFN_FAT__BVBB *)__tmp__IXBB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__IXBB)->name1__EVBB != '.')))) && (! ((((__SFN_FAT__BVBB *)__tmp__IXBB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__IXBB)->name1__EVBB == '.'))))) {
            if (((__UINTEGER_8__CD)(((__SFN_FAT__BVBB *)__tmp__IXBB)->attr__OVBB & 16) != 0)) {
              __tmp__LZBB=create__with__2HUB(Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__IXBB);
              new_entry__3UBB=__tmp__LZBB;
            } else {
              __tmp__XZBB=create__with__KIUB(Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__IXBB);
              new_entry__3UBB=__tmp__XZBB;
            };
            add_last__3JTB(((__LINKED_LISToENTRYo__AH *)Self__1UBB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH),new_entry__3UBB);
            if (((struct ___OBJ *)new_entry__3UBB)->__id==8) {
              __tmp__1ZBB=((__DIRECTORY_FAT__XFE *)new_entry__3UBB)->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
            } else {
              __tmp__1ZBB=((__STD_FILE_FAT__RZBB *)new_entry__3UBB)->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG;
            };
            put__to__4LTB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),new_entry__3UBB,__tmp__1ZBB);
          };
        };
        __tmp__5ZBB=(__UINTEGER_32__U)(j__0VBB + 1);
        j__0VBB=__tmp__5ZBB;
      } while (((__tmp__5ZBB < nb_entry_cluster__4UBB) && (((__SFN_FAT__BVBB *)__tmp__IXBB)->name0__DVBB != 0)));
    } while (((((__SFN_FAT__BVBB *)entry__ZVBB)->name0__DVBB != 0) & __tmp__UWBB));
  };
  Result__2UBB=1;
  return(Result__2UBB);
}

static __BOOLEAN__C open__RQVB(__DIRECTORY_FAT__XFE *Self__SQVB)

{
  void *new_entry__UQVB;
  __UINTEGER_32__U nb_entry_cluster__VQVB,j__ZQVB,__tmp__KRVB;
  __UINTEGER_32__U __tmp__MRVB,__tmp__WUVB;
  __SFN_FAT__BVBB *entry__YQVB;
  void *partition__3QVB,*__tmp__JRVB;
  __INTEGER__K base__4QVB,cpt__5QVB,__tmp__HKYB;
  void *__tmp__MKYB;
  void *__tmp__OKYB;
  void *__tmp__ESVB;
  __DIRECTORY_FAT__XFE *__tmp__HUVB;
  __STD_FILE_FAT__RZBB *__tmp__OUVB;
  __STRING_CONSTANT__Y *__tmp__SUVB;
  __UINTEGER_8__CD *buffer_raw__2QVB;
  __BOOLEAN__C is_again__ARVB,__tmp__SRVB,__tmp__VSVB,Result__TQVB;
  __LINKED_LISToENTRYo__AH *__tmp__LRVB;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *__tmp__TRVB;
  new_entry__UQVB=((void *)0);
  nb_entry_cluster__VQVB= 0;
  entry__YQVB=((void *)0);
  j__ZQVB= 0;
  buffer_raw__2QVB=((void *)0);
  partition__3QVB=((void *)0);
  base__4QVB= 0;
  cpt__5QVB= 0;
  is_again__ARVB=0;
  if ((! ((void *)Self__SQVB->parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    copy__5RS(((__STRING__WH *)string_tmp__BHB),Self__SQVB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
    __tmp__HKYB=index_of__since__RJIB(((__STRING__WH *)string_tmp__BHB));
    keep_head__3CT(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(__tmp__HKYB - 1));
    __tmp__MKYB=at__2KIB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
    if (__tmp__MKYB==((void *)0)) {
      __tmp__OKYB=((void *)0);
    } else {
      switch (((struct ___OBJ *)__tmp__MKYB)->__id) {
      case 5:
      case 7:
      case 14:
      case 8:
      case 12:
      case 15:
      case 16: {
        __tmp__OKYB=((void *)0);
      } break;
      case 9: {
        __tmp__OKYB=((void *)__tmp__MKYB);
      } break;
      case 10: {
        __tmp__OKYB=((void *)__tmp__MKYB);
      } break;
      case 11: {
        __tmp__OKYB=((void *)__tmp__MKYB);
      } break;
      case 13: {
        __tmp__OKYB=((void *)__tmp__MKYB);
      } break;
      }
    };
    if (((void *)__tmp__OKYB == (void *)((void *)0))) {
      print__SKC((&__string_9));
    };
    if (__tmp__OKYB==((void *)0)) {
      __tmp__JRVB=((void *)0);
    } else {
      switch (((struct ___OBJ *)__tmp__OKYB)->__id) {
      case 9: {
        __tmp__JRVB=((void *)__tmp__OKYB);
      } break;
      case 10: {
        __tmp__JRVB=((void *)__tmp__OKYB);
      } break;
      case 11: {
        __tmp__JRVB=((void *)__tmp__OKYB);
      } break;
      case 13: {
        __tmp__JRVB=((void *)0);
      } break;
      }
    };
    partition__3QVB=__tmp__JRVB;
    __tmp__KRVB=Self__SQVB->parent_entry_fat__0FE.position__LWBB;
    switch (((struct ___OBJ *)__tmp__JRVB)->__id) {
    case 9: {
      ((__FAT12__UFE *)__tmp__JRVB)->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=__tmp__KRVB;
    } break;
    case 10: {
      ((__FAT16__OGE *)((__FAT12__UFE *)__tmp__JRVB))->parent_fat__PGE.parent_partition__4FE.cluster__GOJB=__tmp__KRVB;
    } break;
    case 11: {
      ((__FAT32__4GE *)((__FAT12__UFE *)__tmp__JRVB))->parent_fat__5GE.parent_partition__4FE.cluster__GOJB=__tmp__KRVB;
    } break;
    };
    __tmp__LRVB=create__BYD();
    Self__SQVB->parent_directory__1FE.list__GH=__tmp__LRVB;
    switch (((struct ___OBJ *)__tmp__JRVB)->__id) {
    case 9: {
      __tmp__MRVB=(__UINTEGER_32__U)(((__FAT12__UFE *)__tmp__JRVB)->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9);
    } break;
    case 10: {
      __tmp__MRVB=(__UINTEGER_32__U)(((__FAT16__OGE *)__tmp__JRVB)->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9);
    } break;
    case 11: {
      __tmp__MRVB=(__UINTEGER_32__U)(((__FAT32__4GE *)__tmp__JRVB)->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9);
    } break;
    };
    nb_entry_cluster__VQVB=(__UINTEGER_32__U)(__tmp__MRVB >> 5);
    do {
      switch (((struct ___OBJ *)partition__3QVB)->__id) {
      case 9: {
        read__0QJB(((__FAT12__UFE *)partition__3QVB));
      } break;
      case 10: {
        read__3XVB(((__FAT16__OGE *)partition__3QVB));
      } break;
      case 11: {
        read__KYVB(((__FAT32__4GE *)partition__3QVB));
      } break;
      };
      switch (((struct ___OBJ *)partition__3QVB)->__id) {
      case 9: {
        __tmp__SRVB=next_cluster__FRJB(((__FAT12__UFE *)partition__3QVB));
      } break;
      case 10: {
        __tmp__SRVB=next_cluster__VYVB(((__FAT16__OGE *)partition__3QVB));
      } break;
      case 11: {
        __tmp__SRVB=next_cluster__C1VB(((__FAT32__4GE *)partition__3QVB));
      } break;
      };
      is_again__ARVB=__tmp__SRVB;
      switch (((struct ___OBJ *)partition__3QVB)->__id) {
      case 9: {
        __tmp__TRVB=((__FAT12__UFE *)partition__3QVB)->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB;
      } break;
      case 10: {
        __tmp__TRVB=((__FAT16__OGE *)partition__3QVB)->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB;
      } break;
      case 11: {
        __tmp__TRVB=((__FAT32__4GE *)partition__3QVB)->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB;
      } break;
      };
      buffer_raw__2QVB=(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__TRVB))).storage__1MT;
      j__ZQVB= 0;
      do {
        __tmp__ESVB=((void *)((__UINTEGER_8__CD *)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_8__CD *)buffer_raw__2QVB)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )((__INTEGER__K )(__UINTEGER_32__U)(j__ZQVB * ((__UINTEGER_32__U )sizeof(__SFN_FAT__BVBB))))))))));
        entry__YQVB=__tmp__ESVB;
        if ((((__SFN_FAT__BVBB *)__tmp__ESVB)->attr__OVBB == 8)) {
          copy__5RS(((__STRING__WH *)string_tmp__BHB),(&__string_7));
          name_in__PSEB(__tmp__ESVB,string_tmp__BHB);
          cpt__5QVB= 1;
          base__4QVB=string_tmp__BHB->count__FK;
          while_do__NY2B:
          {
            __tmp__VSVB=has__R1LB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
            if (__tmp__VSVB) {
              keep_head__3CT(((__STRING__WH *)string_tmp__BHB),base__4QVB);
              append_in__CPNB(cpt__5QVB,string_tmp__BHB);
              cpt__5QVB=(__INTEGER__K)(cpt__5QVB + 1);
              goto while_do__NY2B;
            };
          };
          set_path__UEXB(Self__SQVB,string_tmp__BHB);
          __tmp__VSVB=1;
        } else {
          __tmp__VSVB=0;
        };
        if ((! __tmp__VSVB)) {
          __tmp__VSVB=is_valid__WLKB(__tmp__ESVB);
          if (((__tmp__VSVB && (! ((((__SFN_FAT__BVBB *)__tmp__ESVB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__ESVB)->name1__EVBB != '.')))) && (! ((((__SFN_FAT__BVBB *)__tmp__ESVB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__ESVB)->name1__EVBB == '.'))))) {
            if (((__UINTEGER_8__CD)(((__SFN_FAT__BVBB *)__tmp__ESVB)->attr__OVBB & 16) != 0)) {
              __tmp__HUVB=create__with__2HUB(Self__SQVB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__ESVB);
              new_entry__UQVB=__tmp__HUVB;
            } else {
              __tmp__OUVB=create__with__KIUB(Self__SQVB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__ESVB);
              new_entry__UQVB=__tmp__OUVB;
            };
            add_last__3JTB(((__LINKED_LISToENTRYo__AH *)Self__SQVB->parent_directory__1FE.list__GH),new_entry__UQVB);
            if (((struct ___OBJ *)new_entry__UQVB)->__id==8) {
              __tmp__SUVB=((__DIRECTORY_FAT__XFE *)new_entry__UQVB)->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
            } else {
              __tmp__SUVB=((__STD_FILE_FAT__RZBB *)new_entry__UQVB)->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG;
            };
            put__to__4LTB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),new_entry__UQVB,__tmp__SUVB);
          };
        };
        __tmp__WUVB=(__UINTEGER_32__U)(j__ZQVB + 1);
        j__ZQVB=__tmp__WUVB;
      } while (((__tmp__WUVB < nb_entry_cluster__VQVB) && (((__SFN_FAT__BVBB *)__tmp__ESVB)->name0__DVBB != 0)));
    } while (((((__SFN_FAT__BVBB *)entry__YQVB)->name0__DVBB != 0) & is_again__ARVB));
  };
  Result__TQVB=1;
  return(Result__TQVB);
}

static __BOOLEAN__C open__BGQB(__FAT16__OGE *Self__CGQB)

{
  void *new_entry__EGQB;
  __UINTEGER_32__U nb_entry_cluster__FGQB,j__JGQB,__tmp__GKQB;
  __SFN_FAT__BVBB *entry__IGQB;
  __FAT16__OGE *partition__NGQB;
  __INTEGER__K base__OGQB,cpt__PGQB;
  void *__tmp__UHQB;
  __DIRECTORY_FAT__XFE *__tmp__XJQB;
  __STD_FILE_FAT__RZBB *__tmp__4JQB;
  __STRING_CONSTANT__Y *__tmp__CKQB;
  __UINTEGER_8__CD *buffer_raw__MGQB;
  __LINKED_LISToENTRYo__AH *__tmp__1GQB;
  __BOOLEAN__C __tmp__CHQB,__tmp__FIQB,Result__DGQB;
  new_entry__EGQB=((void *)0);
  nb_entry_cluster__FGQB= 0;
  entry__IGQB=((void *)0);
  j__JGQB= 0;
  buffer_raw__MGQB=((void *)0);
  partition__NGQB=((void *)0);
  base__OGQB= 0;
  cpt__PGQB= 0;
  if ((! ((void *)Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    partition__NGQB=Self__CGQB;
    ((__FAT16__OGE *)((__FAT12__UFE *)Self__CGQB))->parent_fat__PGE.parent_partition__4FE.cluster__GOJB=Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.position__LWBB;
    __tmp__1GQB=create__BYD();
    Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH=__tmp__1GQB;
    nb_entry_cluster__FGQB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9) >> 5);
    do {
      read__3XVB(((__FAT16__OGE *)partition__NGQB));
      __tmp__CHQB=next_cluster__VYVB(((__FAT16__OGE *)partition__NGQB));
      buffer_raw__MGQB=(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__NGQB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).storage__1MT;
      j__JGQB= 0;
      do {
        __tmp__UHQB=((void *)((__UINTEGER_8__CD *)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_8__CD *)buffer_raw__MGQB)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )((__INTEGER__K )(__UINTEGER_32__U)(j__JGQB * ((__UINTEGER_32__U )sizeof(__SFN_FAT__BVBB))))))))));
        entry__IGQB=__tmp__UHQB;
        if ((((__SFN_FAT__BVBB *)__tmp__UHQB)->attr__OVBB == 8)) {
          copy__5RS(((__STRING__WH *)string_tmp__BHB),(&__string_7));
          name_in__PSEB(__tmp__UHQB,string_tmp__BHB);
          cpt__PGQB= 1;
          base__OGQB=string_tmp__BHB->count__FK;
          while_do__FGYB:
          {
            __tmp__FIQB=has__R1LB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
            if (__tmp__FIQB) {
              keep_head__3CT(((__STRING__WH *)string_tmp__BHB),base__OGQB);
              append_in__CPNB(cpt__PGQB,string_tmp__BHB);
              cpt__PGQB=(__INTEGER__K)(cpt__PGQB + 1);
              goto while_do__FGYB;
            };
          };
          set_path__NISB(Self__CGQB,string_tmp__BHB);
          __tmp__FIQB=1;
        } else {
          __tmp__FIQB=0;
        };
        if ((! __tmp__FIQB)) {
          __tmp__FIQB=is_valid__WLKB(__tmp__UHQB);
          if (((__tmp__FIQB && (! ((((__SFN_FAT__BVBB *)__tmp__UHQB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__UHQB)->name1__EVBB != '.')))) && (! ((((__SFN_FAT__BVBB *)__tmp__UHQB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__UHQB)->name1__EVBB == '.'))))) {
            if (((__UINTEGER_8__CD)(((__SFN_FAT__BVBB *)__tmp__UHQB)->attr__OVBB & 16) != 0)) {
              __tmp__XJQB=create__with__2HUB(Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__UHQB);
              new_entry__EGQB=__tmp__XJQB;
            } else {
              __tmp__4JQB=create__with__KIUB(Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__UHQB);
              new_entry__EGQB=__tmp__4JQB;
            };
            add_last__3JTB(((__LINKED_LISToENTRYo__AH *)Self__CGQB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH),new_entry__EGQB);
            if (((struct ___OBJ *)new_entry__EGQB)->__id==8) {
              __tmp__CKQB=((__DIRECTORY_FAT__XFE *)new_entry__EGQB)->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
            } else {
              __tmp__CKQB=((__STD_FILE_FAT__RZBB *)new_entry__EGQB)->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG;
            };
            put__to__4LTB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),new_entry__EGQB,__tmp__CKQB);
          };
        };
        __tmp__GKQB=(__UINTEGER_32__U)(j__JGQB + 1);
        j__JGQB=__tmp__GKQB;
      } while (((__tmp__GKQB < nb_entry_cluster__FGQB) && (((__SFN_FAT__BVBB *)__tmp__UHQB)->name0__DVBB != 0)));
    } while (((((__SFN_FAT__BVBB *)entry__IGQB)->name0__DVBB != 0) & __tmp__CHQB));
  };
  Result__DGQB=1;
  return(Result__DGQB);
}

static __BOOLEAN__C open__XLQB(__FAT32__4GE *Self__YLQB)

{
  void *new_entry__0LQB;
  __UINTEGER_32__U nb_entry_cluster__1LQB,j__5LQB,__tmp__2PQB;
  __SFN_FAT__BVBB *entry__4LQB;
  __FAT32__4GE *partition__DMQB;
  __INTEGER__K base__EMQB,cpt__FMQB;
  void *__tmp__KNQB;
  __DIRECTORY_FAT__XFE *__tmp__NPQB;
  __STD_FILE_FAT__RZBB *__tmp__UPQB;
  __STRING_CONSTANT__Y *__tmp__YPQB;
  __UINTEGER_8__CD *buffer_raw__CMQB;
  __LINKED_LISToENTRYo__AH *__tmp__RMQB;
  __BOOLEAN__C __tmp__YMQB,__tmp__1NQB,Result__ZLQB;
  new_entry__0LQB=((void *)0);
  nb_entry_cluster__1LQB= 0;
  entry__4LQB=((void *)0);
  j__5LQB= 0;
  buffer_raw__CMQB=((void *)0);
  partition__DMQB=((void *)0);
  base__EMQB= 0;
  cpt__FMQB= 0;
  if ((! ((void *)Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH != (void *)((void *)0)))) {
    partition__DMQB=Self__YLQB;
    ((__FAT32__4GE *)((__FAT12__UFE *)Self__YLQB))->parent_fat__5GE.parent_partition__4FE.cluster__GOJB=Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.position__LWBB;
    __tmp__RMQB=create__BYD();
    Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH=__tmp__RMQB;
    nb_entry_cluster__1LQB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9) >> 5);
    do {
      read__KYVB(((__FAT32__4GE *)partition__DMQB));
      __tmp__YMQB=next_cluster__C1VB(((__FAT32__4GE *)partition__DMQB));
      buffer_raw__CMQB=(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__DMQB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).storage__1MT;
      j__5LQB= 0;
      do {
        __tmp__KNQB=((void *)((__UINTEGER_8__CD *)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_8__CD *)buffer_raw__CMQB)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )((__INTEGER__K )(__UINTEGER_32__U)(j__5LQB * ((__UINTEGER_32__U )sizeof(__SFN_FAT__BVBB))))))))));
        entry__4LQB=__tmp__KNQB;
        if ((((__SFN_FAT__BVBB *)__tmp__KNQB)->attr__OVBB == 8)) {
          copy__5RS(((__STRING__WH *)string_tmp__BHB),(&__string_7));
          name_in__PSEB(__tmp__KNQB,string_tmp__BHB);
          cpt__FMQB= 1;
          base__EMQB=string_tmp__BHB->count__FK;
          while_do__VHYB:
          {
            __tmp__1NQB=has__R1LB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
            if (__tmp__1NQB) {
              keep_head__3CT(((__STRING__WH *)string_tmp__BHB),base__EMQB);
              append_in__CPNB(cpt__FMQB,string_tmp__BHB);
              cpt__FMQB=(__INTEGER__K)(cpt__FMQB + 1);
              goto while_do__VHYB;
            };
          };
          set_path__LRSB(Self__YLQB,string_tmp__BHB);
          __tmp__1NQB=1;
        } else {
          __tmp__1NQB=0;
        };
        if ((! __tmp__1NQB)) {
          __tmp__1NQB=is_valid__WLKB(__tmp__KNQB);
          if (((__tmp__1NQB && (! ((((__SFN_FAT__BVBB *)__tmp__KNQB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__KNQB)->name1__EVBB != '.')))) && (! ((((__SFN_FAT__BVBB *)__tmp__KNQB)->name0__DVBB == '.') && (((__SFN_FAT__BVBB *)__tmp__KNQB)->name1__EVBB == '.'))))) {
            if (((__UINTEGER_8__CD)(((__SFN_FAT__BVBB *)__tmp__KNQB)->attr__OVBB & 16) != 0)) {
              __tmp__NPQB=create__with__2HUB(Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__KNQB);
              new_entry__0LQB=__tmp__NPQB;
            } else {
              __tmp__UPQB=create__with__KIUB(Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG,__tmp__KNQB);
              new_entry__0LQB=__tmp__UPQB;
            };
            add_last__3JTB(((__LINKED_LISToENTRYo__AH *)Self__YLQB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_directory__1FE.list__GH),new_entry__0LQB);
            if (((struct ___OBJ *)new_entry__0LQB)->__id==8) {
              __tmp__YPQB=((__DIRECTORY_FAT__XFE *)new_entry__0LQB)->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
            } else {
              __tmp__YPQB=((__STD_FILE_FAT__RZBB *)new_entry__0LQB)->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG;
            };
            put__to__4LTB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),new_entry__0LQB,__tmp__YPQB);
          };
        };
        __tmp__2PQB=(__UINTEGER_32__U)(j__5LQB + 1);
        j__5LQB=__tmp__2PQB;
      } while (((__tmp__2PQB < nb_entry_cluster__1LQB) && (((__SFN_FAT__BVBB *)__tmp__KNQB)->name0__DVBB != 0)));
    } while (((((__SFN_FAT__BVBB *)entry__4LQB)->name0__DVBB != 0) & __tmp__YMQB));
  };
  Result__ZLQB=1;
  return(Result__ZLQB);
}

static __BOOLEAN__C open__MRQB(__EXT2__OHE *Self__NRQB)

{
  void *new_entry__PRQB,*__tmp__I0QB;
  __UINTEGER_32__U current_block__QRQB,inode_no__TRQB,offset__WRQB;
  __UINTEGER_32__U __tmp__ATQB,__tmp__HUQB,Self__EDUB,limit_up__FDUB;
  __EXT2__OHE *partition__ZRQB;
  __DIRECTORY_EXT2__QHE *__tmp__4YQB;
  __STD_FILE_EXT2__EZQB *__tmp__HZQB;
  __STRING_CONSTANT__Y *__tmp__MZQB;
  __INTEGER__K __tmp__A0QB,Self__Q5SB;
  void *__tmp__40UB;
  __UINTEGER_16__5F __tmp__LWQB;
  __LINKED_LISToENTRYo__AH *__tmp__JSQB;
  __UINTEGER_8__CD __tmp__RWQB,__tmp__ZWQB;
  __BOOLEAN__C __tmp__3XQB,__tmp__FYQB,__tmp__JYQB,Result__ORQB;
  new_entry__PRQB=((void *)0);
  current_block__QRQB= 0;
  inode_no__TRQB= 0;
  offset__WRQB= 0;
  partition__ZRQB=((void *)0);
  if ((! ((void *)Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_directory__UHE.list__GH != (void *)((void *)0)))) {
    __tmp__JSQB=create__BYD();
    Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_directory__UHE.list__GH=__tmp__JSQB;
    partition__ZRQB=Self__NRQB;
    current_block__QRQB= 0;
    offset__WRQB=(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__NRQB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) + 1);
    do {
      if ((offset__WRQB > ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)partition__ZRQB)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))))) {
        offset__WRQB= 0;
        __tmp__ATQB=(__UINTEGER_32__U)(current_block__QRQB + 1);
        current_block__QRQB=__tmp__ATQB;
        set_block_type__FNWB(((__EXT2__OHE *)partition__ZRQB),__tmp__ATQB);
        __tmp__HUQB=get_block__BWUB(((__INODE__DTQB *)Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.inode__FUQB),__tmp__ATQB);
        set_block__L5VB(((__EXT2__OHE *)partition__ZRQB),__tmp__HUQB);
        read__QCWB(((__EXT2__OHE *)partition__ZRQB));
      };
      inode_no__TRQB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )offset__WRQB)]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(offset__WRQB + 1))]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(offset__WRQB + 2))]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(offset__WRQB + 3))]) << 24));
      __tmp__ATQB=(__UINTEGER_32__U)(offset__WRQB + 4);
      __tmp__LWQB=(__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__ATQB)]) + (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(__tmp__ATQB + 1))]) << 8));
      __tmp__HUQB=(__UINTEGER_32__U)(__tmp__ATQB + 2);
      __tmp__RWQB=((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__HUQB)];
      __tmp__ZWQB=((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(__tmp__HUQB + 1))];
      __tmp__ATQB=(__UINTEGER_32__U)(__tmp__HUQB + 2);
      copy__5RS(((__STRING__WH *)string_tmp__BHB),Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
      add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
      __tmp__HUQB=(__UINTEGER_32__U)(__tmp__ATQB + ((__UINTEGER_32__U )__tmp__RWQB));
      Self__EDUB=__tmp__ATQB;
      limit_up__FDUB=(__UINTEGER_32__U)(__tmp__HUQB - 1);
      while ((Self__EDUB <= limit_up__FDUB)) {
        add_last__KTS(((__STRING__WH *)string_tmp__BHB),((__CHARACTER__BB )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__ZRQB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )Self__EDUB)]));
        Self__EDUB=(__UINTEGER_32__U)(Self__EDUB + 1);
      };
      offset__WRQB=(__UINTEGER_32__U)((__UINTEGER_32__U)(__tmp__ATQB + ((__UINTEGER_32__U )__tmp__LWQB)) - 8);
      __tmp__3XQB=has_suffix__CEUB(((__STRING__WH *)string_tmp__BHB),(&__string_10));
      if ((! __tmp__3XQB)) {
        __tmp__FYQB=has_suffix__CEUB(((__STRING__WH *)string_tmp__BHB),(&__string_11));
        __tmp__JYQB=(! __tmp__FYQB);
      } else {
        __tmp__JYQB=0;
      };
      if (__tmp__JYQB) {
        if ((( 1 <= __tmp__ZWQB) && ( 2 >= __tmp__ZWQB))) {
          if ((__tmp__ZWQB == 2)) {
            __tmp__4YQB=clone__NU0B();
            new_entry__PRQB=__tmp__4YQB;
          } else {
            __tmp__HZQB=clone__HW0B();
            new_entry__PRQB=__tmp__HZQB;
          };
          switch (((struct ___OBJ *)new_entry__PRQB)->__id) {
          case 13: {
            ((__EXT2__OHE *)new_entry__PRQB)->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.no_inode__SRRB=inode_no__TRQB;
          } break;
          case 12: {
            ((__DIRECTORY_EXT2__QHE *)((__EXT2__OHE *)new_entry__PRQB))->parent_entry_ext2__THE.no_inode__SRRB=inode_no__TRQB;
          } break;
          case 16: {
            ((__STD_FILE_EXT2__EZQB *)((__EXT2__OHE *)new_entry__PRQB))->parent_entry_ext2__FZQB.no_inode__SRRB=inode_no__TRQB;
          } break;
          };
          switch (((struct ___OBJ *)new_entry__PRQB)->__id) {
          case 13: {
            set_path__1WZB(((__EXT2__OHE *)new_entry__PRQB),string_tmp__BHB);
          } break;
          case 12: {
            set_path__Z21B(((__DIRECTORY_EXT2__QHE *)((__EXT2__OHE *)new_entry__PRQB)),string_tmp__BHB);
          } break;
          case 16: {
            set_path__T31B(((__STD_FILE_EXT2__EZQB *)((__EXT2__OHE *)new_entry__PRQB)),string_tmp__BHB);
          } break;
          };
          switch (((struct ___OBJ *)new_entry__PRQB)->__id) {
          case 13: break;
          case 12: break;
          case 16: break;
          };
          add_last__0XZB(((__LINKED_LISToENTRYo__AH *)Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_directory__UHE.list__GH),new_entry__PRQB);
          switch (((struct ___OBJ *)new_entry__PRQB)->__id) {
          case 13: {
            __tmp__MZQB=((__EXT2__OHE *)new_entry__PRQB)->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
          } break;
          case 12: {
            __tmp__MZQB=((__DIRECTORY_EXT2__QHE *)new_entry__PRQB)->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
          } break;
          case 16: {
            __tmp__MZQB=((__STD_FILE_EXT2__EZQB *)new_entry__PRQB)->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG;
          } break;
          };
          put__to__4ZZB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),new_entry__PRQB,__tmp__MZQB);
        };
      };
    } while ((__tmp__LWQB <= 266));
    __tmp__A0QB=Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_directory__UHE.list__GH->parent_linked_collection__FH.upper__BKK;
    Self__Q5SB= 1;
    while ((Self__Q5SB <= __tmp__A0QB)) {
      __tmp__40UB=item__NBBB(((__LINKED_LISToENTRYo__AH *)Self__NRQB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_directory__UHE.list__GH),Self__Q5SB);
      if (__tmp__40UB==((void *)0)) {
        __tmp__I0QB=((void *)0);
      } else {
        switch (((struct ___OBJ *)__tmp__40UB)->__id) {
        case 5:
        case 7:
        case 14:
        case 9:
        case 8:
        case 10:
        case 11:
        case 15: {
          __tmp__I0QB=((void *)0);
        } break;
        case 13: {
          __tmp__I0QB=((void *)__tmp__40UB);
        } break;
        case 12: {
          __tmp__I0QB=((void *)__tmp__40UB);
        } break;
        case 16: {
          __tmp__I0QB=((void *)__tmp__40UB);
        } break;
        }
      };
      new_entry__PRQB=__tmp__I0QB;
      switch (((struct ___OBJ *)__tmp__I0QB)->__id) {
      case 13: {
        make_inode__4RRB(((__EXT2__OHE *)__tmp__I0QB));
      } break;
      case 12: {
        make_inode__XQ1B(((__DIRECTORY_EXT2__QHE *)__tmp__I0QB));
      } break;
      case 16: {
        make_inode__VT1B(((__STD_FILE_EXT2__EZQB *)__tmp__I0QB));
      } break;
      };
      Self__Q5SB=(__INTEGER__K)(Self__Q5SB + 1);
    };
  };
  Result__ORQB=1;
  return(Result__ORQB);
}

static __BOOLEAN__C open__GG1B(__DIRECTORY_EXT2__QHE *Self__HG1B)

{
  void *new_entry__JG1B,*__tmp__2N1B;
  __UINTEGER_32__U current_block__KG1B,inode_no__NG1B,offset__QG1B;
  __UINTEGER_32__U __tmp__0H1B,__tmp__4H1B,Self__RD4B,limit_up__SD4B;
  __EXT2__OHE *partition__TG1B,*__tmp__GH1B;
  void *__tmp__EH1B;
  __DIRECTORY_EXT2__QHE *__tmp__VM1B;
  __STD_FILE_EXT2__EZQB *__tmp__1M1B;
  __STRING_CONSTANT__Y *__tmp__AN1B;
  __INTEGER__K __tmp__UN1B,Self__A02B;
  void *__tmp__3P4B;
  __UINTEGER_16__5F __tmp__CK1B;
  __LINKED_LISToENTRYo__AH *__tmp__DH1B;
  __UINTEGER_8__CD __tmp__IK1B,__tmp__QK1B;
  __BOOLEAN__C __tmp__UL1B,__tmp__2L1B,__tmp__AM1B,Result__IG1B;
  new_entry__JG1B=((void *)0);
  current_block__KG1B= 0;
  inode_no__NG1B= 0;
  offset__QG1B= 0;
  partition__TG1B=((void *)0);
  if ((! ((void *)Self__HG1B->parent_directory__UHE.list__GH != (void *)((void *)0)))) {
    __tmp__DH1B=create__BYD();
    Self__HG1B->parent_directory__UHE.list__GH=__tmp__DH1B;
    __tmp__EH1B=get_partition__RE2B(Self__HG1B);
    if (__tmp__EH1B==((void *)0)) {
      __tmp__GH1B=((void *)0);
    } else {
      if (((struct ___OBJ *)__tmp__EH1B)->__id==13) {
        __tmp__GH1B=((void *)__tmp__EH1B);
      } else {
        __tmp__GH1B=((void *)0);
      }
    };
    partition__TG1B=__tmp__GH1B;
    current_block__KG1B= 0;
    offset__QG1B=(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__GH1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) + 1);
    do {
      if ((offset__QG1B > ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)partition__TG1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))))) {
        offset__QG1B= 0;
        __tmp__0H1B=(__UINTEGER_32__U)(current_block__KG1B + 1);
        current_block__KG1B=__tmp__0H1B;
        set_block_type__FNWB(((__EXT2__OHE *)partition__TG1B),__tmp__0H1B);
        __tmp__4H1B=get_block__BWUB(((__INODE__DTQB *)Self__HG1B->parent_entry_ext2__THE.inode__FUQB),__tmp__0H1B);
        set_block__L5VB(((__EXT2__OHE *)partition__TG1B),__tmp__4H1B);
        read__QCWB(((__EXT2__OHE *)partition__TG1B));
      };
      inode_no__NG1B=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )offset__QG1B)]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(offset__QG1B + 1))]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(offset__QG1B + 2))]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(offset__QG1B + 3))]) << 24));
      __tmp__0H1B=(__UINTEGER_32__U)(offset__QG1B + 4);
      __tmp__CK1B=(__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__0H1B)]) + (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(__tmp__0H1B + 1))]) << 8));
      __tmp__4H1B=(__UINTEGER_32__U)(__tmp__0H1B + 2);
      __tmp__IK1B=((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__4H1B)];
      __tmp__QK1B=((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(__tmp__4H1B + 1))];
      __tmp__0H1B=(__UINTEGER_32__U)(__tmp__4H1B + 2);
      copy__5RS(((__STRING__WH *)string_tmp__BHB),Self__HG1B->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
      add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
      __tmp__4H1B=(__UINTEGER_32__U)(__tmp__0H1B + ((__UINTEGER_32__U )__tmp__IK1B));
      Self__RD4B=__tmp__0H1B;
      limit_up__SD4B=(__UINTEGER_32__U)(__tmp__4H1B - 1);
      while ((Self__RD4B <= limit_up__SD4B)) {
        add_last__KTS(((__STRING__WH *)string_tmp__BHB),((__CHARACTER__BB )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__TG1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )Self__RD4B)]));
        Self__RD4B=(__UINTEGER_32__U)(Self__RD4B + 1);
      };
      offset__QG1B=(__UINTEGER_32__U)((__UINTEGER_32__U)(__tmp__0H1B + ((__UINTEGER_32__U )__tmp__CK1B)) - 8);
      __tmp__UL1B=has_suffix__CEUB(((__STRING__WH *)string_tmp__BHB),(&__string_10));
      if ((! __tmp__UL1B)) {
        __tmp__2L1B=has_suffix__CEUB(((__STRING__WH *)string_tmp__BHB),(&__string_11));
        __tmp__AM1B=(! __tmp__2L1B);
      } else {
        __tmp__AM1B=0;
      };
      if (__tmp__AM1B) {
        if ((( 1 <= __tmp__QK1B) && ( 2 >= __tmp__QK1B))) {
          if ((__tmp__QK1B == 2)) {
            __tmp__VM1B=clone__NU0B();
            new_entry__JG1B=__tmp__VM1B;
          } else {
            __tmp__1M1B=clone__HW0B();
            new_entry__JG1B=__tmp__1M1B;
          };
          switch (((struct ___OBJ *)new_entry__JG1B)->__id) {
          case 13: {
            ((__EXT2__OHE *)new_entry__JG1B)->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.no_inode__SRRB=inode_no__NG1B;
          } break;
          case 12: {
            ((__DIRECTORY_EXT2__QHE *)((__EXT2__OHE *)new_entry__JG1B))->parent_entry_ext2__THE.no_inode__SRRB=inode_no__NG1B;
          } break;
          case 16: {
            ((__STD_FILE_EXT2__EZQB *)((__EXT2__OHE *)new_entry__JG1B))->parent_entry_ext2__FZQB.no_inode__SRRB=inode_no__NG1B;
          } break;
          };
          switch (((struct ___OBJ *)new_entry__JG1B)->__id) {
          case 13: {
            set_path__1WZB(((__EXT2__OHE *)new_entry__JG1B),string_tmp__BHB);
          } break;
          case 12: {
            set_path__Z21B(((__DIRECTORY_EXT2__QHE *)((__EXT2__OHE *)new_entry__JG1B)),string_tmp__BHB);
          } break;
          case 16: {
            set_path__T31B(((__STD_FILE_EXT2__EZQB *)((__EXT2__OHE *)new_entry__JG1B)),string_tmp__BHB);
          } break;
          };
          switch (((struct ___OBJ *)new_entry__JG1B)->__id) {
          case 13: break;
          case 12: break;
          case 16: break;
          };
          add_last__0XZB(((__LINKED_LISToENTRYo__AH *)Self__HG1B->parent_directory__UHE.list__GH),new_entry__JG1B);
          switch (((struct ___OBJ *)new_entry__JG1B)->__id) {
          case 13: {
            __tmp__AN1B=((__EXT2__OHE *)new_entry__JG1B)->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
          } break;
          case 12: {
            __tmp__AN1B=((__DIRECTORY_EXT2__QHE *)new_entry__JG1B)->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
          } break;
          case 16: {
            __tmp__AN1B=((__STD_FILE_EXT2__EZQB *)new_entry__JG1B)->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG;
          } break;
          };
          put__to__4ZZB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),new_entry__JG1B,__tmp__AN1B);
        };
      };
    } while ((__tmp__CK1B <= 266));
    __tmp__UN1B=Self__HG1B->parent_directory__UHE.list__GH->parent_linked_collection__FH.upper__BKK;
    Self__A02B= 1;
    while ((Self__A02B <= __tmp__UN1B)) {
      __tmp__3P4B=item__NBBB(((__LINKED_LISToENTRYo__AH *)Self__HG1B->parent_directory__UHE.list__GH),Self__A02B);
      if (__tmp__3P4B==((void *)0)) {
        __tmp__2N1B=((void *)0);
      } else {
        switch (((struct ___OBJ *)__tmp__3P4B)->__id) {
        case 5:
        case 7:
        case 14:
        case 9:
        case 8:
        case 10:
        case 11:
        case 15: {
          __tmp__2N1B=((void *)0);
        } break;
        case 13: {
          __tmp__2N1B=((void *)__tmp__3P4B);
        } break;
        case 12: {
          __tmp__2N1B=((void *)__tmp__3P4B);
        } break;
        case 16: {
          __tmp__2N1B=((void *)__tmp__3P4B);
        } break;
        }
      };
      new_entry__JG1B=__tmp__2N1B;
      switch (((struct ___OBJ *)__tmp__2N1B)->__id) {
      case 13: {
        make_inode__4RRB(((__EXT2__OHE *)__tmp__2N1B));
      } break;
      case 12: {
        make_inode__XQ1B(((__DIRECTORY_EXT2__QHE *)__tmp__2N1B));
      } break;
      case 16: {
        make_inode__VT1B(((__STD_FILE_EXT2__EZQB *)__tmp__2N1B));
      } break;
      };
      Self__A02B=(__INTEGER__K)(Self__A02B + 1);
    };
  };
  Result__IG1B=1;
  return(Result__IG1B);
}

static void exit__I0()

{
  asm("CLI");
  while (((__BOOLEAN__C )(1))) {
  };
}

static __MEMORY__0AB* search__RRI(__UINTEGER_CPU__3AB new_size__TRI)

{
  __MEMORY__0AB *result__VRI,*__tmp__RTI,*Result__URI;
  __UINTEGER_CPU__3AB __tmp__WTI;
  result__VRI=first_free__USI;
  while ((((void *)result__VRI != (void *)((void *)0)) && ((__UINTEGER_CPU__3AB)(((__MEMORY__0AB *)result__VRI)->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1))) < new_size__TRI))) {
    result__VRI=result__VRI->next_free__ABB;
  };
  if (((void *)result__VRI == (void *)((void *)0))) {
    __tmp__RTI=new_page__DCJ();
    result__VRI=__tmp__RTI;
  };
  __tmp__WTI=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )(void *)((unsigned long)((__POINTER__GB )((__MEMORY__0AB *)result__VRI)) - (unsigned long)begin_memory__5AC)) >> 26);
  to_busy__index__IIO(((__MEMORY__0AB *)result__VRI),((__POINTER__GB )new_size__TRI),__tmp__WTI);
  Result__URI=result__VRI;
  return(Result__URI);
}

static __POINTER__GB new_lab__KEF(__UINTEGER_32__U t__MEF)

{
  __UINTEGER_CPU__3AB idx__OEF;
  __MEMORY__0AB *blc__REF,*prev__SEF,*__tmp__BFF;
  __POINTER__GB __tmp__NGF,Result__NEF;
  __BOOLEAN__C __tmp__SFF;
  idx__OEF=((__UINTEGER_CPU__3AB ) 0);
  blc__REF=((void *)0);
  prev__SEF=((void *)0);
  while_do__CKF:
  {
    if ((idx__OEF < nb_page__ZEF)) {
      __tmp__BFF=((__MEMORY__0AB *)(last_block[(idx__OEF)]));
      blc__REF=__tmp__BFF;
      __tmp__SFF=(((__UINTEGER_CPU__3AB)(__tmp__BFF->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1))) < ((__UINTEGER_CPU__3AB ) 4096)) || ((__UINTEGER_CPU__3AB)(__tmp__BFF->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 1)) == ((__UINTEGER_CPU__3AB ) 1)));
    } else {
      __tmp__SFF=0;
    };
    if (__tmp__SFF) {
      idx__OEF=(__UINTEGER_CPU__3AB)(idx__OEF - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 1)));
      goto while_do__CKF;
    };
  };
  if ((idx__OEF >= nb_page__ZEF)) {
    __tmp__BFF=new_page__DCJ();
    blc__REF=__tmp__BFF;
  };
  ((__MEMORY__0AB *)blc__REF)->size_and_id__5AB=(__UINTEGER_CPU__3AB)(blc__REF->size_and_id__5AB - ((__UINTEGER_CPU__3AB ) 4096));
  __tmp__BFF=((__MEMORY__0AB *)blc__REF);
  __tmp__NGF=((__POINTER__GB )((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )__tmp__BFF) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(__tmp__BFF->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1))))))));
  if (((__UINTEGER_CPU__3AB)(((__MEMORY__0AB *)blc__REF)->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1))) < ((__UINTEGER_CPU__3AB )(256)))) {
    delete_link_free__VDP(((__MEMORY__0AB *)blc__REF));
    prev__SEF=blc__REF->previous_linear__2AB;
    if (((void *)prev__SEF != (void *)((void *)0))) {
      ((__MEMORY__0AB *)prev__SEF)->size_and_id__5AB=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(prev__SEF->size_and_id__5AB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - blc__REF->size_and_id__5AB)) - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))));
      last_block[(idx__OEF)] = (prev__SEF);
    };
  };
  ((__UINTEGER_32__U *)__tmp__NGF)[ 0]=t__MEF;
  Result__NEF=(void *)((unsigned long)__tmp__NGF - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 4))));
  return(Result__NEF);
}

static void clear_all__CSO(__UINTEGER_8__CD *Self__DSO,__INTEGER__K upper__ESO)

{
  __INTEGER__K Self__PHP;
  Self__PHP=upper__ESO;
  while ((Self__PHP >= 0)) {
    Self__DSO[Self__PHP]= 0;
    Self__PHP=(__INTEGER__K)(Self__PHP - 1);
  };
}

static void put_character__UKC(__CHARACTER__BB c__WKC)

{
  __INTEGER__K __tmp__BUH,Self__3HS;
  __UINTEGER_16__5F __tmp__ZQH,__tmp__4QH;
  __INTEGER_8__3F *__tmp__QQH;
  __UINTEGER_8__CD result__YAFC;
  __CHARACTER__BB __tmp__UYI;
  __tmp__QQH=((__INTEGER_8__3F *) 753664);
  { unsigned short port;
       unsigned short val;

       port=( 980);
       val =( 14);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port;
       volatile unsigned short val;

       port=( 981);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
  result__YAFC=((__UINTEGER_8__CD )(val));
  };
  __tmp__ZQH=((__UINTEGER_16__5F )result__YAFC);
  { unsigned short port;
       unsigned short val;

       port=( 980);
       val =( 15);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  __tmp__4QH=(__UINTEGER_16__5F)(__tmp__ZQH << 8);
  { unsigned short port;
       volatile unsigned short val;

       port=( 981);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
  result__YAFC=((__UINTEGER_8__CD )(val));
  };
  __tmp__ZQH=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(__tmp__4QH | ((__UINTEGER_16__5F )result__YAFC)) << 1);
  __tmp__4QH=__tmp__ZQH;
  if ((c__WKC == '\b')) {
    if (((__UINTEGER_16__5F)(__tmp__ZQH % 160) != 0)) {
      __tmp__4QH=(__UINTEGER_16__5F)(__tmp__ZQH - 2);
    };
  };
  if ((c__WKC == '\t')) {
    __tmp__4QH=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(__tmp__4QH + 16) & 65520);
  };
  if ((c__WKC == '\n')) {
    __tmp__4QH=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(__tmp__4QH + 160) - (__UINTEGER_16__5F)(__tmp__4QH % 160));
  };
  if ((c__WKC == '\r')) {
    __tmp__4QH=(__UINTEGER_16__5F)(__tmp__4QH - (__UINTEGER_16__5F)(__tmp__4QH % 160));
  };
  __tmp__UYI=((__CHARACTER__BB ) 127);
  if (((((__UINTEGER_8__CD )c__WKC) >= ((__UINTEGER_8__CD )'\016')) && (((__UINTEGER_8__CD )c__WKC) <= ((__UINTEGER_8__CD )__tmp__UYI)))) {
    __tmp__QQH[((__INTEGER__K )__tmp__4QH)]=((__INTEGER_8__3F )c__WKC);
    __tmp__QQH[((__INTEGER__K )(__UINTEGER_16__5F)(__tmp__4QH + 1))]= 15;
    __tmp__4QH=(__UINTEGER_16__5F)(__tmp__4QH + 2);
  };
  if ((__tmp__4QH >= 4000)) {
    __tmp__BUH=(__INTEGER__K)(- 160);
    if ((__tmp__BUH != 0)) {
      if ((__tmp__BUH < 0)) {
        Self__3HS= 160;
        while ((Self__3HS <= 3999)) {
          __tmp__QQH[(__INTEGER__K)(Self__3HS + __tmp__BUH)]=__tmp__QQH[Self__3HS];
          Self__3HS=(__INTEGER__K)(Self__3HS + 1);
        };
      } else {
        Self__3HS= 3999;
        while ((Self__3HS >= 160)) {
          __tmp__QQH[(__INTEGER__K)(Self__3HS + __tmp__BUH)]=__tmp__QQH[Self__3HS];
          Self__3HS=(__INTEGER__K)(Self__3HS - 1);
        };
      };
    };
    __tmp__BUH= 3840;
    while ((__tmp__BUH <= 3999)) {
      __tmp__QQH[__tmp__BUH]=((__INTEGER_8__3F )' ');
      __tmp__QQH[(__INTEGER__K)(__tmp__BUH + 1)]= 15;
      __tmp__BUH=(__INTEGER__K)(__tmp__BUH + 2);
    };
    __tmp__4QH=(__UINTEGER_16__5F)(__tmp__4QH - 160);
  };
  __tmp__ZQH=(__UINTEGER_16__5F)(__tmp__4QH >> 1);
  __tmp__4QH=__tmp__ZQH;
  { unsigned short port,val;

       port=( 980);
       val =((__UINTEGER_16__5F)((__UINTEGER_16__5F)(__tmp__ZQH & 65280) | 14));
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outw %%ax,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
  { unsigned short port,val;

       port=( 980);
       val =((__UINTEGER_16__5F)((__UINTEGER_16__5F)(__tmp__ZQH << 8) | 15));
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outw %%ax,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
}

static __STRING_CONSTANT__Y* create_copy__KXD(void *other__MXD)

{
  __STRING_CONSTANT__Y *__tmp__PXD,*Self__KIT,*Result__NXD;
  __INTEGER__K __tmp__NIT;
  __CHARACTER__BB *__tmp__VIT,*__tmp__XIT;
  __tmp__PXD=clone__T2N();
  Self__KIT=((__STRING_CONSTANT__Y *)__tmp__PXD);
  if (((struct ___OBJ *)other__MXD)->__id==6) {
    __tmp__NIT=((__STRING_CONSTANT__Y *)other__MXD)->count__LC;
  } else {
    __tmp__NIT=((__STRING__WH *)other__MXD)->count__FK;
  };
  if ((__tmp__NIT != 0)) {
    __tmp__VIT=create__MUX((__INTEGER__K)(__tmp__NIT + 1));
    Self__KIT->storage__MC=__tmp__VIT;
    if (((struct ___OBJ *)other__MXD)->__id==6) {
      __tmp__XIT=((__STRING_CONSTANT__Y *)other__MXD)->storage__MC;
    } else {
      __tmp__XIT=((__STRING__WH *)other__MXD)->storage__VSS;
    };
    copy_from__until__3UX(__tmp__VIT,__tmp__XIT,(__INTEGER__K)(__tmp__NIT - 1));
    ((__CHARACTER__BB *)Self__KIT->storage__MC)[__tmp__NIT]='\0';
    Self__KIT->count__LC=__tmp__NIT;
  };
  Result__NXD=__tmp__PXD;
  return(Result__NXD);
}

static __STRING_CONSTANT__Y* clone__T2N()

{
  __STRING_CONSTANT__Y *result__W2N,*__tmp__53N,*Result__V2N;
  __POINTER__GB ptr__X2N,__tmp__JPMC;
  __UINTEGER_CPU__3AB __tmp__52N,__tmp__FPMC,__tmp__HPMC;
  __INTEGER__K __tmp__K3N;
  __UINTEGER_32__U t__QPMC;
  result__W2N=((void *)0);
  ptr__X2N=((__POINTER__GB )(((void *)0)));
  __tmp__52N=((__UINTEGER_CPU__3AB )sizeof(__STRING_CONSTANT__Y));
  if ((__tmp__52N == 0)) {
    result__W2N=(&STRING_CONSTANT__Y_);
  } else {
    __tmp__K3N=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__52N));
    if ((__tmp__K3N == (__INTEGER__K)(- 1))) {
      __tmp__FPMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__HPMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__52N - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__FPMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__FPMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__FPMC=(__UINTEGER_CPU__3AB)(__tmp__HPMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__JPMC=micro_alloc__table__lab__KSE(__tmp__HPMC,((__POINTER__GB )(&(table_size[(__tmp__FPMC)-1]))),((__UINTEGER_32__U )__tmp__HPMC));
      ptr__X2N=__tmp__JPMC;
    } else {
      t__QPMC=((__UINTEGER_32__U )__tmp__K3N);
      __tmp__FPMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__HPMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__52N - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__FPMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__FPMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__JPMC=micro_alloc__table__lab__KSE(__tmp__HPMC,((__POINTER__GB )(&(table_type[(t__QPMC)]))),(__UINTEGER_32__U)(t__QPMC | 1));
      ptr__X2N=__tmp__JPMC;
    };
    __tmp__53N=((__STRING_CONSTANT__Y *)ptr__X2N);
    result__W2N=__tmp__53N;
    *(__tmp__53N) = *((&STRING_CONSTANT__Y_));
  };
  Result__V2N=result__W2N;
  return(Result__V2N);
}

static __INTEGER__K hash_code__BQT(__STRING_CONSTANT__Y *Self__CQT)

{
  __INTEGER__K result__EQT,__tmp__FQT,Self__T5U,Result__DQT;
  __CHARACTER__BB *__tmp__J3LC;
  result__EQT= 0;
  __tmp__FQT=Self__CQT->count__LC;
  Self__T5U= 1;
  __tmp__J3LC=Self__CQT->storage__MC;
  while ((Self__T5U <= __tmp__FQT)) {
    result__EQT=(__INTEGER__K)((__INTEGER__K)( 5 * result__EQT) + ((__INTEGER__K )((__UINTEGER_8__CD )((__CHARACTER__BB *)__tmp__J3LC)[(__INTEGER__K)(Self__T5U - 1)])));
    Self__T5U=(__INTEGER__K)(Self__T5U + 1);
  };
  if ((result__EQT < 0)) {
    result__EQT=(__INTEGER__K)(~ result__EQT);
  };
  Result__DQT=result__EQT;
  return(Result__DQT);
}

static __BOOLEAN__C __infix_equal_equal__2YAB(__STRING_CONSTANT__Y *Self__3YAB,void *other__4YAB)

{
  void *__tmp__CZAB;
  __INTEGER__K __tmp__N3AB,__tmp__O3AB;
  __BOOLEAN__C result__G3AB,__tmp__D4AB,Result__5YAB;
  __CHARACTER__BB *__tmp__53AB,*__tmp__A4AB;
  if (other__4YAB==((void *)0)) {
    __tmp__CZAB=((void *)0);
  } else {
    if (((struct ___OBJ *)other__4YAB)->__id==6) {
      __tmp__CZAB=((__STRING_CONSTANT__Y *)other__4YAB);
    } else {
      __tmp__CZAB=((void *)other__4YAB);
    }
  };
  if (((void *)__tmp__CZAB != (void *)((void *)0))) {
    result__G3AB=0;
    __tmp__N3AB=Self__3YAB->count__LC;
    if (((struct ___OBJ *)__tmp__CZAB)->__id==6) {
      __tmp__O3AB=((__STRING_CONSTANT__Y *)__tmp__CZAB)->count__LC;
    } else {
      __tmp__O3AB=((__STRING__WH *)__tmp__CZAB)->count__FK;
    };
    if ((__tmp__N3AB == __tmp__O3AB)) {
      if ((Self__3YAB->count__LC == 0)) {
        result__G3AB=1;
      } else {
        __tmp__53AB=Self__3YAB->storage__MC;
        if (((struct ___OBJ *)__tmp__CZAB)->__id==6) {
          __tmp__A4AB=((__STRING_CONSTANT__Y *)__tmp__CZAB)->storage__MC;
        } else {
          __tmp__A4AB=((__STRING__WH *)__tmp__CZAB)->storage__VSS;
        };
        __tmp__D4AB=fast_memcmp__until__GU2(((__CHARACTER__BB *)__tmp__53AB),__tmp__A4AB,Self__3YAB->count__LC);
        result__G3AB=__tmp__D4AB;
      };
    };
    __tmp__D4AB=result__G3AB;
  } else {
    __tmp__D4AB=0;
  };
  Result__5YAB=__tmp__D4AB;
  return(Result__5YAB);
}

static void increase_capacity__PXL(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__QXL)

{
  __INTEGER__K __tmp__DYL,i__1XL,__tmp__5YL,__tmp__BZL;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node1__3XL;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node2__4XL;
  void **old_buckets__2XL,**__tmp__EYL;
  node1__3XL=((void *)0);
  node2__4XL=((void *)0);
  old_buckets__2XL=Self__QXL->buckets__43F;
  __tmp__DYL=prime_number_ceiling__5BI((__INTEGER__K)(Self__QXL->capacity__W3F + 1));
  __tmp__EYL=create__KNI(__tmp__DYL);
  Self__QXL->buckets__43F=__tmp__EYL;
  i__1XL=(__INTEGER__K)(Self__QXL->capacity__W3F - 1);
  Self__QXL->capacity__W3F=__tmp__DYL;
  while ((! (i__1XL < 0))) {
    node1__3XL=((void **)old_buckets__2XL)[i__1XL];
    while (((void *)node1__3XL != (void *)((void *)0))) {
      node2__4XL=node1__3XL->next__W4F;
      __tmp__5YL=hash_code__BQT(((__STRING_CONSTANT__Y *)node1__3XL->key__K4F));
      __tmp__BZL=(__INTEGER__K)(__tmp__5YL % Self__QXL->capacity__W3F);
      ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node1__3XL)->next__W4F=((void **)Self__QXL->buckets__43F)[__tmp__BZL];
      ((void **)Self__QXL->buckets__43F)[__tmp__BZL]=node1__3XL;
      node1__3XL=node2__4XL;
    };
    i__1XL=(__INTEGER__K)(i__1XL - 1);
  };
}

static __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F* new_node__to__next__UIJ(void *v__WIJ,__STRING_CONSTANT__Y *k__XIJ,__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *nxt__YIJ)

{
  __POINTER__GB ptr__EXT,__tmp__0PMC;
  __UINTEGER_CPU__3AB __tmp__MXT,__tmp__WPMC,__tmp__YPMC;
  __INTEGER__K __tmp__XXT;
  __UINTEGER_32__U t__BQMC;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *result__DXT;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__MYT;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *Result__ZIJ;
  result__DXT=((void *)0);
  ptr__EXT=((__POINTER__GB )(((void *)0)));
  __tmp__MXT=((__UINTEGER_CPU__3AB )sizeof(__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F));
  if ((__tmp__MXT == 0)) {
    result__DXT=(&HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F_);
  } else {
    __tmp__XXT=16;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__MXT));
    if ((__tmp__XXT == (__INTEGER__K)(- 1))) {
      __tmp__WPMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__YPMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__MXT - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__WPMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__WPMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__WPMC=(__UINTEGER_CPU__3AB)(__tmp__YPMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__0PMC=micro_alloc__table__lab__KSE(__tmp__YPMC,((__POINTER__GB )(&(table_size[(__tmp__WPMC)-1]))),((__UINTEGER_32__U )__tmp__YPMC));
      ptr__EXT=__tmp__0PMC;
    } else {
      t__BQMC=((__UINTEGER_32__U )__tmp__XXT);
      __tmp__WPMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__YPMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__MXT - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__WPMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__WPMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__0PMC=micro_alloc__table__lab__KSE(__tmp__YPMC,((__POINTER__GB )(&(table_type[(t__BQMC)]))),(__UINTEGER_32__U)(t__BQMC | 1));
      ptr__EXT=__tmp__0PMC;
    };
    __tmp__MYT=((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)ptr__EXT);
    result__DXT=__tmp__MYT;
    *(__tmp__MYT) = *((&HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F_));
  };
  __tmp__MYT=((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)result__DXT);
  __tmp__MYT->item__44F=v__WIJ;
  __tmp__MYT->key__K4F=k__XIJ;
  __tmp__MYT->next__W4F=nxt__YIJ;
  Result__ZIJ=result__DXT;
  return(Result__ZIJ);
}

static __DRIVE__HPD* clone__EXG()

{
  __DRIVE__HPD *result__HXG,*__tmp__QYG,*Result__GXG;
  __POINTER__GB ptr__IXG,__tmp__LQMC;
  __INTEGER__K __tmp__OXG,__tmp__1XG;
  __UINTEGER_CPU__3AB __tmp__QXG,__tmp__2XG,__tmp__3XG,__tmp__JQMC;
  __UINTEGER_32__U t__SQMC;
  result__HXG=((void *)0);
  ptr__IXG=((__POINTER__GB )(((void *)0)));
  if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
    __tmp__OXG=sizeof(__DRIVE__HPD);
  } else {
    __tmp__OXG=sizeof(__DRIVE__HPD);
  };
  __tmp__QXG=((__UINTEGER_CPU__3AB )__tmp__OXG);
  if ((__tmp__QXG == 0)) {
    result__HXG=(&DRIVE__HPD_);
  } else {
    if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
      __tmp__1XG=17;
    } else {
      __tmp__1XG=17;
    };
    if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
      __tmp__2XG=clone_allocation_size__ATC;
    } else {
      __tmp__2XG=clone_allocation_size__ATC;
    };
    __tmp__3XG=(__UINTEGER_CPU__3AB)(__tmp__2XG - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__QXG));
    if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
      clone_allocation_size__ATC=__tmp__3XG;
    } else {
      clone_allocation_size__ATC=__tmp__3XG;
    };
    if ((__tmp__1XG == (__INTEGER__K)(- 1))) {
      __tmp__2XG=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__JQMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__QXG - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2XG)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2XG) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__2XG=(__UINTEGER_CPU__3AB)(__tmp__JQMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__LQMC=micro_alloc__table__lab__KSE(__tmp__JQMC,((__POINTER__GB )(&(table_size[(__tmp__2XG)-1]))),((__UINTEGER_32__U )__tmp__JQMC));
      ptr__IXG=__tmp__LQMC;
    } else {
      t__SQMC=((__UINTEGER_32__U )__tmp__1XG);
      __tmp__2XG=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__JQMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__QXG - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2XG)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__2XG) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__LQMC=micro_alloc__table__lab__KSE(__tmp__JQMC,((__POINTER__GB )(&(table_type[(t__SQMC)]))),(__UINTEGER_32__U)(t__SQMC | 1));
      ptr__IXG=__tmp__LQMC;
    };
    __tmp__QYG=((__DRIVE__HPD *)ptr__IXG);
    result__HXG=__tmp__QYG;
    if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
      *(__tmp__QYG) = *((&DRIVE__HPD_));
    } else {
      *(__tmp__QYG) = *((&DRIVE__HPD_));
    };
    if (((struct ___OBJ *)(&DRIVE__HPD_)->parent_controler__IPD)->__id==17) {
    };
  };
  Result__GXG=result__HXG;
  return(Result__GXG);
}

static void with_capacity__MST(__INTEGER__K medium_size__OST)

{
  __INTEGER__K __tmp__XST,Self__B32;
  __POINTER__GB __tmp__CTW;
  void **__tmp__GTW;
  __tmp__XST=prime_number_ceiling__5BI(medium_size__OST);
  __tmp__CTW=alloc_dynamic__52B(((__UINTEGER_CPU__3AB )(__INTEGER__K)(__tmp__XST * ((__INTEGER__K )(sizeof(void *))))));
  __tmp__GTW=((void **)__tmp__CTW);
  Self__B32=(__INTEGER__K)(__tmp__XST - 1);
  while ((Self__B32 >= 0)) {
    __tmp__GTW[Self__B32]=((void *)0);
    Self__B32=(__INTEGER__K)(Self__B32 - 1);
  };
}

static __CACHE_SECTOR__BZG* create__ZNK()

{
  __CACHE_SECTOR__BZG *result__QUO,*__tmp__ZVO,*Result__1NK;
  __POINTER__GB ptr__RUO,__tmp__2QMC;
  __UINTEGER_CPU__3AB __tmp__ZUO,__tmp__YQMC,__tmp__0QMC;
  __INTEGER__K __tmp__EVO;
  __UINTEGER_32__U t__DRMC;
  result__QUO=((void *)0);
  ptr__RUO=((__POINTER__GB )(((void *)0)));
  __tmp__ZUO=((__UINTEGER_CPU__3AB )sizeof(__CACHE_SECTOR__BZG));
  if ((__tmp__ZUO == 0)) {
    result__QUO=(&CACHE_SECTOR__BZG_);
  } else {
    __tmp__EVO=18;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__ZUO));
    if ((__tmp__EVO == (__INTEGER__K)(- 1))) {
      __tmp__YQMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__0QMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__ZUO - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YQMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YQMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__YQMC=(__UINTEGER_CPU__3AB)(__tmp__0QMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__2QMC=micro_alloc__table__lab__KSE(__tmp__0QMC,((__POINTER__GB )(&(table_size[(__tmp__YQMC)-1]))),((__UINTEGER_32__U )__tmp__0QMC));
      ptr__RUO=__tmp__2QMC;
    } else {
      t__DRMC=((__UINTEGER_32__U )__tmp__EVO);
      __tmp__YQMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__0QMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__ZUO - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YQMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YQMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__2QMC=micro_alloc__table__lab__KSE(__tmp__0QMC,((__POINTER__GB )(&(table_type[(t__DRMC)]))),(__UINTEGER_32__U)(t__DRMC | 1));
      ptr__RUO=__tmp__2QMC;
    };
    __tmp__ZVO=((__CACHE_SECTOR__BZG *)ptr__RUO);
    result__QUO=__tmp__ZVO;
    *(__tmp__ZVO) = *((&CACHE_SECTOR__BZG_));
  };
  ptr__RUO=alloc_dynamic__52B(((__UINTEGER_CPU__3AB ) 512));
  clear_all__CSO(((__UINTEGER_8__CD *)ptr__RUO), 511);
  Result__1NK=result__QUO;
  return(Result__1NK);
}

static void print_positif__JLQ(__INTEGER__K Self__KLQ)

{
  __INTEGER__K __tmp__XLQ;
  __CHARACTER__BB __tmp__DOR;
  __tmp__DOR=((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__INTEGER__K)(Self__KLQ % 10)) + ((__UINTEGER_8__CD )'0')));
  __tmp__XLQ=(__INTEGER__K)(Self__KLQ / 10);
  if ((__tmp__XLQ != 0)) {
    print_positif__JLQ(__tmp__XLQ);
  };
  put_character__UKC(__tmp__DOR);
}

static void read_partition__begin__VCE(__FILE_SYSTEM__2B *Self__WCE,__DRIVE__HPD *drv__XCE,__UINTEGER_32__U logical_sector__YCE)

{
  __INTEGER__K Self__ROE,__tmp__3A5,__tmp__1JPB;
  void *__tmp__HEE;
  __UINTEGER_32__U __tmp__JEE,t__URMC,t__FSMC,t__WSMC;
  __FAT12__UFE *result__JA5,*__tmp__SB5;
  __POINTER__GB ptr__KA5,__tmp__NRMC,__tmp__4RMC;
  __UINTEGER_CPU__3AB __tmp__SA5,__tmp__JRMC,__tmp__LRMC,__tmp__0RMC;
  __UINTEGER_CPU__3AB __tmp__2RMC;
  __DRIVE__HPD *__tmp__MLCB,*__tmp__1CRB;
  void *__tmp__VLCB,*__tmp__DDRB;
  __FAT16__OGE *result__HJPB,*__tmp__QKPB;
  __FAT32__4GE *result__ELPB,*__tmp__NMPB;
  __EXT2__OHE *result__ANPB,*__tmp__JOPB;
  __STRING__WH *__tmp__RIPB,*Self__PUT;
  __BOOLEAN__C __tmp__0EE,__tmp__CGE,__tmp__R2OB;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *__tmp__LLCB,*__tmp__0CRB;
  __UINTEGER_8__CD __tmp__4HE,val__5OPB,__tmp__0PPB;
  __CHARACTER__BB result__E1PB;
  if (((struct ___OBJ *)drv__XCE->parent_controler__IPD)->__id==17) {
    ((__DRIVE__HPD *)drv__XCE)->cursor__R0G=logical_sector__YCE;
  } else {
    ((__DRIVE__HPD *)drv__XCE)->cursor__R0G=logical_sector__YCE;
  };
  (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buffer__UDE))).upper__4KT=(__INTEGER__K)(- 1);
  read__size__S0G(((__DRIVE__HPD *)drv__XCE),buffer__UDE, 1);
  Self__ROE= 446;
  while ((Self__ROE <= 494)) {
    __tmp__HEE=((void *)((__UINTEGER_8__CD *)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buffer__UDE))).storage__1MT)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )Self__ROE))))));
    __tmp__JEE=(__UINTEGER_32__U)(((__MBR__ZCE *)__tmp__HEE)->map_mbr_first_sector__BDE + logical_sector__YCE);
    if (((((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 5) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 15))) {
      print__SKC((&__string_12));
      read_partition__begin__VCE(Self__WCE,drv__XCE,__tmp__JEE);
      __tmp__0EE=1;
    } else {
      __tmp__0EE=0;
    };
    if ((! __tmp__0EE)) {
      if (((((__MBR__ZCE *)__tmp__HEE)->map_type__4CE != 0) && (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE != 255))) {
        if ((((((((((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 1) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 17)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 141)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 170)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 193)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 209)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 225))) {
          print__SKC((&__string_13));
          result__JA5=((void *)0);
          ptr__KA5=((__POINTER__GB )(((void *)0)));
          __tmp__SA5=((__UINTEGER_CPU__3AB )sizeof(__FAT12__UFE));
          if ((__tmp__SA5 == 0)) {
            result__JA5=(&FAT12__UFE_);
          } else {
            __tmp__3A5=-1;
            clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__SA5));
            if ((__tmp__3A5 == (__INTEGER__K)(- 1))) {
              __tmp__JRMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
              __tmp__LRMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__SA5 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC) - ((__UINTEGER_CPU__3AB ) 1)));
              __tmp__JRMC=(__UINTEGER_CPU__3AB)(__tmp__LRMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
              __tmp__NRMC=micro_alloc__table__lab__KSE(__tmp__LRMC,((__POINTER__GB )(&(table_size[(__tmp__JRMC)-1]))),((__UINTEGER_32__U )__tmp__LRMC));
              ptr__KA5=__tmp__NRMC;
            } else {
              t__URMC=((__UINTEGER_32__U )__tmp__3A5);
              __tmp__JRMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
              __tmp__LRMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__SA5 - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC) - ((__UINTEGER_CPU__3AB ) 1)));
              __tmp__NRMC=micro_alloc__table__lab__KSE(__tmp__LRMC,((__POINTER__GB )(&(table_type[(t__URMC)]))),(__UINTEGER_32__U)(t__URMC | 1));
              ptr__KA5=__tmp__NRMC;
            };
            __tmp__SB5=((__FAT12__UFE *)ptr__KA5);
            result__JA5=__tmp__SB5;
            *(__tmp__SB5) = *((&FAT12__UFE_));
          };
          __tmp__SB5=((__FAT12__UFE *)result__JA5);
          __tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB=drv__XCE;
          __tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB=__tmp__JEE;
          __tmp__LLCB=create_with_capacity__JBF( 512);
          __tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB=__tmp__LLCB;
          __tmp__MLCB=__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
          t__URMC=__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB;
          if (((struct ___OBJ *)__tmp__MLCB->parent_controler__IPD)->__id==17) {
            ((__DRIVE__HPD *)__tmp__MLCB)->cursor__R0G=t__URMC;
          } else {
            ((__DRIVE__HPD *)__tmp__MLCB)->cursor__R0G=t__URMC;
          };
          read__size__S0G(((__DRIVE__HPD *)__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB, 1);
          __tmp__VLCB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).storage__1MT);
          __tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB=((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__VLCB)->get_sectors_per_cluster__5HCB);
          __tmp__SB5->parent_fat__5FE.fat_sector__5LCB=(__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB + ((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__VLCB)->get_sectors_reserved__AICB));
          __tmp__SB5->parent_fat__5FE.fat_number__BMCB=((__BOOT__SHCB *)__tmp__VLCB)->get_nb_fat__BICB;
          __tmp__SB5->parent_fat__5FE.fat_size__DMCB=((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__VLCB)->get_sectors_per_fat__FICB);
          __tmp__LLCB=create_with_capacity__JBF(((__INTEGER__K )(__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.fat_size__DMCB << 9)));
          __tmp__SB5->parent_fat__5FE.fat_cache__MMCB=__tmp__LLCB;
          __tmp__MLCB=__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
          t__URMC=__tmp__SB5->parent_fat__5FE.fat_sector__5LCB;
          if (((struct ___OBJ *)__tmp__MLCB->parent_controler__IPD)->__id==17) {
            ((__DRIVE__HPD *)__tmp__MLCB)->cursor__R0G=t__URMC;
          } else {
            ((__DRIVE__HPD *)__tmp__MLCB)->cursor__R0G=t__URMC;
          };
          read__size__S0G(((__DRIVE__HPD *)__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),__tmp__SB5->parent_fat__5FE.fat_cache__MMCB,((__INTEGER__K )__tmp__SB5->parent_fat__5FE.fat_size__DMCB));
          __tmp__SB5->parent_fat__5FE.root_offset__2MCB=(__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.fat_sector__5LCB + (__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.fat_size__DMCB * ((__UINTEGER_32__U )__tmp__SB5->parent_fat__5FE.fat_number__BMCB)));
          __tmp__SB5->parent_fat__5FE.root_size__5MCB=(__UINTEGER_16__5F)(((__BOOT__SHCB *)__tmp__VLCB)->get_nb_root_entries__CICB >> 4);
          __tmp__SB5->parent_fat__5FE.root_block__ANCB= 4096;
          __tmp__SB5->parent_fat__5FE.block_offset__MNCB=(__UINTEGER_32__U)((__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.root_offset__2MCB + ((__UINTEGER_32__U )__tmp__SB5->parent_fat__5FE.root_size__5MCB)) - (__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 1));
          set_capacity__L3CB(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB),((__INTEGER__K )(__UINTEGER_32__U)(__tmp__SB5->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9)));
          add_part__with__BX3(Self__WCE,result__JA5);
          __tmp__CGE=1;
        } else {
          __tmp__CGE=0;
        };
        if (__tmp__CGE) {
          __tmp__CGE=1;
        } else {
          __tmp__R2OB=((((((((((((((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 4) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 6)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 14)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 20)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 22)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 30)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 144)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 146)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 154)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 196)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 198)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 206));
          if (__tmp__R2OB) {
            print__SKC((&__string_14));
            result__HJPB=((void *)0);
            __tmp__NRMC=((__POINTER__GB )(((void *)0)));
            __tmp__JRMC=((__UINTEGER_CPU__3AB )sizeof(__FAT16__OGE));
            if ((__tmp__JRMC == 0)) {
              result__HJPB=(&FAT16__OGE_);
            } else {
              __tmp__1JPB=-1;
              clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC));
              if ((__tmp__1JPB == (__INTEGER__K)(- 1))) {
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
                __tmp__2RMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__JRMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC) - ((__UINTEGER_CPU__3AB ) 1)));
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(__tmp__2RMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
                __tmp__4RMC=micro_alloc__table__lab__KSE(__tmp__2RMC,((__POINTER__GB )(&(table_size[(__tmp__0RMC)-1]))),((__UINTEGER_32__U )__tmp__2RMC));
                __tmp__NRMC=__tmp__4RMC;
              } else {
                t__FSMC=((__UINTEGER_32__U )__tmp__1JPB);
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
                __tmp__2RMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__JRMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC) - ((__UINTEGER_CPU__3AB ) 1)));
                __tmp__4RMC=micro_alloc__table__lab__KSE(__tmp__2RMC,((__POINTER__GB )(&(table_type[(t__FSMC)]))),(__UINTEGER_32__U)(t__FSMC | 1));
                __tmp__NRMC=__tmp__4RMC;
              };
              __tmp__QKPB=((__FAT16__OGE *)__tmp__NRMC);
              result__HJPB=__tmp__QKPB;
              *(__tmp__QKPB) = *((&FAT16__OGE_));
            };
            __tmp__QKPB=((__FAT16__OGE *)result__HJPB);
            __tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB=drv__XCE;
            __tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB=__tmp__JEE;
            __tmp__0CRB=create_with_capacity__JBF( 512);
            __tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB=__tmp__0CRB;
            __tmp__1CRB=__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
            t__FSMC=__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB;
            if (((struct ___OBJ *)__tmp__1CRB->parent_controler__IPD)->__id==17) {
              ((__DRIVE__HPD *)__tmp__1CRB)->cursor__R0G=t__FSMC;
            } else {
              ((__DRIVE__HPD *)__tmp__1CRB)->cursor__R0G=t__FSMC;
            };
            read__size__S0G(((__DRIVE__HPD *)__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB, 1);
            __tmp__DDRB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).storage__1MT);
            __tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB=((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__DDRB)->get_sectors_per_cluster__5HCB);
            __tmp__QKPB->parent_fat__PGE.fat_sector__5LCB=(__UINTEGER_32__U)(__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB + ((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__DDRB)->get_sectors_reserved__AICB));
            __tmp__QKPB->parent_fat__PGE.fat_number__BMCB=((__BOOT__SHCB *)__tmp__DDRB)->get_nb_fat__BICB;
            __tmp__QKPB->parent_fat__PGE.fat_size__DMCB=((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__DDRB)->get_sectors_per_fat__FICB);
            __tmp__0CRB=create_with_capacity__JBF( 4096);
            __tmp__QKPB->parent_fat__PGE.fat_cache__MMCB=__tmp__0CRB;
            __tmp__QKPB->parent_fat__PGE.root_offset__2MCB=(__UINTEGER_32__U)(__tmp__QKPB->parent_fat__PGE.fat_sector__5LCB + (__UINTEGER_32__U)(__tmp__QKPB->parent_fat__PGE.fat_size__DMCB * ((__UINTEGER_32__U )__tmp__QKPB->parent_fat__PGE.fat_number__BMCB)));
            __tmp__QKPB->parent_fat__PGE.root_size__5MCB=(__UINTEGER_16__5F)(((__BOOT__SHCB *)__tmp__DDRB)->get_nb_root_entries__CICB >> 4);
            __tmp__QKPB->parent_fat__PGE.root_block__ANCB= 65536;
            __tmp__QKPB->parent_fat__PGE.block_offset__MNCB=(__UINTEGER_32__U)((__UINTEGER_32__U)(__tmp__QKPB->parent_fat__PGE.root_offset__2MCB + ((__UINTEGER_32__U )__tmp__QKPB->parent_fat__PGE.root_size__5MCB)) - (__UINTEGER_32__U)(__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 1));
            set_capacity__L3CB(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB),((__INTEGER__K )(__UINTEGER_32__U)(__tmp__QKPB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9)));
            add_part__with__BX3(Self__WCE,result__HJPB);
          };
          __tmp__CGE=__tmp__R2OB;
        };
        if (__tmp__CGE) {
          __tmp__CGE=1;
        } else {
          __tmp__R2OB=((((((((((((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 11) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 12)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 27)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 28)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 139)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 140)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 151)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 152)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 203)) || (((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 204));
          if (__tmp__R2OB) {
            print__SKC((&__string_15));
            result__ELPB=((void *)0);
            __tmp__NRMC=((__POINTER__GB )(((void *)0)));
            __tmp__JRMC=((__UINTEGER_CPU__3AB )sizeof(__FAT32__4GE));
            if ((__tmp__JRMC == 0)) {
              result__ELPB=(&FAT32__4GE_);
            } else {
              __tmp__1JPB=-1;
              clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC));
              if ((__tmp__1JPB == (__INTEGER__K)(- 1))) {
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
                __tmp__2RMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__JRMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC) - ((__UINTEGER_CPU__3AB ) 1)));
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(__tmp__2RMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
                __tmp__4RMC=micro_alloc__table__lab__KSE(__tmp__2RMC,((__POINTER__GB )(&(table_size[(__tmp__0RMC)-1]))),((__UINTEGER_32__U )__tmp__2RMC));
                __tmp__NRMC=__tmp__4RMC;
              } else {
                t__WSMC=((__UINTEGER_32__U )__tmp__1JPB);
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
                __tmp__2RMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__JRMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC) - ((__UINTEGER_CPU__3AB ) 1)));
                __tmp__4RMC=micro_alloc__table__lab__KSE(__tmp__2RMC,((__POINTER__GB )(&(table_type[(t__WSMC)]))),(__UINTEGER_32__U)(t__WSMC | 1));
                __tmp__NRMC=__tmp__4RMC;
              };
              __tmp__NMPB=((__FAT32__4GE *)__tmp__NRMC);
              result__ELPB=__tmp__NMPB;
              *(__tmp__NMPB) = *((&FAT32__4GE_));
            };
            __tmp__NMPB=((__FAT32__4GE *)result__ELPB);
            __tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB=drv__XCE;
            __tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB=__tmp__JEE;
            __tmp__0CRB=create_with_capacity__JBF( 512);
            __tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB=__tmp__0CRB;
            __tmp__1CRB=__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
            t__FSMC=__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB;
            if (((struct ___OBJ *)__tmp__1CRB->parent_controler__IPD)->__id==17) {
              ((__DRIVE__HPD *)__tmp__1CRB)->cursor__R0G=t__FSMC;
            } else {
              ((__DRIVE__HPD *)__tmp__1CRB)->cursor__R0G=t__FSMC;
            };
            read__size__S0G(((__DRIVE__HPD *)__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB, 1);
            __tmp__DDRB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).storage__1MT);
            __tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB=((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__DDRB)->get_sectors_per_cluster__5HCB);
            __tmp__NMPB->parent_fat__5GE.fat_sector__5LCB=(__UINTEGER_32__U)(__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.first_sector__KLCB + ((__UINTEGER_32__U )((__BOOT__SHCB *)__tmp__DDRB)->get_sectors_reserved__AICB));
            __tmp__NMPB->parent_fat__5GE.fat_number__BMCB=((__BOOT__SHCB *)__tmp__DDRB)->get_nb_fat__BICB;
            __tmp__NMPB->parent_fat__5GE.fat_size__DMCB=((__BOOT__SHCB *)__tmp__DDRB)->get_sectors_per_fat32__KICB;
            __tmp__0CRB=create_with_capacity__JBF( 4096);
            __tmp__NMPB->parent_fat__5GE.fat_cache__MMCB=__tmp__0CRB;
            __tmp__NMPB->parent_fat__5GE.root_block__ANCB=((__BOOT__SHCB *)__tmp__DDRB)->get_cluster_start_root__NICB;
            __tmp__NMPB->parent_fat__5GE.block_offset__MNCB=(__UINTEGER_32__U)((__UINTEGER_32__U)(__tmp__NMPB->parent_fat__5GE.fat_sector__5LCB + (__UINTEGER_32__U)(__tmp__NMPB->parent_fat__5GE.fat_size__DMCB * ((__UINTEGER_32__U )__tmp__NMPB->parent_fat__5GE.fat_number__BMCB))) - (__UINTEGER_32__U)(__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 1));
            set_capacity__L3CB(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB),((__INTEGER__K )(__UINTEGER_32__U)(__tmp__NMPB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB << 9)));
            add_part__with__BX3(Self__WCE,result__ELPB);
          };
          __tmp__CGE=__tmp__R2OB;
        };
        if ((! __tmp__CGE)) {
          if ((((__MBR__ZCE *)__tmp__HEE)->map_type__4CE == 131)) {
            print__SKC((&__string_16));
            result__ANPB=((void *)0);
            __tmp__NRMC=((__POINTER__GB )(((void *)0)));
            __tmp__JRMC=((__UINTEGER_CPU__3AB )sizeof(__EXT2__OHE));
            if ((__tmp__JRMC == 0)) {
              result__ANPB=(&EXT2__OHE_);
            } else {
              __tmp__1JPB=-1;
              clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JRMC));
              if ((__tmp__1JPB == (__INTEGER__K)(- 1))) {
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
                __tmp__2RMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__JRMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC) - ((__UINTEGER_CPU__3AB ) 1)));
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(__tmp__2RMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
                __tmp__4RMC=micro_alloc__table__lab__KSE(__tmp__2RMC,((__POINTER__GB )(&(table_size[(__tmp__0RMC)-1]))),((__UINTEGER_32__U )__tmp__2RMC));
                __tmp__NRMC=__tmp__4RMC;
              } else {
                t__WSMC=((__UINTEGER_32__U )__tmp__1JPB);
                __tmp__0RMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
                __tmp__2RMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__JRMC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0RMC) - ((__UINTEGER_CPU__3AB ) 1)));
                __tmp__4RMC=micro_alloc__table__lab__KSE(__tmp__2RMC,((__POINTER__GB )(&(table_type[(t__WSMC)]))),(__UINTEGER_32__U)(t__WSMC | 1));
                __tmp__NRMC=__tmp__4RMC;
              };
              __tmp__JOPB=((__EXT2__OHE *)__tmp__NRMC);
              result__ANPB=__tmp__JOPB;
              *(__tmp__JOPB) = *((&EXT2__OHE_));
            };
            __tmp__JOPB=((__EXT2__OHE *)result__ANPB);
            __tmp__JOPB->parent_partition_ext2__XHE.parent_partition__WHE.drive__JLCB=drv__XCE;
            __tmp__JOPB->parent_partition_ext2__XHE.first_block_sector__MHRB=(__UINTEGER_32__U)(__tmp__JEE + 2);
            __tmp__0CRB=create_with_capacity__JBF( 512);
            __tmp__JOPB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB=__tmp__0CRB;
            __tmp__1CRB=__tmp__JOPB->parent_partition_ext2__XHE.parent_partition__WHE.drive__JLCB;
            t__FSMC=__tmp__JOPB->parent_partition_ext2__XHE.first_block_sector__MHRB;
            if (((struct ___OBJ *)__tmp__1CRB->parent_controler__IPD)->__id==17) {
              ((__DRIVE__HPD *)__tmp__1CRB)->cursor__R0G=t__FSMC;
            } else {
              ((__DRIVE__HPD *)__tmp__1CRB)->cursor__R0G=t__FSMC;
            };
            read__size__S0G(((__DRIVE__HPD *)__tmp__JOPB->parent_partition_ext2__XHE.parent_partition__WHE.drive__JLCB),__tmp__JOPB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB, 1);
            __tmp__0CRB=create_with_capacity__JBF( 208);
            __tmp__3A5= 0;
            while ((__tmp__3A5 <= 207)) {
              add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__0CRB),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__JOPB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[__tmp__3A5]);
              __tmp__3A5=(__INTEGER__K)(__tmp__3A5 + 1);
            };
            __tmp__JOPB->parent_partition_ext2__XHE.superblock__MIRB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__0CRB))).storage__1MT);
            add_part__with__BX3(Self__WCE,result__ANPB);
          } else {
            print__SKC((&__string_17));
            __tmp__4HE=((__MBR__ZCE *)__tmp__HEE)->map_type__4CE;
            __tmp__RIPB=create__4FB( 8);
            val__5OPB= 0;
            __tmp__3A5= 0;
            __tmp__1JPB= 0;
            if ((__tmp__4HE == 0)) {
              add_last__KTS(((__STRING__WH *)__tmp__RIPB),'0');
            } else {
              __tmp__3A5=(__INTEGER__K)(__tmp__RIPB->count__FK + 1);
              val__5OPB=__tmp__4HE;
              while ((val__5OPB != 0)) {
                __tmp__0PPB=(__UINTEGER_8__CD)(val__5OPB & 15);
                result__E1PB='\0';
                if ((__tmp__0PPB <= 9)) {
                  result__E1PB=((__CHARACTER__BB )(__UINTEGER_8__CD)(__tmp__0PPB + ((__UINTEGER_8__CD )'0')));
                } else {
                  result__E1PB=((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )'A') + (__UINTEGER_8__CD)(__tmp__0PPB - 10)));
                };
                add_last__KTS(((__STRING__WH *)__tmp__RIPB),result__E1PB);
                val__5OPB=(__UINTEGER_8__CD)(val__5OPB >> 4);
              };
              __tmp__1JPB=__tmp__RIPB->count__FK;
              while ((__tmp__3A5 < __tmp__1JPB)) {
                Self__PUT=((__STRING__WH *)__tmp__RIPB);
                result__E1PB=((__CHARACTER__BB *)Self__PUT->storage__VSS)[(__INTEGER__K)(__tmp__3A5 - 1)];
                ((__CHARACTER__BB *)Self__PUT->storage__VSS)[(__INTEGER__K)(__tmp__3A5 - 1)]=((__CHARACTER__BB *)Self__PUT->storage__VSS)[(__INTEGER__K)(__tmp__1JPB - 1)];
                ((__CHARACTER__BB *)Self__PUT->storage__VSS)[(__INTEGER__K)(__tmp__1JPB - 1)]=result__E1PB;
                __tmp__1JPB=(__INTEGER__K)(__tmp__1JPB - 1);
                __tmp__3A5=(__INTEGER__K)(__tmp__3A5 + 1);
              };
            };
            print__NET(((__STRING__WH *)__tmp__RIPB));
            print__SKC((&__string_18));
          };
        };
      };
    };
    Self__ROE=(__INTEGER__K)(Self__ROE + 16);
  };
}

static void replace_all__with__DXS(__STRING__WH *Self__EXS)

{
  __INTEGER__K __tmp__JXS,Self__X12;
  __CHARACTER__BB *__tmp__HXS,*__tmp__GNKC;
  __tmp__HXS=Self__EXS->storage__VSS;
  __tmp__JXS=(__INTEGER__K)(Self__EXS->count__FK - 1);
  __tmp__GNKC=((__CHARACTER__BB *)__tmp__HXS);
  Self__X12=__tmp__JXS;
  while ((Self__X12 >= 0)) {
    if (('\\' == __tmp__GNKC[Self__X12])) {
      __tmp__GNKC[Self__X12]='/';
    };
    Self__X12=(__INTEGER__K)(Self__X12 - 1);
  };
}

static void remove_first__20T(__STRING__WH *Self__30T,__INTEGER__K n__40T)

{
  if ((n__40T > Self__30T->count__FK)) {
    Self__30T->count__FK= 0;
  } else {
    if ((n__40T > 0)) {
      remove_between__to__4IT(Self__30T, 1,n__40T);
    };
  };
}

static void remove_between__to__4IT(__STRING__WH *Self__5IT,__INTEGER__K start__AJT,__INTEGER__K end__BJT)

{
  __INTEGER__K __tmp__XJT,__tmp__4JT,__tmp__AKT,Self__5VX;
  __CHARACTER__BB *__tmp__YNKC,*__tmp__ZNKC;
  __tmp__XJT=(__INTEGER__K)((__INTEGER__K)(end__BJT - start__AJT) + 1);
  if ((__tmp__XJT > 0)) {
    __tmp__4JT=(__INTEGER__K)(end__BJT + 1);
    __tmp__AKT=Self__5IT->count__FK;
    Self__5VX=__tmp__4JT;
    __tmp__YNKC=Self__5IT->storage__VSS;
    __tmp__ZNKC=Self__5IT->storage__VSS;
    while ((Self__5VX <= __tmp__AKT)) {
      ((__CHARACTER__BB *)__tmp__ZNKC)[(__INTEGER__K)((__INTEGER__K)(Self__5VX - __tmp__XJT) - 1)]=((__CHARACTER__BB *)__tmp__YNKC)[(__INTEGER__K)(Self__5VX - 1)];
      Self__5VX=(__INTEGER__K)(Self__5VX + 1);
    };
    Self__5IT->count__FK=(__INTEGER__K)(Self__5IT->count__FK - __tmp__XJT);
  };
}

static __INTEGER__K last_index_of__since__PGT(__STRING__WH *Self__QGT,__INTEGER__K start_index__SGT)

{
  __INTEGER__K result__UGT,Result__TGT;
  __CHARACTER__BB *__tmp__5NKC;
  result__UGT=start_index__SGT;
  __tmp__5NKC=Self__QGT->storage__VSS;
  while ((! ((result__UGT < 1) || ('/' == ((__CHARACTER__BB *)__tmp__5NKC)[(__INTEGER__K)(result__UGT - 1)])))) {
    result__UGT=(__INTEGER__K)(result__UGT - 1);
  };
  Result__TGT=result__UGT;
  return(Result__TGT);
}

static __BOOLEAN__C is_letter__Z3P(__CHARACTER__BB Self__03P)

{
  __BOOLEAN__C result__23P,__tmp__G4P,Result__13P;
  result__23P=0;
  if ((((__UINTEGER_8__CD )Self__03P) >= ((__UINTEGER_8__CD )'a'))) {
    result__23P=(((__UINTEGER_8__CD )Self__03P) <= ((__UINTEGER_8__CD )'z'));
    __tmp__G4P=1;
  } else {
    __tmp__G4P=0;
  };
  if ((! __tmp__G4P)) {
    if ((((__UINTEGER_8__CD )Self__03P) >= ((__UINTEGER_8__CD )'A'))) {
      result__23P=(((__UINTEGER_8__CD )Self__03P) <= ((__UINTEGER_8__CD )'Z'));
    };
  };
  Result__13P=result__23P;
  return(Result__13P);
}

static void remove_last__JFT(__STRING__WH *Self__KFT,__INTEGER__K n__LFT)

{
  if ((n__LFT > Self__KFT->count__FK)) {
    Self__KFT->count__FK= 0;
  } else {
    Self__KFT->count__FK=(__INTEGER__K)(Self__KFT->count__FK - n__LFT);
  };
}

static __INTEGER__K hash_code__DPT(__STRING__WH *Self__EPT)

{
  __INTEGER__K result__GPT,__tmp__HPT,Self__04U,Result__FPT;
  __CHARACTER__BB *__tmp__FOKC;
  result__GPT= 0;
  __tmp__HPT=Self__EPT->count__FK;
  Self__04U= 1;
  __tmp__FOKC=Self__EPT->storage__VSS;
  while ((Self__04U <= __tmp__HPT)) {
    result__GPT=(__INTEGER__K)((__INTEGER__K)( 5 * result__GPT) + ((__INTEGER__K )((__UINTEGER_8__CD )((__CHARACTER__BB *)__tmp__FOKC)[(__INTEGER__K)(Self__04U - 1)])));
    Self__04U=(__INTEGER__K)(Self__04U + 1);
  };
  if ((result__GPT < 0)) {
    result__GPT=(__INTEGER__K)(~ result__GPT);
  };
  Result__FPT=result__GPT;
  return(Result__FPT);
}

static __CHARACTER__BB* to_external__L4S(__STRING__WH *Self__M4S)

{
  __CHARACTER__BB *Result__N4S;
  if ((Self__M4S->capacity__KSS > Self__M4S->count__FK)) {
    ((__CHARACTER__BB *)Self__M4S->storage__VSS)[Self__M4S->count__FK]='\0';
  } else {
    add_last__KTS(Self__M4S,'\0');
    Self__M4S->count__FK=(__INTEGER__K)(Self__M4S->count__FK - 1);
  };
  Result__N4S=Self__M4S->storage__VSS;
  return(Result__N4S);
}

static __FILE_UNIX__OQB* clone__KVC()

{
  __FILE_UNIX__OQB *result__NVC,*__tmp__WWC,*Result__MVC;
  __POINTER__GB ptr__OVC,__tmp__RTMC;
  __UINTEGER_CPU__3AB __tmp__WVC,__tmp__NTMC,__tmp__PTMC;
  __INTEGER__K __tmp__BWC;
  __UINTEGER_32__U t__YTMC;
  result__NVC=((void *)0);
  ptr__OVC=((__POINTER__GB )(((void *)0)));
  __tmp__WVC=((__UINTEGER_CPU__3AB )sizeof(__FILE_UNIX__OQB));
  if ((__tmp__WVC == 0)) {
    result__NVC=(&FILE_UNIX__OQB_);
  } else {
    __tmp__BWC=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__WVC));
    if ((__tmp__BWC == (__INTEGER__K)(- 1))) {
      __tmp__NTMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__PTMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__WVC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NTMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NTMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__NTMC=(__UINTEGER_CPU__3AB)(__tmp__PTMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__RTMC=micro_alloc__table__lab__KSE(__tmp__PTMC,((__POINTER__GB )(&(table_size[(__tmp__NTMC)-1]))),((__UINTEGER_32__U )__tmp__PTMC));
      ptr__OVC=__tmp__RTMC;
    } else {
      t__YTMC=((__UINTEGER_32__U )__tmp__BWC);
      __tmp__NTMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__PTMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__WVC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NTMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NTMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__RTMC=micro_alloc__table__lab__KSE(__tmp__PTMC,((__POINTER__GB )(&(table_type[(t__YTMC)]))),(__UINTEGER_32__U)(t__YTMC | 1));
      ptr__OVC=__tmp__RTMC;
    };
    __tmp__WWC=((__FILE_UNIX__OQB *)ptr__OVC);
    result__NVC=__tmp__WWC;
    *(__tmp__WWC) = *((&FILE_UNIX__OQB_));
  };
  Result__MVC=result__NVC;
  return(Result__MVC);
}

static __DIRECTORY_UNIX__GHB* clone__BXC()

{
  __DIRECTORY_UNIX__GHB *result__EXC,*__tmp__NYC,*Result__DXC;
  __POINTER__GB ptr__FXC,__tmp__CUMC;
  __UINTEGER_CPU__3AB __tmp__NXC,__tmp__4TMC,__tmp__AUMC;
  __INTEGER__K __tmp__YXC;
  __UINTEGER_32__U t__JUMC;
  result__EXC=((void *)0);
  ptr__FXC=((__POINTER__GB )(((void *)0)));
  __tmp__NXC=((__UINTEGER_CPU__3AB )sizeof(__DIRECTORY_UNIX__GHB));
  if ((__tmp__NXC == 0)) {
    result__EXC=(&DIRECTORY_UNIX__GHB_);
  } else {
    __tmp__YXC=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__NXC));
    if ((__tmp__YXC == (__INTEGER__K)(- 1))) {
      __tmp__4TMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__AUMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__NXC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__4TMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__4TMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__4TMC=(__UINTEGER_CPU__3AB)(__tmp__AUMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__CUMC=micro_alloc__table__lab__KSE(__tmp__AUMC,((__POINTER__GB )(&(table_size[(__tmp__4TMC)-1]))),((__UINTEGER_32__U )__tmp__AUMC));
      ptr__FXC=__tmp__CUMC;
    } else {
      t__JUMC=((__UINTEGER_32__U )__tmp__YXC);
      __tmp__4TMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__AUMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__NXC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__4TMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__4TMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__CUMC=micro_alloc__table__lab__KSE(__tmp__AUMC,((__POINTER__GB )(&(table_type[(t__JUMC)]))),(__UINTEGER_32__U)(t__JUMC | 1));
      ptr__FXC=__tmp__CUMC;
    };
    __tmp__NYC=((__DIRECTORY_UNIX__GHB *)ptr__FXC);
    result__EXC=__tmp__NYC;
    *(__tmp__NYC) = *((&DIRECTORY_UNIX__GHB_));
  };
  Result__DXC=result__EXC;
  return(Result__DXC);
}

static void set_path__UEG(__DIRECTORY_UNIX__GHB *Self__VEG,__STRING__WH *n__WEG)

{
  __STRING_CONSTANT__Y *__tmp__YEG,*__tmp__BFG;
  __INTEGER__K __tmp__VOKC,__tmp__0EG;
  __CHARACTER__BB *__tmp__HFG;
  __tmp__YEG=create_copy__KXD(n__WEG);
  Self__VEG->parent_entry_unix__JHB.path__YG=__tmp__YEG;
  __tmp__YEG=((__STRING_CONSTANT__Y *)Self__VEG->parent_entry_unix__JHB.path__YG);
  __tmp__VOKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__YEG->storage__MC),(__INTEGER__K)(__tmp__YEG->count__LC - 1));
  __tmp__0EG=(__INTEGER__K)( 1 + __tmp__VOKC);
  if (((void *)Self__VEG->parent_entry_unix__JHB.name__NOD == (void *)((void *)0))) {
    __tmp__BFG=clone__T2N();
    Self__VEG->parent_entry_unix__JHB.name__NOD=__tmp__BFG;
  };
  __tmp__YEG=Self__VEG->parent_entry_unix__JHB.name__NOD;
  __tmp__HFG=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__VEG->parent_entry_unix__JHB.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__0EG)))));
  __tmp__VOKC=(__INTEGER__K)(Self__VEG->parent_entry_unix__JHB.path__YG->count__LC - __tmp__0EG);
  __tmp__BFG=((__STRING_CONSTANT__Y *)__tmp__YEG);
  __tmp__BFG->storage__MC=__tmp__HFG;
  __tmp__BFG->count__LC=__tmp__VOKC;
}

static void set_path__OFG(__FILE_UNIX__OQB *Self__PFG,__STRING__WH *n__QFG)

{
  __STRING_CONSTANT__Y *__tmp__SFG,*__tmp__1FG;
  __INTEGER__K __tmp__YOKC,__tmp__UFG;
  __CHARACTER__BB *__tmp__BGG;
  __tmp__SFG=create_copy__KXD(n__QFG);
  Self__PFG->parent_entry_unix__PQB.path__YG=__tmp__SFG;
  __tmp__SFG=((__STRING_CONSTANT__Y *)Self__PFG->parent_entry_unix__PQB.path__YG);
  __tmp__YOKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__SFG->storage__MC),(__INTEGER__K)(__tmp__SFG->count__LC - 1));
  __tmp__UFG=(__INTEGER__K)( 1 + __tmp__YOKC);
  if (((void *)Self__PFG->parent_entry_unix__PQB.name__NOD == (void *)((void *)0))) {
    __tmp__1FG=clone__T2N();
    Self__PFG->parent_entry_unix__PQB.name__NOD=__tmp__1FG;
  };
  __tmp__SFG=Self__PFG->parent_entry_unix__PQB.name__NOD;
  __tmp__BGG=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__PFG->parent_entry_unix__PQB.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__UFG)))));
  __tmp__YOKC=(__INTEGER__K)(Self__PFG->parent_entry_unix__PQB.path__YG->count__LC - __tmp__UFG);
  __tmp__1FG=((__STRING_CONSTANT__Y *)__tmp__SFG);
  __tmp__1FG->storage__MC=__tmp__BGG;
  __tmp__1FG->count__LC=__tmp__YOKC;
}

static void put__to__LGG(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__MGG,void *v__NGG,__STRING_CONSTANT__Y *k__OGG)

{
  __INTEGER__K __tmp__YGG,__tmp__0GG,idx__WGG;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__XGG;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__GIG;
  __BOOLEAN__C __tmp__KHG,__tmp__HHG;
  __tmp__YGG=hash_code__BQT(((__STRING_CONSTANT__Y *)k__OGG));
  __tmp__0GG=(__INTEGER__K)(__tmp__YGG % Self__MGG->capacity__W3F);
  idx__WGG=__tmp__0GG;
  node__XGG=((void **)Self__MGG->buckets__43F)[__tmp__0GG];
  until_do__OMH:
  {
    if (((void *)node__XGG == (void *)((void *)0))) {
      __tmp__KHG=1;
    } else {
      __tmp__HHG=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__XGG->key__K4F),k__OGG);
      __tmp__KHG=__tmp__HHG;
    };
    if ((! __tmp__KHG)) {
      node__XGG=node__XGG->next__W4F;
      goto until_do__OMH;
    };
  };
  if (((void *)node__XGG == (void *)((void *)0))) {
    if ((Self__MGG->capacity__W3F == Self__MGG->count__3BG)) {
      increase_capacity__PXL(Self__MGG);
      idx__WGG=(__INTEGER__K)(__tmp__YGG % Self__MGG->capacity__W3F);
    };
    __tmp__GIG=new_node__to__next__UIJ(v__NGG,k__OGG,((void **)Self__MGG->buckets__43F)[idx__WGG]);
    node__XGG=__tmp__GIG;
    ((void **)Self__MGG->buckets__43F)[idx__WGG]=__tmp__GIG;
    Self__MGG->count__3BG=(__INTEGER__K)(Self__MGG->count__3BG + 1);
  } else {
    ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node__XGG)->item__44F=v__NGG;
  };
}

static void reduce_path__IUEB(__STRING__WH *st__KUEB)

{
  __INTEGER__K stat__MUEB,i__LUEB,Self__NCMB,__tmp__AWEB;
  __CHARACTER__BB __tmp__1UEB;
  __BOOLEAN__C __tmp__UWEB,__tmp__EHLB,__tmp__NYEB,__tmp__0YEB;
  stat__MUEB= 0;
  replace_all__with__DXS(((__STRING__WH *)st__KUEB));
  i__LUEB= 1;
  while ((i__LUEB <= ((__STRING__WH *)st__KUEB)->count__FK)) {
    __tmp__1UEB=((__CHARACTER__BB *)((__STRING__WH *)st__KUEB)->storage__VSS)[(__INTEGER__K)(i__LUEB - 1)];
    if ((__tmp__1UEB == '/')) {
      Self__NCMB=stat__MUEB;
      if ((stat__MUEB == 0)) {
        stat__MUEB= 1;
      };
      if ((Self__NCMB == 1)) {
        remove_first__20T(((__STRING__WH *)st__KUEB),(__INTEGER__K)(i__LUEB - 1));
        i__LUEB= 1;
      };
      if ((Self__NCMB == 2)) {
        remove_between__to__4IT(((__STRING__WH *)st__KUEB),(__INTEGER__K)(i__LUEB - 1),i__LUEB);
        i__LUEB=(__INTEGER__K)(i__LUEB - 2);
        stat__MUEB= 1;
      };
      if ((Self__NCMB == 3)) {
        __tmp__AWEB=last_index_of__since__PGT(((__STRING__WH *)st__KUEB),(__INTEGER__K)(i__LUEB - 4));
        if ((__tmp__AWEB == 0)) {
          remove_first__20T(((__STRING__WH *)st__KUEB),(__INTEGER__K)(i__LUEB - 1));
          i__LUEB= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)st__KUEB),__tmp__AWEB,(__INTEGER__K)(i__LUEB - 1));
          i__LUEB=__tmp__AWEB;
        };
        stat__MUEB= 1;
      };
      __tmp__UWEB=1;
    } else {
      __tmp__UWEB=0;
    };
    if (__tmp__UWEB) {
      __tmp__UWEB=1;
    } else {
      __tmp__EHLB=(__tmp__1UEB == '.');
      if (__tmp__EHLB) {
        __tmp__AWEB=stat__MUEB;
        if ((stat__MUEB == 1)) {
          stat__MUEB= 2;
        };
        if ((__tmp__AWEB == 2)) {
          stat__MUEB= 3;
        };
        if ((__tmp__AWEB == 3)) {
          stat__MUEB= 0;
        };
      };
      __tmp__UWEB=__tmp__EHLB;
    };
    if ((! __tmp__UWEB)) {
      if (((__tmp__1UEB == ':') && (i__LUEB > 2))) {
        __tmp__NYEB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)st__KUEB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__LUEB - 1) - 1)]);
        __tmp__0YEB=__tmp__NYEB;
      } else {
        __tmp__0YEB=0;
      };
      if ((__tmp__0YEB && (((__CHARACTER__BB *)((__STRING__WH *)st__KUEB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__LUEB - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)st__KUEB),(__INTEGER__K)(i__LUEB - 2));
        i__LUEB= 1;
      } else {
        stat__MUEB= 0;
      };
    };
    i__LUEB=(__INTEGER__K)(i__LUEB + 1);
  };
  if ((stat__MUEB == 1)) {
    remove_last__JFT(((__STRING__WH *)st__KUEB), 1);
  };
  if ((stat__MUEB == 2)) {
    remove_last__JFT(((__STRING__WH *)st__KUEB), 2);
  };
  if ((stat__MUEB == 3)) {
    Self__NCMB=last_index_of__since__PGT(((__STRING__WH *)st__KUEB),(__INTEGER__K)(i__LUEB - 4));
    if ((Self__NCMB == 0)) {
      ((__STRING__WH *)st__KUEB)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)st__KUEB),Self__NCMB,(__INTEGER__K)(i__LUEB - 1));
    };
  };
  if ((((__STRING__WH *)st__KUEB)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)st__KUEB),'/');
  };
}

static void reduce_path__03WB(__STRING__WH *st__23WB)

{
  __INTEGER__K stat__43WB,i__33WB,Self__HG4B,__tmp__S5WB;
  __CHARACTER__BB __tmp__N4WB;
  __BOOLEAN__C __tmp__GAXB,__tmp__KI3B,__tmp__5BXB,__tmp__MCXB;
  stat__43WB= 0;
  replace_all__with__DXS(((__STRING__WH *)st__23WB));
  i__33WB= 1;
  while ((i__33WB <= ((__STRING__WH *)st__23WB)->count__FK)) {
    __tmp__N4WB=((__CHARACTER__BB *)((__STRING__WH *)st__23WB)->storage__VSS)[(__INTEGER__K)(i__33WB - 1)];
    if ((__tmp__N4WB == '/')) {
      Self__HG4B=stat__43WB;
      if ((stat__43WB == 0)) {
        stat__43WB= 1;
      };
      if ((Self__HG4B == 1)) {
        remove_first__20T(((__STRING__WH *)st__23WB),(__INTEGER__K)(i__33WB - 1));
        i__33WB= 1;
      };
      if ((Self__HG4B == 2)) {
        remove_between__to__4IT(((__STRING__WH *)st__23WB),(__INTEGER__K)(i__33WB - 1),i__33WB);
        i__33WB=(__INTEGER__K)(i__33WB - 2);
        stat__43WB= 1;
      };
      if ((Self__HG4B == 3)) {
        __tmp__S5WB=last_index_of__since__PGT(((__STRING__WH *)st__23WB),(__INTEGER__K)(i__33WB - 4));
        if ((__tmp__S5WB == 0)) {
          remove_first__20T(((__STRING__WH *)st__23WB),(__INTEGER__K)(i__33WB - 1));
          i__33WB= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)st__23WB),__tmp__S5WB,(__INTEGER__K)(i__33WB - 1));
          i__33WB=__tmp__S5WB;
        };
        stat__43WB= 1;
      };
      __tmp__GAXB=1;
    } else {
      __tmp__GAXB=0;
    };
    if (__tmp__GAXB) {
      __tmp__GAXB=1;
    } else {
      __tmp__KI3B=(__tmp__N4WB == '.');
      if (__tmp__KI3B) {
        __tmp__S5WB=stat__43WB;
        if ((stat__43WB == 1)) {
          stat__43WB= 2;
        };
        if ((__tmp__S5WB == 2)) {
          stat__43WB= 3;
        };
        if ((__tmp__S5WB == 3)) {
          stat__43WB= 0;
        };
      };
      __tmp__GAXB=__tmp__KI3B;
    };
    if ((! __tmp__GAXB)) {
      if (((__tmp__N4WB == ':') && (i__33WB > 2))) {
        __tmp__5BXB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)st__23WB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__33WB - 1) - 1)]);
        __tmp__MCXB=__tmp__5BXB;
      } else {
        __tmp__MCXB=0;
      };
      if ((__tmp__MCXB && (((__CHARACTER__BB *)((__STRING__WH *)st__23WB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__33WB - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)st__23WB),(__INTEGER__K)(i__33WB - 2));
        i__33WB= 1;
      } else {
        stat__43WB= 0;
      };
    };
    i__33WB=(__INTEGER__K)(i__33WB + 1);
  };
  if ((stat__43WB == 1)) {
    remove_last__JFT(((__STRING__WH *)st__23WB), 1);
  };
  if ((stat__43WB == 2)) {
    remove_last__JFT(((__STRING__WH *)st__23WB), 2);
  };
  if ((stat__43WB == 3)) {
    Self__HG4B=last_index_of__since__PGT(((__STRING__WH *)st__23WB),(__INTEGER__K)(i__33WB - 4));
    if ((Self__HG4B == 0)) {
      ((__STRING__WH *)st__23WB)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)st__23WB),Self__HG4B,(__INTEGER__K)(i__33WB - 1));
    };
  };
  if ((((__STRING__WH *)st__23WB)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)st__23WB),'/');
  };
}

static void reduce_path__NBSB(__STRING__WH *st__PBSB)

{
  __INTEGER__K stat__RBSB,i__QBSB,Self__AH0B,__tmp__FDSB;
  __CHARACTER__BB __tmp__ACSB;
  __BOOLEAN__C __tmp__ZDSB,__tmp__2AZB,__tmp__SFSB,__tmp__5FSB;
  stat__RBSB= 0;
  replace_all__with__DXS(((__STRING__WH *)st__PBSB));
  i__QBSB= 1;
  while ((i__QBSB <= ((__STRING__WH *)st__PBSB)->count__FK)) {
    __tmp__ACSB=((__CHARACTER__BB *)((__STRING__WH *)st__PBSB)->storage__VSS)[(__INTEGER__K)(i__QBSB - 1)];
    if ((__tmp__ACSB == '/')) {
      Self__AH0B=stat__RBSB;
      if ((stat__RBSB == 0)) {
        stat__RBSB= 1;
      };
      if ((Self__AH0B == 1)) {
        remove_first__20T(((__STRING__WH *)st__PBSB),(__INTEGER__K)(i__QBSB - 1));
        i__QBSB= 1;
      };
      if ((Self__AH0B == 2)) {
        remove_between__to__4IT(((__STRING__WH *)st__PBSB),(__INTEGER__K)(i__QBSB - 1),i__QBSB);
        i__QBSB=(__INTEGER__K)(i__QBSB - 2);
        stat__RBSB= 1;
      };
      if ((Self__AH0B == 3)) {
        __tmp__FDSB=last_index_of__since__PGT(((__STRING__WH *)st__PBSB),(__INTEGER__K)(i__QBSB - 4));
        if ((__tmp__FDSB == 0)) {
          remove_first__20T(((__STRING__WH *)st__PBSB),(__INTEGER__K)(i__QBSB - 1));
          i__QBSB= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)st__PBSB),__tmp__FDSB,(__INTEGER__K)(i__QBSB - 1));
          i__QBSB=__tmp__FDSB;
        };
        stat__RBSB= 1;
      };
      __tmp__ZDSB=1;
    } else {
      __tmp__ZDSB=0;
    };
    if (__tmp__ZDSB) {
      __tmp__ZDSB=1;
    } else {
      __tmp__2AZB=(__tmp__ACSB == '.');
      if (__tmp__2AZB) {
        __tmp__FDSB=stat__RBSB;
        if ((stat__RBSB == 1)) {
          stat__RBSB= 2;
        };
        if ((__tmp__FDSB == 2)) {
          stat__RBSB= 3;
        };
        if ((__tmp__FDSB == 3)) {
          stat__RBSB= 0;
        };
      };
      __tmp__ZDSB=__tmp__2AZB;
    };
    if ((! __tmp__ZDSB)) {
      if (((__tmp__ACSB == ':') && (i__QBSB > 2))) {
        __tmp__SFSB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)st__PBSB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__QBSB - 1) - 1)]);
        __tmp__5FSB=__tmp__SFSB;
      } else {
        __tmp__5FSB=0;
      };
      if ((__tmp__5FSB && (((__CHARACTER__BB *)((__STRING__WH *)st__PBSB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__QBSB - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)st__PBSB),(__INTEGER__K)(i__QBSB - 2));
        i__QBSB= 1;
      } else {
        stat__RBSB= 0;
      };
    };
    i__QBSB=(__INTEGER__K)(i__QBSB + 1);
  };
  if ((stat__RBSB == 1)) {
    remove_last__JFT(((__STRING__WH *)st__PBSB), 1);
  };
  if ((stat__RBSB == 2)) {
    remove_last__JFT(((__STRING__WH *)st__PBSB), 2);
  };
  if ((stat__RBSB == 3)) {
    Self__AH0B=last_index_of__since__PGT(((__STRING__WH *)st__PBSB),(__INTEGER__K)(i__QBSB - 4));
    if ((Self__AH0B == 0)) {
      ((__STRING__WH *)st__PBSB)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)st__PBSB),Self__AH0B,(__INTEGER__K)(i__QBSB - 1));
    };
  };
  if ((((__STRING__WH *)st__PBSB)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)st__PBSB),'/');
  };
}

static void reduce_path__LKSB(__STRING__WH *st__NKSB)

{
  __INTEGER__K stat__PKSB,i__OKSB,Self__VI0B,__tmp__DMSB;
  __CHARACTER__BB __tmp__4KSB;
  __BOOLEAN__C __tmp__XMSB,__tmp__LCZB,__tmp__QOSB,__tmp__3OSB;
  stat__PKSB= 0;
  replace_all__with__DXS(((__STRING__WH *)st__NKSB));
  i__OKSB= 1;
  while ((i__OKSB <= ((__STRING__WH *)st__NKSB)->count__FK)) {
    __tmp__4KSB=((__CHARACTER__BB *)((__STRING__WH *)st__NKSB)->storage__VSS)[(__INTEGER__K)(i__OKSB - 1)];
    if ((__tmp__4KSB == '/')) {
      Self__VI0B=stat__PKSB;
      if ((stat__PKSB == 0)) {
        stat__PKSB= 1;
      };
      if ((Self__VI0B == 1)) {
        remove_first__20T(((__STRING__WH *)st__NKSB),(__INTEGER__K)(i__OKSB - 1));
        i__OKSB= 1;
      };
      if ((Self__VI0B == 2)) {
        remove_between__to__4IT(((__STRING__WH *)st__NKSB),(__INTEGER__K)(i__OKSB - 1),i__OKSB);
        i__OKSB=(__INTEGER__K)(i__OKSB - 2);
        stat__PKSB= 1;
      };
      if ((Self__VI0B == 3)) {
        __tmp__DMSB=last_index_of__since__PGT(((__STRING__WH *)st__NKSB),(__INTEGER__K)(i__OKSB - 4));
        if ((__tmp__DMSB == 0)) {
          remove_first__20T(((__STRING__WH *)st__NKSB),(__INTEGER__K)(i__OKSB - 1));
          i__OKSB= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)st__NKSB),__tmp__DMSB,(__INTEGER__K)(i__OKSB - 1));
          i__OKSB=__tmp__DMSB;
        };
        stat__PKSB= 1;
      };
      __tmp__XMSB=1;
    } else {
      __tmp__XMSB=0;
    };
    if (__tmp__XMSB) {
      __tmp__XMSB=1;
    } else {
      __tmp__LCZB=(__tmp__4KSB == '.');
      if (__tmp__LCZB) {
        __tmp__DMSB=stat__PKSB;
        if ((stat__PKSB == 1)) {
          stat__PKSB= 2;
        };
        if ((__tmp__DMSB == 2)) {
          stat__PKSB= 3;
        };
        if ((__tmp__DMSB == 3)) {
          stat__PKSB= 0;
        };
      };
      __tmp__XMSB=__tmp__LCZB;
    };
    if ((! __tmp__XMSB)) {
      if (((__tmp__4KSB == ':') && (i__OKSB > 2))) {
        __tmp__QOSB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)st__NKSB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__OKSB - 1) - 1)]);
        __tmp__3OSB=__tmp__QOSB;
      } else {
        __tmp__3OSB=0;
      };
      if ((__tmp__3OSB && (((__CHARACTER__BB *)((__STRING__WH *)st__NKSB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__OKSB - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)st__NKSB),(__INTEGER__K)(i__OKSB - 2));
        i__OKSB= 1;
      } else {
        stat__PKSB= 0;
      };
    };
    i__OKSB=(__INTEGER__K)(i__OKSB + 1);
  };
  if ((stat__PKSB == 1)) {
    remove_last__JFT(((__STRING__WH *)st__NKSB), 1);
  };
  if ((stat__PKSB == 2)) {
    remove_last__JFT(((__STRING__WH *)st__NKSB), 2);
  };
  if ((stat__PKSB == 3)) {
    Self__VI0B=last_index_of__since__PGT(((__STRING__WH *)st__NKSB),(__INTEGER__K)(i__OKSB - 4));
    if ((Self__VI0B == 0)) {
      ((__STRING__WH *)st__NKSB)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)st__NKSB),Self__VI0B,(__INTEGER__K)(i__OKSB - 1));
    };
  };
  if ((((__STRING__WH *)st__NKSB)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)st__NKSB),'/');
  };
}

static void copy__to__size__O20(__POINTER__GB src__Q20,__POINTER__GB dst__R20,__UINTEGER_CPU__3AB sz__S20)

{
  __INTEGER__K __tmp__W20,__tmp__F30;
  __POINTER__GB *na_src__T20,*na_dst__U20;
  __tmp__W20=((__INTEGER__K )sz__S20);
  __tmp__F30=(__INTEGER__K)(__tmp__W20 / ((__INTEGER__K )(sizeof(void *))));
  na_src__T20=((__POINTER__GB *)src__Q20);
  na_dst__U20=((__POINTER__GB *)dst__R20);
  __tmp__W20=(__INTEGER__K)(__tmp__F30 - 1);
  while ((__tmp__W20 >= 0)) {
    na_dst__U20[__tmp__W20]=na_src__T20[__tmp__W20];
    __tmp__W20=(__INTEGER__K)(__tmp__W20 - 1);
  };
}

static void to_busy__index__IIO(__MEMORY__0AB *Self__JIO,__POINTER__GB sz__KIO,__UINTEGER_CPU__3AB idx__LIO)

{
  __UINTEGER_CPU__3AB siz__MIO,__tmp__LJO;
  __MEMORY__0AB *__tmp__DKO;
  delete_link_free__VDP(Self__JIO);
  siz__MIO=Self__JIO->size_and_id__5AB;
  __tmp__LJO=(__UINTEGER_CPU__3AB)(siz__MIO - ((__UINTEGER_CPU__3AB )sz__KIO));
  if ((__tmp__LJO > (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )(256)) - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))))) - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))))))) {
    siz__MIO=((__UINTEGER_CPU__3AB )sz__KIO);
    __tmp__DKO=((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )Self__JIO) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)sz__KIO)));
    __tmp__DKO->previous_linear__2AB=Self__JIO;
    __tmp__DKO->size_and_id__5AB=(__UINTEGER_CPU__3AB)(__tmp__LJO - ((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))));
    add_link_free__OMO(__tmp__DKO);
    if (((__UINTEGER_CPU__3AB)(__tmp__DKO->size_and_id__5AB & ((__UINTEGER_CPU__3AB ) 2)) != 0)) {
      last_block[(idx__LIO)] = (__tmp__DKO);
    } else {
      ((__MEMORY__0AB *)(void *)((unsigned long)(void *)((unsigned long)((__POINTER__GB )__tmp__DKO) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )(__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long)))))))) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )(__UINTEGER_CPU__3AB)(__tmp__DKO->size_and_id__5AB & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 3)) - ((__UINTEGER_CPU__3AB ) 1)))))))->previous_linear__2AB=__tmp__DKO;
    };
  };
  Self__JIO->size_and_id__5AB=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - siz__MIO) - ((__UINTEGER_CPU__3AB ) 1)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 1)) - ((__UINTEGER_CPU__3AB ) 1)))) - ((__UINTEGER_CPU__3AB ) 1));
  ;
}

static void add_link_free__OMO(__MEMORY__0AB *Self__PMO)

{
  Self__PMO->next_free__ABB=first_free__USI;
  Self__PMO->previous_free__BBB=((void *)0);
  if (((void *)first_free__USI != (void *)((void *)0))) {
    ((__MEMORY__0AB *)first_free__USI)->previous_free__BBB=Self__PMO;
  };
  first_free__USI=Self__PMO;
}

static void delete_link_free__VDP(__MEMORY__0AB *Self__WDP)

{
  __MEMORY__0AB *prev__XDP,*next__YDP;
  prev__XDP=Self__WDP->previous_free__BBB;
  next__YDP=Self__WDP->next_free__ABB;
  if (((void *)prev__XDP == (void *)((void *)0))) {
    first_free__USI=next__YDP;
  } else {
    ((__MEMORY__0AB *)prev__XDP)->next_free__ABB=next__YDP;
  };
  if (((void *)next__YDP != (void *)((void *)0))) {
    ((__MEMORY__0AB *)next__YDP)->previous_free__BBB=prev__XDP;
  };
}

static void read__0QJB(__FAT12__UFE *Self__1QJB)

{
  __DRIVE__HPD *__tmp__2QJB;
  __UINTEGER_32__U result__YZJB;
  __tmp__2QJB=Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
  result__YZJB= 0;
  if ((Self__1QJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB >= Self__1QJB->parent_fat__5FE.root_block__ANCB)) {
    result__YZJB=(__UINTEGER_32__U)(Self__1QJB->parent_fat__5FE.root_offset__2MCB + (__UINTEGER_32__U)((__UINTEGER_32__U)(Self__1QJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB - Self__1QJB->parent_fat__5FE.root_block__ANCB) * Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
  } else {
    result__YZJB=(__UINTEGER_32__U)(Self__1QJB->parent_fat__5FE.block_offset__MNCB + (__UINTEGER_32__U)(Self__1QJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB * Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
  };
  if (((struct ___OBJ *)__tmp__2QJB->parent_controler__IPD)->__id==17) {
    ((__DRIVE__HPD *)__tmp__2QJB)->cursor__R0G=result__YZJB;
  } else {
    ((__DRIVE__HPD *)__tmp__2QJB)->cursor__R0G=result__YZJB;
  };
  (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).upper__4KT=(__INTEGER__K)(- 1);
  read__size__S0G(((__DRIVE__HPD *)Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB,((__INTEGER__K )Self__1QJB->parent_fat__5FE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
}

static __BOOLEAN__C next_cluster__FRJB(__FAT12__UFE *Self__GRJB)

{
  __UINTEGER_32__U __tmp__ASJB;
  __BOOLEAN__C Result__HRJB;
  if ((Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB >= Self__GRJB->parent_fat__5FE.root_block__ANCB)) {
    Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=(__UINTEGER_32__U)(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB + 1);
  } else {
    __tmp__ASJB=(__UINTEGER_32__U)(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB + (__UINTEGER_32__U)(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB >> 1));
    if (((__UINTEGER_32__U)(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB & 1) == 1)) {
      Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=((__UINTEGER_32__U )(__UINTEGER_8__CD)(((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__GRJB->parent_fat__5FE.fat_cache__MMCB))).storage__1MT)[((__INTEGER__K )__tmp__ASJB)] >> 4));
      Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=(__UINTEGER_32__U)(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB | (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__GRJB->parent_fat__5FE.fat_cache__MMCB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(__tmp__ASJB + 1))]) << 4));
    } else {
      Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__GRJB->parent_fat__5FE.fat_cache__MMCB))).storage__1MT)[((__INTEGER__K )__tmp__ASJB)]);
      Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB=(__UINTEGER_32__U)(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB | (__UINTEGER_32__U)(((__UINTEGER_32__U )(__UINTEGER_8__CD)(((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__GRJB->parent_fat__5FE.fat_cache__MMCB))).storage__1MT)[((__INTEGER__K )(__UINTEGER_32__U)(__tmp__ASJB + 1))] & 15)) << 8));
    };
  };
  Result__HRJB=(Self__GRJB->parent_fat__5FE.parent_partition__4FE.cluster__GOJB != 4088);
  return(Result__HRJB);
}

static void name_in__PSEB(__SFN_FAT__BVBB *Self__QSEB,__STRING__WH *result__RSEB)

{
  __INTEGER__K Self__5RGB,index__BIIB;
  __STRING__WH *Self__3SGB,*Self__AIIB;
  __CHARACTER__BB *name_raw__SSEB,*__tmp__2VKC;
  __CHARACTER__BB __tmp__1SEB,result__BDJB;
  name_raw__SSEB=((__CHARACTER__BB *)Self__QSEB);
  Self__5RGB= 0;
  while ((Self__5RGB <= 7)) {
    __tmp__1SEB=name_raw__SSEB[Self__5RGB];
    if ((((__UINTEGER_8__CD )__tmp__1SEB) > ((__UINTEGER_8__CD )' '))) {
      add_last__KTS(((__STRING__WH *)result__RSEB),__tmp__1SEB);
    };
    Self__5RGB=(__INTEGER__K)(Self__5RGB + 1);
  };
  add_last__KTS(((__STRING__WH *)result__RSEB),'.');
  Self__5RGB= 8;
  while ((Self__5RGB <= 10)) {
    __tmp__1SEB=name_raw__SSEB[Self__5RGB];
    if ((((__UINTEGER_8__CD )__tmp__1SEB) > ((__UINTEGER_8__CD )' '))) {
      add_last__KTS(((__STRING__WH *)result__RSEB),__tmp__1SEB);
    };
    Self__5RGB=(__INTEGER__K)(Self__5RGB + 1);
  };
  Self__3SGB=((__STRING__WH *)result__RSEB);
  if ((((__CHARACTER__BB *)Self__3SGB->storage__VSS)[(__INTEGER__K)(Self__3SGB->count__FK - 1)] == '.')) {
    Self__AIIB=((__STRING__WH *)result__RSEB);
    index__BIIB=result__RSEB->count__FK;
    remove_between__to__4IT(Self__AIIB,index__BIIB,index__BIIB);
  };
  Self__3SGB=((__STRING__WH *)result__RSEB);
  Self__5RGB=Self__3SGB->count__FK;
  name_raw__SSEB=Self__3SGB->storage__VSS;
  __tmp__2VKC=Self__3SGB->storage__VSS;
  while ((Self__5RGB >= 1)) {
    __tmp__1SEB=((__CHARACTER__BB *)name_raw__SSEB)[(__INTEGER__K)(Self__5RGB - 1)];
    result__BDJB='\0';
    if (((((__UINTEGER_8__CD )__tmp__1SEB) < 65) || (((__UINTEGER_8__CD )__tmp__1SEB) > 90))) {
      result__BDJB=__tmp__1SEB;
    } else {
      result__BDJB=((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )__tmp__1SEB) + 32));
    };
    ((__CHARACTER__BB *)__tmp__2VKC)[(__INTEGER__K)(Self__5RGB - 1)]=result__BDJB;
    Self__5RGB=(__INTEGER__K)(Self__5RGB - 1);
  };
}

static __BOOLEAN__C has__R1LB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__S1LB,__STRING__WH *k__T1LB)

{
  __INTEGER__K __tmp__31LB;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__21LB;
  __BOOLEAN__C __tmp__P2LB,__tmp__M2LB,Result__U1LB;
  __tmp__31LB=hash_code__DPT(((__STRING__WH *)k__T1LB));
  node__21LB=((void **)Self__S1LB->buckets__43F)[(__INTEGER__K)(__tmp__31LB % Self__S1LB->capacity__W3F)];
  until_do__XGMB:
  {
    if (((void *)node__21LB == (void *)((void *)0))) {
      __tmp__P2LB=1;
    } else {
      __tmp__M2LB=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__21LB->key__K4F),k__T1LB);
      __tmp__P2LB=__tmp__M2LB;
    };
    if ((! __tmp__P2LB)) {
      node__21LB=node__21LB->next__W4F;
      goto until_do__XGMB;
    };
  };
  Result__U1LB=((void *)node__21LB != (void *)((void *)0));
  return(Result__U1LB);
}

static void append_in__CPNB(__INTEGER__K Self__DPNB,__STRING__WH *buffer__EPNB)

{
  __INTEGER_32__Q __tmp__FPNB,val__KBOB;
  __INTEGER__K i__NBOB,j__OBOB;
  __STRING__WH *Self__NDMC;
  __CHARACTER__BB __tmp__PDMC;
  __tmp__FPNB=((__INTEGER_32__Q )Self__DPNB);
  val__KBOB= 0;
  i__NBOB= 0;
  j__OBOB= 0;
  if ((__tmp__FPNB == 0)) {
    add_last__KTS(((__STRING__WH *)buffer__EPNB),'0');
  } else {
    if ((__tmp__FPNB > 0)) {
      val__KBOB=__tmp__FPNB;
    } else {
      val__KBOB=(__INTEGER_32__Q)(- __tmp__FPNB);
      add_last__KTS(((__STRING__WH *)buffer__EPNB),'-');
    };
    i__NBOB=(__INTEGER__K)(((__STRING__WH *)buffer__EPNB)->count__FK + 1);
    while ((val__KBOB != 0)) {
      add_last__KTS(((__STRING__WH *)buffer__EPNB),((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__INTEGER_32__Q)(val__KBOB % 10)) + ((__UINTEGER_8__CD )'0'))));
      val__KBOB=(__INTEGER_32__Q)(val__KBOB / 10);
    };
    j__OBOB=((__STRING__WH *)buffer__EPNB)->count__FK;
    while ((i__NBOB < j__OBOB)) {
      Self__NDMC=((__STRING__WH *)buffer__EPNB);
      __tmp__PDMC=((__CHARACTER__BB *)Self__NDMC->storage__VSS)[(__INTEGER__K)(i__NBOB - 1)];
      ((__CHARACTER__BB *)Self__NDMC->storage__VSS)[(__INTEGER__K)(i__NBOB - 1)]=((__CHARACTER__BB *)Self__NDMC->storage__VSS)[(__INTEGER__K)(j__OBOB - 1)];
      ((__CHARACTER__BB *)Self__NDMC->storage__VSS)[(__INTEGER__K)(j__OBOB - 1)]=__tmp__PDMC;
      j__OBOB=(__INTEGER__K)(j__OBOB - 1);
      i__NBOB=(__INTEGER__K)(i__NBOB + 1);
    };
  };
}

static void set_path__I1EB(__FAT12__UFE *Self__J1EB,__STRING__WH *n__K1EB)

{
  __STRING_CONSTANT__Y *__tmp__M1EB,*__tmp__V1EB;
  __INTEGER__K __tmp__LWKC,__tmp__O1EB;
  __CHARACTER__BB *__tmp__11EB;
  __tmp__M1EB=create_copy__KXD(n__K1EB);
  Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG=__tmp__M1EB;
  __tmp__M1EB=((__STRING_CONSTANT__Y *)Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
  __tmp__LWKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__M1EB->storage__MC),(__INTEGER__K)(__tmp__M1EB->count__LC - 1));
  __tmp__O1EB=(__INTEGER__K)( 1 + __tmp__LWKC);
  if (((void *)Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD == (void *)((void *)0))) {
    __tmp__V1EB=clone__T2N();
    Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD=__tmp__V1EB;
  };
  __tmp__M1EB=Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD;
  __tmp__11EB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__O1EB)))));
  __tmp__LWKC=(__INTEGER__K)(Self__J1EB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->count__LC - __tmp__O1EB);
  __tmp__V1EB=((__STRING_CONSTANT__Y *)__tmp__M1EB);
  __tmp__V1EB->storage__MC=__tmp__11EB;
  __tmp__V1EB->count__LC=__tmp__LWKC;
}

static __BOOLEAN__C is_valid__WLKB(__SFN_FAT__BVBB *Self__XLKB)

{
  __CHARACTER__BB Self__5WN;
  __BOOLEAN__C __tmp__HMKB,Result__YLKB;
  if (((__UINTEGER_8__CD)(Self__XLKB->attr__OVBB & 8) == 0)) {
    Self__5WN=Self__XLKB->name0__DVBB;
    __tmp__HMKB=((((__UINTEGER_8__CD )Self__5WN) >= ((__UINTEGER_8__CD )'.')) && (((__UINTEGER_8__CD )Self__5WN) <= ((__UINTEGER_8__CD )'Z')));
  } else {
    __tmp__HMKB=0;
  };
  Result__YLKB=__tmp__HMKB;
  return(Result__YLKB);
}

static __DIRECTORY_FAT__XFE* create__with__2HUB(__STRING_CONSTANT__Y *parent_path__4HUB,__SFN_FAT__BVBB *e__5HUB)

{
  __DIRECTORY_FAT__XFE *result__DQUB,*__tmp__MRUB,*Result__AIUB;
  __POINTER__GB ptr__EQUB,__tmp__2UMC;
  __UINTEGER_CPU__3AB __tmp__MQUB,__tmp__YUMC,__tmp__0UMC;
  __INTEGER__K __tmp__XQUB;
  __UINTEGER_32__U t__DVMC;
  result__DQUB=((void *)0);
  ptr__EQUB=((__POINTER__GB )(((void *)0)));
  __tmp__MQUB=((__UINTEGER_CPU__3AB )sizeof(__DIRECTORY_FAT__XFE));
  if ((__tmp__MQUB == 0)) {
    result__DQUB=(&DIRECTORY_FAT__XFE_);
  } else {
    __tmp__XQUB=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__MQUB));
    if ((__tmp__XQUB == (__INTEGER__K)(- 1))) {
      __tmp__YUMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__0UMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__MQUB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YUMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YUMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__YUMC=(__UINTEGER_CPU__3AB)(__tmp__0UMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__2UMC=micro_alloc__table__lab__KSE(__tmp__0UMC,((__POINTER__GB )(&(table_size[(__tmp__YUMC)-1]))),((__UINTEGER_32__U )__tmp__0UMC));
      ptr__EQUB=__tmp__2UMC;
    } else {
      t__DVMC=((__UINTEGER_32__U )__tmp__XQUB);
      __tmp__YUMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__0UMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__MQUB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YUMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__YUMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__2UMC=micro_alloc__table__lab__KSE(__tmp__0UMC,((__POINTER__GB )(&(table_type[(t__DVMC)]))),(__UINTEGER_32__U)(t__DVMC | 1));
      ptr__EQUB=__tmp__2UMC;
    };
    __tmp__MRUB=((__DIRECTORY_FAT__XFE *)ptr__EQUB);
    result__DQUB=__tmp__MRUB;
    *(__tmp__MRUB) = *((&DIRECTORY_FAT__XFE_));
  };
  __tmp__MRUB=((__DIRECTORY_FAT__XFE *)result__DQUB);
  copy__3QEB(((__STRING__WH *)string_tmp__BHB),parent_path__4HUB);
  add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
  name_in__PSEB(e__5HUB,string_tmp__BHB);
  reduce_path__03WB(string_tmp__BHB);
  set_path__UEXB(__tmp__MRUB,string_tmp__BHB);
  __tmp__MRUB->parent_entry_fat__0FE.position__LWBB=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )e__5HUB->high_cluster__UVBB) << 16) | ((__UINTEGER_32__U )e__5HUB->cluster__XVBB));
  Result__AIUB=result__DQUB;
  return(Result__AIUB);
}

static __STD_FILE_FAT__RZBB* create__with__KIUB(__STRING_CONSTANT__Y *parent_path__MIUB,__SFN_FAT__BVBB *e__NIUB)

{
  __STD_FILE_FAT__RZBB *result__3RUB,*__tmp__GTUB,*Result__OIUB;
  __POINTER__GB ptr__4RUB,__tmp__NVMC;
  __UINTEGER_CPU__3AB __tmp__GSUB,__tmp__JVMC,__tmp__LVMC;
  __INTEGER__K __tmp__RSUB,i__3FXB,Self__2H4B,__tmp__SHXB;
  __UINTEGER_32__U t__UVMC;
  __STRING_CONSTANT__Y *__tmp__YMXB,*__tmp__BNXB;
  __CHARACTER__BB __tmp__NGXB;
  __BOOLEAN__C __tmp__GIXB,__tmp__ZJ3B,__tmp__5JXB,__tmp__MKXB;
  __CHARACTER__BB *__tmp__HNXB;
  result__3RUB=((void *)0);
  ptr__4RUB=((__POINTER__GB )(((void *)0)));
  __tmp__GSUB=((__UINTEGER_CPU__3AB )sizeof(__STD_FILE_FAT__RZBB));
  if ((__tmp__GSUB == 0)) {
    result__3RUB=(&STD_FILE_FAT__RZBB_);
  } else {
    __tmp__RSUB=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__GSUB));
    if ((__tmp__RSUB == (__INTEGER__K)(- 1))) {
      __tmp__JVMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__LVMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__GSUB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JVMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JVMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__JVMC=(__UINTEGER_CPU__3AB)(__tmp__LVMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__NVMC=micro_alloc__table__lab__KSE(__tmp__LVMC,((__POINTER__GB )(&(table_size[(__tmp__JVMC)-1]))),((__UINTEGER_32__U )__tmp__LVMC));
      ptr__4RUB=__tmp__NVMC;
    } else {
      t__UVMC=((__UINTEGER_32__U )__tmp__RSUB);
      __tmp__JVMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__LVMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__GSUB - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JVMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__JVMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__NVMC=micro_alloc__table__lab__KSE(__tmp__LVMC,((__POINTER__GB )(&(table_type[(t__UVMC)]))),(__UINTEGER_32__U)(t__UVMC | 1));
      ptr__4RUB=__tmp__NVMC;
    };
    __tmp__GTUB=((__STD_FILE_FAT__RZBB *)ptr__4RUB);
    result__3RUB=__tmp__GTUB;
    *(__tmp__GTUB) = *((&STD_FILE_FAT__RZBB_));
  };
  __tmp__GTUB=((__STD_FILE_FAT__RZBB *)result__3RUB);
  copy__3QEB(((__STRING__WH *)string_tmp__BHB),parent_path__MIUB);
  add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
  name_in__PSEB(e__NIUB,string_tmp__BHB);
  __tmp__RSUB= 0;
  replace_all__with__DXS(((__STRING__WH *)string_tmp__BHB));
  i__3FXB= 1;
  while ((i__3FXB <= ((__STRING__WH *)string_tmp__BHB)->count__FK)) {
    __tmp__NGXB=((__CHARACTER__BB *)((__STRING__WH *)string_tmp__BHB)->storage__VSS)[(__INTEGER__K)(i__3FXB - 1)];
    if ((__tmp__NGXB == '/')) {
      Self__2H4B=__tmp__RSUB;
      if ((__tmp__RSUB == 0)) {
        __tmp__RSUB= 1;
      };
      if ((Self__2H4B == 1)) {
        remove_first__20T(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(i__3FXB - 1));
        i__3FXB= 1;
      };
      if ((Self__2H4B == 2)) {
        remove_between__to__4IT(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(i__3FXB - 1),i__3FXB);
        i__3FXB=(__INTEGER__K)(i__3FXB - 2);
        __tmp__RSUB= 1;
      };
      if ((Self__2H4B == 3)) {
        __tmp__SHXB=last_index_of__since__PGT(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(i__3FXB - 4));
        if ((__tmp__SHXB == 0)) {
          remove_first__20T(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(i__3FXB - 1));
          i__3FXB= 1;
        } else {
          remove_between__to__4IT(((__STRING__WH *)string_tmp__BHB),__tmp__SHXB,(__INTEGER__K)(i__3FXB - 1));
          i__3FXB=__tmp__SHXB;
        };
        __tmp__RSUB= 1;
      };
      __tmp__GIXB=1;
    } else {
      __tmp__GIXB=0;
    };
    if (__tmp__GIXB) {
      __tmp__GIXB=1;
    } else {
      __tmp__ZJ3B=(__tmp__NGXB == '.');
      if (__tmp__ZJ3B) {
        __tmp__SHXB=__tmp__RSUB;
        if ((__tmp__RSUB == 1)) {
          __tmp__RSUB= 2;
        };
        if ((__tmp__SHXB == 2)) {
          __tmp__RSUB= 3;
        };
        if ((__tmp__SHXB == 3)) {
          __tmp__RSUB= 0;
        };
      };
      __tmp__GIXB=__tmp__ZJ3B;
    };
    if ((! __tmp__GIXB)) {
      if (((__tmp__NGXB == ':') && (i__3FXB > 2))) {
        __tmp__5JXB=is_letter__Z3P(((__CHARACTER__BB *)((__STRING__WH *)string_tmp__BHB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__3FXB - 1) - 1)]);
        __tmp__MKXB=__tmp__5JXB;
      } else {
        __tmp__MKXB=0;
      };
      if ((__tmp__MKXB && (((__CHARACTER__BB *)((__STRING__WH *)string_tmp__BHB)->storage__VSS)[(__INTEGER__K)((__INTEGER__K)(i__3FXB - 2) - 1)] == '/'))) {
        remove_first__20T(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(i__3FXB - 2));
        i__3FXB= 1;
      } else {
        __tmp__RSUB= 0;
      };
    };
    i__3FXB=(__INTEGER__K)(i__3FXB + 1);
  };
  if ((__tmp__RSUB == 1)) {
    remove_last__JFT(((__STRING__WH *)string_tmp__BHB), 1);
  };
  if ((__tmp__RSUB == 2)) {
    remove_last__JFT(((__STRING__WH *)string_tmp__BHB), 2);
  };
  if ((__tmp__RSUB == 3)) {
    Self__2H4B=last_index_of__since__PGT(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(i__3FXB - 4));
    if ((Self__2H4B == 0)) {
      ((__STRING__WH *)string_tmp__BHB)->count__FK= 0;
    } else {
      remove_between__to__4IT(((__STRING__WH *)string_tmp__BHB),Self__2H4B,(__INTEGER__K)(i__3FXB - 1));
    };
  };
  if ((((__STRING__WH *)string_tmp__BHB)->count__FK == 0)) {
    add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
  };
  __tmp__YMXB=create_copy__KXD(string_tmp__BHB);
  __tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG=__tmp__YMXB;
  __tmp__YMXB=((__STRING_CONSTANT__Y *)__tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG);
  __tmp__RSUB=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__YMXB->storage__MC),(__INTEGER__K)(__tmp__YMXB->count__LC - 1));
  i__3FXB=(__INTEGER__K)( 1 + __tmp__RSUB);
  if (((void *)__tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.name__NOD == (void *)((void *)0))) {
    __tmp__BNXB=clone__T2N();
    __tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.name__NOD=__tmp__BNXB;
  };
  __tmp__YMXB=__tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.name__NOD;
  __tmp__HNXB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)__tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )i__3FXB)))));
  __tmp__RSUB=(__INTEGER__K)(__tmp__GTUB->parent_entry__SZBB.parent_abstract_entry__ZFE.path__YG->count__LC - i__3FXB);
  __tmp__BNXB=((__STRING_CONSTANT__Y *)__tmp__YMXB);
  __tmp__BNXB->storage__MC=__tmp__HNXB;
  __tmp__BNXB->count__LC=__tmp__RSUB;
  __tmp__GTUB->parent_entry__SZBB.position__LWBB=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )e__NIUB->high_cluster__UVBB) << 16) | ((__UINTEGER_32__U )e__NIUB->cluster__XVBB));
  Result__OIUB=result__3RUB;
  return(Result__OIUB);
}

static void add_last__3JTB(__LINKED_LISToENTRYo__AH *Self__4JTB,void *element__5JTB)

{
  __LINKED_LIST_NODEoENTRYo__HGX *__tmp__HKTB;
  if (((void *)Self__4JTB->first_link__LGX == (void *)((void *)0))) {
    __tmp__HKTB=create__next__CWAB(element__5JTB);
    Self__4JTB->first_link__LGX=__tmp__HKTB;
    Self__4JTB->parent_linked_collection__FH.upper__BKK= 1;
    Self__4JTB->last_link__UGX=__tmp__HKTB;
    Self__4JTB->mem_idx__SGX= 1;
    Self__4JTB->mem_lnk__TGX=__tmp__HKTB;
  } else {
    __tmp__HKTB=create__next__CWAB(element__5JTB);
    ((__LINKED_LIST_NODEoENTRYo__HGX *)Self__4JTB->last_link__UGX)->next__5GBB=__tmp__HKTB;
    Self__4JTB->parent_linked_collection__FH.upper__BKK=(__INTEGER__K)(Self__4JTB->parent_linked_collection__FH.upper__BKK + 1);
    Self__4JTB->last_link__UGX=__tmp__HKTB;
  };
}

static void put__to__4LTB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__5LTB,void *v__AMTB,__STRING_CONSTANT__Y *k__BMTB)

{
  __INTEGER__K __tmp__LMTB,__tmp__NMTB,idx__JMTB;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__KMTB;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__ZNTB;
  __BOOLEAN__C __tmp__3MTB,__tmp__0MTB;
  __tmp__LMTB=hash_code__BQT(((__STRING_CONSTANT__Y *)k__BMTB));
  __tmp__NMTB=(__INTEGER__K)(__tmp__LMTB % Self__5LTB->capacity__W3F);
  idx__JMTB=__tmp__NMTB;
  node__KMTB=((void **)Self__5LTB->buckets__43F)[__tmp__NMTB];
  until_do__K0TB:
  {
    if (((void *)node__KMTB == (void *)((void *)0))) {
      __tmp__3MTB=1;
    } else {
      __tmp__0MTB=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__KMTB->key__K4F),k__BMTB);
      __tmp__3MTB=__tmp__0MTB;
    };
    if ((! __tmp__3MTB)) {
      node__KMTB=node__KMTB->next__W4F;
      goto until_do__K0TB;
    };
  };
  if (((void *)node__KMTB == (void *)((void *)0))) {
    if ((Self__5LTB->capacity__W3F == Self__5LTB->count__3BG)) {
      increase_capacity__PXL(Self__5LTB);
      idx__JMTB=(__INTEGER__K)(__tmp__LMTB % Self__5LTB->capacity__W3F);
    };
    __tmp__ZNTB=new_node__to__next__UIJ(v__AMTB,k__BMTB,((void **)Self__5LTB->buckets__43F)[idx__JMTB]);
    node__KMTB=__tmp__ZNTB;
    ((void **)Self__5LTB->buckets__43F)[idx__JMTB]=__tmp__ZNTB;
    Self__5LTB->count__3BG=(__INTEGER__K)(Self__5LTB->count__3BG + 1);
  } else {
    ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node__KMTB)->item__44F=v__AMTB;
  };
}

static __INTEGER__K index_of__since__RJIB(__STRING__WH *Self__SJIB)

{
  __INTEGER__K result__WJIB,__tmp__EYKC,Result__VJIB;
  __CHARACTER__BB *__tmp__FYKC;
  result__WJIB= 2;
  __tmp__EYKC=Self__SJIB->count__FK;
  __tmp__FYKC=Self__SJIB->storage__VSS;
  while ((! ((result__WJIB > __tmp__EYKC) || ('/' == ((__CHARACTER__BB *)__tmp__FYKC)[(__INTEGER__K)(result__WJIB - 1)])))) {
    result__WJIB=(__INTEGER__K)(result__WJIB + 1);
  };
  Result__VJIB=result__WJIB;
  return(Result__VJIB);
}

static void* at__2KIB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__3KIB,__STRING__WH *k__4KIB)

{
  __INTEGER__K __tmp__JLIB;
  void *Result__5KIB;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__ILIB;
  __BOOLEAN__C __tmp__TLIB;
  __tmp__JLIB=hash_code__DPT(((__STRING__WH *)k__4KIB));
  node__ILIB=((void **)Self__3KIB->buckets__43F)[(__INTEGER__K)(__tmp__JLIB % Self__3KIB->capacity__W3F)];
  until_do__XUIB:
  {
    __tmp__TLIB=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__ILIB->key__K4F),k__4KIB);
    if ((! __tmp__TLIB)) {
      node__ILIB=node__ILIB->next__W4F;
      goto until_do__XUIB;
    };
  };
  Result__5KIB=node__ILIB->item__44F;
  return(Result__5KIB);
}

static void read__3XVB(__FAT16__OGE *Self__4XVB)

{
  __DRIVE__HPD *__tmp__5XVB;
  __UINTEGER_32__U result__SVWB;
  __tmp__5XVB=Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
  result__SVWB= 0;
  if ((Self__4XVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB >= Self__4XVB->parent_fat__PGE.root_block__ANCB)) {
    result__SVWB=(__UINTEGER_32__U)(Self__4XVB->parent_fat__PGE.root_offset__2MCB + (__UINTEGER_32__U)((__UINTEGER_32__U)(Self__4XVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB - Self__4XVB->parent_fat__PGE.root_block__ANCB) * Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
  } else {
    result__SVWB=(__UINTEGER_32__U)(Self__4XVB->parent_fat__PGE.block_offset__MNCB + (__UINTEGER_32__U)(Self__4XVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB * Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
  };
  if (((struct ___OBJ *)__tmp__5XVB->parent_controler__IPD)->__id==17) {
    ((__DRIVE__HPD *)__tmp__5XVB)->cursor__R0G=result__SVWB;
  } else {
    ((__DRIVE__HPD *)__tmp__5XVB)->cursor__R0G=result__SVWB;
  };
  (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).upper__4KT=(__INTEGER__K)(- 1);
  read__size__S0G(((__DRIVE__HPD *)Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB,((__INTEGER__K )Self__4XVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
}

static void read__KYVB(__FAT32__4GE *Self__LYVB)

{
  __DRIVE__HPD *__tmp__MYVB;
  __UINTEGER_32__U __tmp__MXWB;
  __tmp__MYVB=Self__LYVB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
  __tmp__MXWB=(__UINTEGER_32__U)(Self__LYVB->parent_fat__5GE.block_offset__MNCB + (__UINTEGER_32__U)(Self__LYVB->parent_fat__5GE.parent_partition__4FE.cluster__GOJB * Self__LYVB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
  if (((struct ___OBJ *)__tmp__MYVB->parent_controler__IPD)->__id==17) {
    ((__DRIVE__HPD *)__tmp__MYVB)->cursor__R0G=__tmp__MXWB;
  } else {
    ((__DRIVE__HPD *)__tmp__MYVB)->cursor__R0G=__tmp__MXWB;
  };
  (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__LYVB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB))).upper__4KT=(__INTEGER__K)(- 1);
  read__size__S0G(((__DRIVE__HPD *)Self__LYVB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),Self__LYVB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.buffer__VWBB,((__INTEGER__K )Self__LYVB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.step__XLCB));
}

static __BOOLEAN__C next_cluster__VYVB(__FAT16__OGE *Self__WYVB)

{
  __UINTEGER_32__U n__2YVB,__tmp__WZVB;
  __DRIVE__HPD *__tmp__N0VB;
  __BOOLEAN__C Result__XYVB;
  n__2YVB= 0;
  if ((Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB >= Self__WYVB->parent_fat__PGE.root_block__ANCB)) {
    Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB=(__UINTEGER_32__U)(Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB + 1);
  } else {
    __tmp__WZVB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__WYVB->parent_fat__PGE.fat_sector__5LCB + (__UINTEGER_32__U)(Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB >> 8)) & 4294967288LU);
    n__2YVB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(Self__WYVB->parent_fat__PGE.fat_sector__5LCB << 9) + (__UINTEGER_32__U)(Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB << 1)) & 4095) >> 1);
    if ((__tmp__WZVB != Self__WYVB->parent_fat__PGE.fat_cache_index__G0VB)) {
      __tmp__N0VB=Self__WYVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
      if (((struct ___OBJ *)__tmp__N0VB->parent_controler__IPD)->__id==17) {
        ((__DRIVE__HPD *)__tmp__N0VB)->cursor__R0G=__tmp__WZVB;
      } else {
        ((__DRIVE__HPD *)__tmp__N0VB)->cursor__R0G=__tmp__WZVB;
      };
      (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__WYVB->parent_fat__PGE.fat_cache__MMCB))).upper__4KT=(__INTEGER__K)(- 1);
      read__size__S0G(((__DRIVE__HPD *)Self__WYVB->parent_fat__PGE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),Self__WYVB->parent_fat__PGE.fat_cache__MMCB, 8);
      Self__WYVB->parent_fat__PGE.fat_cache_index__G0VB=__tmp__WZVB;
    };
    Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB=((__UINTEGER_32__U )((__UINTEGER_16__5F *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__WYVB->parent_fat__PGE.fat_cache__MMCB))).storage__1MT)[((__INTEGER__K )n__2YVB)]);
  };
  Result__XYVB=(Self__WYVB->parent_fat__PGE.parent_partition__4FE.cluster__GOJB != 65528);
  return(Result__XYVB);
}

static __BOOLEAN__C next_cluster__C1VB(__FAT32__4GE *Self__D1VB)

{
  __UINTEGER_32__U __tmp__S1VB,__tmp__B2VB;
  __DRIVE__HPD *__tmp__I2VB;
  __BOOLEAN__C Result__E1VB;
  __tmp__S1VB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__D1VB->parent_fat__5GE.fat_sector__5LCB + (__UINTEGER_32__U)(Self__D1VB->parent_fat__5GE.parent_partition__4FE.cluster__GOJB >> 7)) & 4294967288LU);
  __tmp__B2VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(Self__D1VB->parent_fat__5GE.fat_sector__5LCB << 9) + (__UINTEGER_32__U)(Self__D1VB->parent_fat__5GE.parent_partition__4FE.cluster__GOJB << 2)) & 4095) >> 2);
  if ((__tmp__S1VB != Self__D1VB->parent_fat__5GE.fat_cache_index__G0VB)) {
    __tmp__I2VB=Self__D1VB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB;
    if (((struct ___OBJ *)__tmp__I2VB->parent_controler__IPD)->__id==17) {
      ((__DRIVE__HPD *)__tmp__I2VB)->cursor__R0G=__tmp__S1VB;
    } else {
      ((__DRIVE__HPD *)__tmp__I2VB)->cursor__R0G=__tmp__S1VB;
    };
    (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__D1VB->parent_fat__5GE.fat_cache__MMCB))).upper__4KT=(__INTEGER__K)(- 1);
    read__size__S0G(((__DRIVE__HPD *)Self__D1VB->parent_fat__5GE.parent_partition__4FE.parent_partition_fat__3FE.drive__JLCB),Self__D1VB->parent_fat__5GE.fat_cache__MMCB, 8);
    Self__D1VB->parent_fat__5GE.fat_cache_index__G0VB=__tmp__S1VB;
  };
  Self__D1VB->parent_fat__5GE.parent_partition__4FE.cluster__GOJB=((__UINTEGER_32__U *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__D1VB->parent_fat__5GE.fat_cache__MMCB))).storage__1MT)[((__INTEGER__K )__tmp__B2VB)];
  Result__E1VB=(Self__D1VB->parent_fat__5GE.parent_partition__4FE.cluster__GOJB < 268435448);
  return(Result__E1VB);
}

static void set_path__UEXB(__DIRECTORY_FAT__XFE *Self__VEXB,__STRING__WH *n__WEXB)

{
  __STRING_CONSTANT__Y *__tmp__YEXB,*__tmp__BFXB;
  __INTEGER__K __tmp__RYKC,__tmp__0EXB;
  __CHARACTER__BB *__tmp__HFXB;
  __tmp__YEXB=create_copy__KXD(n__WEXB);
  Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG=__tmp__YEXB;
  __tmp__YEXB=((__STRING_CONSTANT__Y *)Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
  __tmp__RYKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__YEXB->storage__MC),(__INTEGER__K)(__tmp__YEXB->count__LC - 1));
  __tmp__0EXB=(__INTEGER__K)( 1 + __tmp__RYKC);
  if (((void *)Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD == (void *)((void *)0))) {
    __tmp__BFXB=clone__T2N();
    Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD=__tmp__BFXB;
  };
  __tmp__YEXB=Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD;
  __tmp__HFXB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__0EXB)))));
  __tmp__RYKC=(__INTEGER__K)(Self__VEXB->parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->count__LC - __tmp__0EXB);
  __tmp__BFXB=((__STRING_CONSTANT__Y *)__tmp__YEXB);
  __tmp__BFXB->storage__MC=__tmp__HFXB;
  __tmp__BFXB->count__LC=__tmp__RYKC;
}

static void set_path__NISB(__FAT16__OGE *Self__OISB,__STRING__WH *n__PISB)

{
  __STRING_CONSTANT__Y *__tmp__RISB,*__tmp__0ISB;
  __INTEGER__K __tmp__UYKC,__tmp__TISB;
  __CHARACTER__BB *__tmp__AJSB;
  __tmp__RISB=create_copy__KXD(n__PISB);
  Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG=__tmp__RISB;
  __tmp__RISB=((__STRING_CONSTANT__Y *)Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
  __tmp__UYKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__RISB->storage__MC),(__INTEGER__K)(__tmp__RISB->count__LC - 1));
  __tmp__TISB=(__INTEGER__K)( 1 + __tmp__UYKC);
  if (((void *)Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD == (void *)((void *)0))) {
    __tmp__0ISB=clone__T2N();
    Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD=__tmp__0ISB;
  };
  __tmp__RISB=Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD;
  __tmp__AJSB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__TISB)))));
  __tmp__UYKC=(__INTEGER__K)(Self__OISB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->count__LC - __tmp__TISB);
  __tmp__0ISB=((__STRING_CONSTANT__Y *)__tmp__RISB);
  __tmp__0ISB->storage__MC=__tmp__AJSB;
  __tmp__0ISB->count__LC=__tmp__UYKC;
}

static void set_path__LRSB(__FAT32__4GE *Self__MRSB,__STRING__WH *n__NRSB)

{
  __STRING_CONSTANT__Y *__tmp__PRSB,*__tmp__YRSB;
  __INTEGER__K __tmp__XYKC,__tmp__RRSB;
  __CHARACTER__BB *__tmp__4RSB;
  __tmp__PRSB=create_copy__KXD(n__NRSB);
  Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG=__tmp__PRSB;
  __tmp__PRSB=((__STRING_CONSTANT__Y *)Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG);
  __tmp__XYKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__PRSB->storage__MC),(__INTEGER__K)(__tmp__PRSB->count__LC - 1));
  __tmp__RRSB=(__INTEGER__K)( 1 + __tmp__XYKC);
  if (((void *)Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD == (void *)((void *)0))) {
    __tmp__YRSB=clone__T2N();
    Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD=__tmp__YRSB;
  };
  __tmp__PRSB=Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.name__NOD;
  __tmp__4RSB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__RRSB)))));
  __tmp__XYKC=(__INTEGER__K)(Self__MRSB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG->count__LC - __tmp__RRSB);
  __tmp__YRSB=((__STRING_CONSTANT__Y *)__tmp__PRSB);
  __tmp__YRSB->storage__MC=__tmp__4RSB;
  __tmp__YRSB->count__LC=__tmp__XYKC;
}

static void set_block_type__FNWB(__EXT2__OHE *Self__GNWB,__UINTEGER_32__U b__HNWB)

{
  __BOOLEAN__C __tmp__TNWB,__tmp__3NWB;
  if ((b__HNWB <= 12)) {
    Self__GNWB->parent_partition_ext2__XHE.block_type__P5VB= 0;
    __tmp__TNWB=1;
  } else {
    __tmp__TNWB=0;
  };
  if (__tmp__TNWB) {
    __tmp__TNWB=1;
  } else {
    __tmp__3NWB=(b__HNWB <= ((__UINTEGER_32__U )(__INTEGER__K)( 12 + ((__INTEGER__K )(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)))));
    if (__tmp__3NWB) {
      Self__GNWB->parent_partition_ext2__XHE.block_type__P5VB= 1;
      Self__GNWB->parent_partition_ext2__XHE.array_block1__EAWB=(__UINTEGER_32__U)(b__HNWB - 12);
    };
    __tmp__TNWB=__tmp__3NWB;
  };
  if (__tmp__TNWB) {
    __tmp__TNWB=1;
  } else {
    __tmp__3NWB=(b__HNWB <= ((__UINTEGER_32__U )(__INTEGER__K)((__INTEGER__K)( 12 + ((__INTEGER__K )(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))) + ((__INTEGER__K )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))))));
    if (__tmp__3NWB) {
      Self__GNWB->parent_partition_ext2__XHE.block_type__P5VB= 2;
      Self__GNWB->parent_partition_ext2__XHE.array_block1__EAWB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(b__HNWB - 12) - (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)) - 1) / (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2));
      Self__GNWB->parent_partition_ext2__XHE.array_block2__BBWB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(b__HNWB - 12) - (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)) - 1) % (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2));
    };
    __tmp__TNWB=__tmp__3NWB;
  };
  if ((! __tmp__TNWB)) {
    if ((b__HNWB <= ((__UINTEGER_32__U )(__INTEGER__K)((__INTEGER__K)((__INTEGER__K)( 12 + ((__INTEGER__K )(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))) + ((__INTEGER__K )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)))) + ((__INTEGER__K )(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))))))) {
      Self__GNWB->parent_partition_ext2__XHE.block_type__P5VB= 3;
      Self__GNWB->parent_partition_ext2__XHE.array_block1__EAWB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(b__HNWB - 12) - (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)) - (__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))) - 1) / (__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)));
      Self__GNWB->parent_partition_ext2__XHE.array_block2__BBWB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(b__HNWB - 12) - (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)) - (__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))) - 1) % (__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))) / (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2));
      Self__GNWB->parent_partition_ext2__XHE.array_block3__ECWB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(b__HNWB - 12) - (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2)) - (__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2))) - 1) % (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__GNWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 2));
    };
  };
}

static __UINTEGER_32__U get_block__BWUB(__INODE__DTQB *Self__CWUB,__UINTEGER_32__U index__DWUB)

{
  __UINTEGER_32__U result__FWUB,Result__EWUB;
  __BOOLEAN__C __tmp__1WUB,__tmp__IXUB;
  result__FWUB= 0;
  if ((index__DWUB < 13)) {
    result__FWUB=((__UINTEGER_32__U *)Self__CWUB)[((__INTEGER__K )(__UINTEGER_32__U)(index__DWUB + 9))];
    __tmp__1WUB=1;
  } else {
    __tmp__1WUB=0;
  };
  if (__tmp__1WUB) {
    __tmp__1WUB=1;
  } else {
    __tmp__IXUB=(index__DWUB <= ((__UINTEGER_32__U )(__INTEGER__K)( 12 + ((__INTEGER__K )(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )(&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB))) >> 2)))));
    if (__tmp__IXUB) {
      result__FWUB=Self__CWUB->i_blockd__2TQB;
    };
    __tmp__1WUB=__tmp__IXUB;
  };
  if (__tmp__1WUB) {
    __tmp__1WUB=1;
  } else {
    __tmp__IXUB=(index__DWUB <= ((__UINTEGER_32__U )(__INTEGER__K)( 12 + ((__INTEGER__K )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )(&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB))) * ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )(&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB)))) >> 2)))));
    if (__tmp__IXUB) {
      result__FWUB=Self__CWUB->i_blocke__3TQB;
    };
    __tmp__1WUB=__tmp__IXUB;
  };
  if ((! __tmp__1WUB)) {
    if ((index__DWUB <= ((__UINTEGER_32__U )(__INTEGER__K)( 12 + ((__INTEGER__K )(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )(&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB))) * ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )(&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB)))) * ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )(&SUPERBLOCK__YFRB_)->s_log_block_size__5FRB)))) >> 2)))))) {
      result__FWUB=Self__CWUB->i_blockf__4TQB;
    };
  };
  Result__EWUB=result__FWUB;
  return(Result__EWUB);
}

static void set_block__L5VB(__EXT2__OHE *Self__M5VB,__UINTEGER_32__U b__N5VB)

{
  __INTEGER__K idx__O0MC;
  __BOOLEAN__C __tmp__Y5VB,__tmp__D1WB;
  if ((Self__M5VB->parent_partition_ext2__XHE.block_type__P5VB == 0)) {
    Self__M5VB->parent_partition_ext2__XHE.block__W5VB=b__N5VB;
    __tmp__Y5VB=1;
  } else {
    __tmp__Y5VB=0;
  };
  if (__tmp__Y5VB) {
    __tmp__Y5VB=1;
  } else {
    __tmp__D1WB=(Self__M5VB->parent_partition_ext2__XHE.block_type__P5VB == 1);
    if (__tmp__D1WB) {
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=b__N5VB;
      read__QCWB(Self__M5VB);
      idx__O0MC=((__INTEGER__K )(__UINTEGER_32__U)(Self__M5VB->parent_partition_ext2__XHE.array_block1__EAWB << 2));
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[idx__O0MC]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 1)]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 2)]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 3)]) << 24));
    };
    __tmp__Y5VB=__tmp__D1WB;
  };
  if (__tmp__Y5VB) {
    __tmp__Y5VB=1;
  } else {
    __tmp__D1WB=(Self__M5VB->parent_partition_ext2__XHE.block_type__P5VB == 2);
    if (__tmp__D1WB) {
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=b__N5VB;
      read__QCWB(Self__M5VB);
      idx__O0MC=((__INTEGER__K )(__UINTEGER_32__U)(Self__M5VB->parent_partition_ext2__XHE.array_block1__EAWB << 2));
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[idx__O0MC]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 1)]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 2)]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 3)]) << 24));
      read__QCWB(Self__M5VB);
      idx__O0MC=((__INTEGER__K )(__UINTEGER_32__U)(Self__M5VB->parent_partition_ext2__XHE.array_block2__BBWB << 2));
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[idx__O0MC]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 1)]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 2)]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 3)]) << 24));
    };
    __tmp__Y5VB=__tmp__D1WB;
  };
  if ((! __tmp__Y5VB)) {
    if ((Self__M5VB->parent_partition_ext2__XHE.block_type__P5VB == 3)) {
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=b__N5VB;
      read__QCWB(Self__M5VB);
      idx__O0MC=((__INTEGER__K )(__UINTEGER_32__U)(Self__M5VB->parent_partition_ext2__XHE.array_block1__EAWB << 2));
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[idx__O0MC]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 1)]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 2)]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 3)]) << 24));
      read__QCWB(Self__M5VB);
      idx__O0MC=((__INTEGER__K )(__UINTEGER_32__U)(Self__M5VB->parent_partition_ext2__XHE.array_block2__BBWB << 2));
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[idx__O0MC]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 1)]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 2)]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 3)]) << 24));
      read__QCWB(Self__M5VB);
      idx__O0MC=((__INTEGER__K )(__UINTEGER_32__U)(Self__M5VB->parent_partition_ext2__XHE.array_block3__ECWB << 2));
      Self__M5VB->parent_partition_ext2__XHE.block__W5VB=(__UINTEGER_32__U)((__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[idx__O0MC]) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 1)]) << 8)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 2)]) << 16)) + (__UINTEGER_32__U)(((__UINTEGER_32__U )((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__M5VB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[(__INTEGER__K)(idx__O0MC + 3)]) << 24));
    };
  };
}

static void read__QCWB(__EXT2__OHE *Self__RCWB)

{
  __DRIVE__HPD *__tmp__SCWB;
  __UINTEGER_32__U __tmp__42WB;
  __tmp__SCWB=Self__RCWB->parent_partition_ext2__XHE.parent_partition__WHE.drive__JLCB;
  __tmp__42WB=(__UINTEGER_32__U)(Self__RCWB->parent_partition_ext2__XHE.first_block_sector__MHRB + (__UINTEGER_32__U)((__UINTEGER_32__U)(Self__RCWB->parent_partition_ext2__XHE.block__W5VB - 1) * (__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__RCWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 9)));
  if (((struct ___OBJ *)__tmp__SCWB->parent_controler__IPD)->__id==17) {
    ((__DRIVE__HPD *)__tmp__SCWB)->cursor__R0G=__tmp__42WB;
  } else {
    ((__DRIVE__HPD *)__tmp__SCWB)->cursor__R0G=__tmp__42WB;
  };
  (*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__RCWB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).upper__4KT=(__INTEGER__K)(- 1);
  read__size__S0G(((__DRIVE__HPD *)Self__RCWB->parent_partition_ext2__XHE.parent_partition__WHE.drive__JLCB),Self__RCWB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB,((__INTEGER__K )(__UINTEGER_32__U)(((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__RCWB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))) >> 9)));
}

static __BOOLEAN__C has_suffix__CEUB(__STRING__WH *Self__DEUB,void *s__EEUB)

{
  __INTEGER__K i1__HEUB,i2__IEUB,__tmp__GZKC,__tmp__HZKC;
  __BOOLEAN__C result__GEUB,Result__FEUB;
  __CHARACTER__BB *__tmp__IZKC,*__tmp__JZKC;
  result__GEUB=0;
  i1__HEUB= 0;
  i2__IEUB= 0;
  if ((((__STRING_CONSTANT__Y *)s__EEUB)->count__LC <= Self__DEUB->count__FK)) {
    i1__HEUB=(__INTEGER__K)((__INTEGER__K)(Self__DEUB->count__FK - ((__STRING_CONSTANT__Y *)s__EEUB)->count__LC) + 1);
    i2__IEUB= 1;
    __tmp__GZKC=Self__DEUB->count__FK;
    __tmp__HZKC=((__STRING_CONSTANT__Y *)s__EEUB)->count__LC;
    __tmp__IZKC=Self__DEUB->storage__VSS;
    __tmp__JZKC=((__STRING_CONSTANT__Y *)s__EEUB)->storage__MC;
    while ((! (((i1__HEUB > __tmp__GZKC) || (i2__IEUB > __tmp__HZKC)) || (((__CHARACTER__BB *)__tmp__IZKC)[(__INTEGER__K)(i1__HEUB - 1)] != ((__CHARACTER__BB *)__tmp__JZKC)[(__INTEGER__K)(i2__IEUB - 1)])))) {
      i1__HEUB=(__INTEGER__K)(i1__HEUB + 1);
      i2__IEUB=(__INTEGER__K)(i2__IEUB + 1);
    };
    result__GEUB=(i1__HEUB > Self__DEUB->count__FK);
  };
  Result__FEUB=result__GEUB;
  return(Result__FEUB);
}

static __DIRECTORY_EXT2__QHE* clone__NU0B()

{
  __DIRECTORY_EXT2__QHE *result__QU0B,*__tmp__ZV0B,*Result__PU0B;
  __POINTER__GB ptr__RU0B,__tmp__4VMC;
  __UINTEGER_CPU__3AB __tmp__ZU0B,__tmp__0VMC,__tmp__2VMC;
  __INTEGER__K __tmp__EV0B;
  __UINTEGER_32__U t__FWMC;
  result__QU0B=((void *)0);
  ptr__RU0B=((__POINTER__GB )(((void *)0)));
  __tmp__ZU0B=((__UINTEGER_CPU__3AB )sizeof(__DIRECTORY_EXT2__QHE));
  if ((__tmp__ZU0B == 0)) {
    result__QU0B=(&DIRECTORY_EXT2__QHE_);
  } else {
    __tmp__EV0B=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__ZU0B));
    if ((__tmp__EV0B == (__INTEGER__K)(- 1))) {
      __tmp__0VMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__2VMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__ZU0B - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0VMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0VMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__0VMC=(__UINTEGER_CPU__3AB)(__tmp__2VMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__4VMC=micro_alloc__table__lab__KSE(__tmp__2VMC,((__POINTER__GB )(&(table_size[(__tmp__0VMC)-1]))),((__UINTEGER_32__U )__tmp__2VMC));
      ptr__RU0B=__tmp__4VMC;
    } else {
      t__FWMC=((__UINTEGER_32__U )__tmp__EV0B);
      __tmp__0VMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__2VMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__ZU0B - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0VMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__0VMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__4VMC=micro_alloc__table__lab__KSE(__tmp__2VMC,((__POINTER__GB )(&(table_type[(t__FWMC)]))),(__UINTEGER_32__U)(t__FWMC | 1));
      ptr__RU0B=__tmp__4VMC;
    };
    __tmp__ZV0B=((__DIRECTORY_EXT2__QHE *)ptr__RU0B);
    result__QU0B=__tmp__ZV0B;
    *(__tmp__ZV0B) = *((&DIRECTORY_EXT2__QHE_));
  };
  Result__PU0B=result__QU0B;
  return(Result__PU0B);
}

static __STD_FILE_EXT2__EZQB* clone__HW0B()

{
  __STD_FILE_EXT2__EZQB *result__KW0B,*__tmp__TX0B,*Result__JW0B;
  __POINTER__GB ptr__LW0B,__tmp__PWMC;
  __UINTEGER_CPU__3AB __tmp__TW0B,__tmp__LWMC,__tmp__NWMC;
  __INTEGER__K __tmp__4W0B;
  __UINTEGER_32__U t__WWMC;
  result__KW0B=((void *)0);
  ptr__LW0B=((__POINTER__GB )(((void *)0)));
  __tmp__TW0B=((__UINTEGER_CPU__3AB )sizeof(__STD_FILE_EXT2__EZQB));
  if ((__tmp__TW0B == 0)) {
    result__KW0B=(&STD_FILE_EXT2__EZQB_);
  } else {
    __tmp__4W0B=-1;
    clone_allocation_size__ATC=(__UINTEGER_CPU__3AB)(clone_allocation_size__ATC - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__TW0B));
    if ((__tmp__4W0B == (__INTEGER__K)(- 1))) {
      __tmp__LWMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__NWMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__TW0B - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LWMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LWMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__LWMC=(__UINTEGER_CPU__3AB)(__tmp__NWMC / ((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))));
      __tmp__PWMC=micro_alloc__table__lab__KSE(__tmp__NWMC,((__POINTER__GB )(&(table_size[(__tmp__LWMC)-1]))),((__UINTEGER_32__U )__tmp__NWMC));
      ptr__LW0B=__tmp__PWMC;
    } else {
      t__WWMC=((__UINTEGER_32__U )__tmp__4W0B);
      __tmp__LWMC=(__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB )((__INTEGER__K )(sizeof(void *)))) - ((__UINTEGER_CPU__3AB ) 1));
      __tmp__NWMC=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(__tmp__TW0B - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LWMC)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - __tmp__LWMC) - ((__UINTEGER_CPU__3AB ) 1)));
      __tmp__PWMC=micro_alloc__table__lab__KSE(__tmp__NWMC,((__POINTER__GB )(&(table_type[(t__WWMC)]))),(__UINTEGER_32__U)(t__WWMC | 1));
      ptr__LW0B=__tmp__PWMC;
    };
    __tmp__TX0B=((__STD_FILE_EXT2__EZQB *)ptr__LW0B);
    result__KW0B=__tmp__TX0B;
    *(__tmp__TX0B) = *((&STD_FILE_EXT2__EZQB_));
  };
  Result__JW0B=result__KW0B;
  return(Result__JW0B);
}

static void set_path__1WZB(__EXT2__OHE *Self__2WZB,__STRING__WH *n__3WZB)

{
  __STRING_CONSTANT__Y *__tmp__5WZB,*__tmp__IXZB;
  __INTEGER__K __tmp__TZKC,__tmp__BXZB;
  __CHARACTER__BB *__tmp__OXZB;
  __tmp__5WZB=create_copy__KXD(n__3WZB);
  Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG=__tmp__5WZB;
  __tmp__5WZB=((__STRING_CONSTANT__Y *)Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
  __tmp__TZKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__5WZB->storage__MC),(__INTEGER__K)(__tmp__5WZB->count__LC - 1));
  __tmp__BXZB=(__INTEGER__K)( 1 + __tmp__TZKC);
  if (((void *)Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD == (void *)((void *)0))) {
    __tmp__IXZB=clone__T2N();
    Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD=__tmp__IXZB;
  };
  __tmp__5WZB=Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD;
  __tmp__OXZB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__BXZB)))));
  __tmp__TZKC=(__INTEGER__K)(Self__2WZB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG->count__LC - __tmp__BXZB);
  __tmp__IXZB=((__STRING_CONSTANT__Y *)__tmp__5WZB);
  __tmp__IXZB->storage__MC=__tmp__OXZB;
  __tmp__IXZB->count__LC=__tmp__TZKC;
}

static void set_path__Z21B(__DIRECTORY_EXT2__QHE *Self__021B,__STRING__WH *n__121B)

{
  __STRING_CONSTANT__Y *__tmp__321B,*__tmp__G31B;
  __INTEGER__K __tmp__WZKC,__tmp__521B;
  __CHARACTER__BB *__tmp__M31B;
  __tmp__321B=create_copy__KXD(n__121B);
  Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG=__tmp__321B;
  __tmp__321B=((__STRING_CONSTANT__Y *)Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
  __tmp__WZKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__321B->storage__MC),(__INTEGER__K)(__tmp__321B->count__LC - 1));
  __tmp__521B=(__INTEGER__K)( 1 + __tmp__WZKC);
  if (((void *)Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD == (void *)((void *)0))) {
    __tmp__G31B=clone__T2N();
    Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD=__tmp__G31B;
  };
  __tmp__321B=Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD;
  __tmp__M31B=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__521B)))));
  __tmp__WZKC=(__INTEGER__K)(Self__021B->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG->count__LC - __tmp__521B);
  __tmp__G31B=((__STRING_CONSTANT__Y *)__tmp__321B);
  __tmp__G31B->storage__MC=__tmp__M31B;
  __tmp__G31B->count__LC=__tmp__WZKC;
}

static void set_path__T31B(__STD_FILE_EXT2__EZQB *Self__U31B,__STRING__WH *n__V31B)

{
  __STRING_CONSTANT__Y *__tmp__X31B,*__tmp__A41B;
  __INTEGER__K __tmp__ZZKC,__tmp__Z31B;
  __CHARACTER__BB *__tmp__G41B;
  __tmp__X31B=create_copy__KXD(n__V31B);
  Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG=__tmp__X31B;
  __tmp__X31B=((__STRING_CONSTANT__Y *)Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG);
  __tmp__ZZKC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__X31B->storage__MC),(__INTEGER__K)(__tmp__X31B->count__LC - 1));
  __tmp__Z31B=(__INTEGER__K)( 1 + __tmp__ZZKC);
  if (((void *)Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.name__NOD == (void *)((void *)0))) {
    __tmp__A41B=clone__T2N();
    Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.name__NOD=__tmp__A41B;
  };
  __tmp__X31B=Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.name__NOD;
  __tmp__G41B=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__Z31B)))));
  __tmp__ZZKC=(__INTEGER__K)(Self__U31B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG->count__LC - __tmp__Z31B);
  __tmp__A41B=((__STRING_CONSTANT__Y *)__tmp__X31B);
  __tmp__A41B->storage__MC=__tmp__G41B;
  __tmp__A41B->count__LC=__tmp__ZZKC;
}

static void add_last__0XZB(__LINKED_LISToENTRYo__AH *Self__1XZB,void *element__2XZB)

{
  __LINKED_LIST_NODEoENTRYo__HGX *__tmp__EYZB;
  if (((void *)Self__1XZB->first_link__LGX == (void *)((void *)0))) {
    __tmp__EYZB=create__next__CWAB(element__2XZB);
    Self__1XZB->first_link__LGX=__tmp__EYZB;
    Self__1XZB->parent_linked_collection__FH.upper__BKK= 1;
    Self__1XZB->last_link__UGX=__tmp__EYZB;
    Self__1XZB->mem_idx__SGX= 1;
    Self__1XZB->mem_lnk__TGX=__tmp__EYZB;
  } else {
    __tmp__EYZB=create__next__CWAB(element__2XZB);
    ((__LINKED_LIST_NODEoENTRYo__HGX *)Self__1XZB->last_link__UGX)->next__5GBB=__tmp__EYZB;
    Self__1XZB->parent_linked_collection__FH.upper__BKK=(__INTEGER__K)(Self__1XZB->parent_linked_collection__FH.upper__BKK + 1);
    Self__1XZB->last_link__UGX=__tmp__EYZB;
  };
}

static void put__to__4ZZB(__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__5ZZB,void *v__A0ZB,__STRING_CONSTANT__Y *k__B0ZB)

{
  __INTEGER__K __tmp__L0ZB,__tmp__N0ZB,idx__J0ZB;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__K0ZB;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__Z1ZB;
  __BOOLEAN__C __tmp__30ZB,__tmp__00ZB;
  __tmp__L0ZB=hash_code__BQT(((__STRING_CONSTANT__Y *)k__B0ZB));
  __tmp__N0ZB=(__INTEGER__K)(__tmp__L0ZB % Self__5ZZB->capacity__W3F);
  idx__J0ZB=__tmp__N0ZB;
  node__K0ZB=((void **)Self__5ZZB->buckets__43F)[__tmp__N0ZB];
  until_do__OP0B:
  {
    if (((void *)node__K0ZB == (void *)((void *)0))) {
      __tmp__30ZB=1;
    } else {
      __tmp__00ZB=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__K0ZB->key__K4F),k__B0ZB);
      __tmp__30ZB=__tmp__00ZB;
    };
    if ((! __tmp__30ZB)) {
      node__K0ZB=node__K0ZB->next__W4F;
      goto until_do__OP0B;
    };
  };
  if (((void *)node__K0ZB == (void *)((void *)0))) {
    if ((Self__5ZZB->capacity__W3F == Self__5ZZB->count__3BG)) {
      increase_capacity__PXL(Self__5ZZB);
      idx__J0ZB=(__INTEGER__K)(__tmp__L0ZB % Self__5ZZB->capacity__W3F);
    };
    __tmp__Z1ZB=new_node__to__next__UIJ(v__A0ZB,k__B0ZB,((void **)Self__5ZZB->buckets__43F)[idx__J0ZB]);
    node__K0ZB=__tmp__Z1ZB;
    ((void **)Self__5ZZB->buckets__43F)[idx__J0ZB]=__tmp__Z1ZB;
    Self__5ZZB->count__3BG=(__INTEGER__K)(Self__5ZZB->count__3BG + 1);
  } else {
    ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node__K0ZB)->item__44F=v__A0ZB;
  };
}

static void* item__NBBB(__LINKED_LISToENTRYo__AH *Self__OBBB,__INTEGER__K i__PBBB)

{
  void *Result__QBBB;
  if ((i__PBBB != Self__OBBB->mem_idx__SGX)) {
    if ((Self__OBBB->mem_idx__SGX > i__PBBB)) {
      Self__OBBB->mem_idx__SGX= 1;
      Self__OBBB->mem_lnk__TGX=Self__OBBB->first_link__LGX;
    };
    while ((i__PBBB != Self__OBBB->mem_idx__SGX)) {
      Self__OBBB->mem_lnk__TGX=Self__OBBB->mem_lnk__TGX->next__5GBB;
      Self__OBBB->mem_idx__SGX=(__INTEGER__K)(Self__OBBB->mem_idx__SGX + 1);
    };
  };
  Result__QBBB=Self__OBBB->mem_lnk__TGX->item__2ZAB;
  return(Result__QBBB);
}

static void make_inode__4RRB(__EXT2__OHE *Self__5RRB)

{
  __UINTEGER_32__U __tmp__CTRB,__tmp__JTRB,__tmp__LTRB,Self__0WSB;
  void *__tmp__EURB;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *__tmp__QTRB,*buf__NSRB;
  __tmp__CTRB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__5RRB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.no_inode__SRRB - 1) / ((__SUPERBLOCK__YFRB *)Self__5RRB->parent_partition_ext2__XHE.superblock__MIRB)->s_inodes_per_group__DGRB);
  __tmp__JTRB=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__5RRB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.no_inode__SRRB - 1) % ((__SUPERBLOCK__YFRB *)Self__5RRB->parent_partition_ext2__XHE.superblock__MIRB)->s_inodes_per_group__DGRB);
  __tmp__LTRB=(__UINTEGER_32__U)(__tmp__CTRB << 5);
  set_block__L5VB(Self__5RRB, 2);
  read__QCWB(Self__5RRB);
  __tmp__QTRB=create_with_capacity__JBF( 32);
  buf__NSRB=__tmp__QTRB;
  __tmp__CTRB=(__UINTEGER_32__U)(__tmp__LTRB + 32);
  Self__0WSB=__tmp__LTRB;
  while ((Self__0WSB <= __tmp__CTRB)) {
    add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buf__NSRB),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__5RRB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )Self__0WSB)]);
    Self__0WSB=(__UINTEGER_32__U)(Self__0WSB + 1);
  };
  __tmp__EURB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__QTRB))).storage__1MT);
  __tmp__CTRB=(__UINTEGER_32__U)(__tmp__JTRB << 7);
  set_block__L5VB(Self__5RRB,(__UINTEGER_32__U)(((__GROUP_DESCRIPTOR__OSRB *)__tmp__EURB)->bg_inode_table__RSRB + (__UINTEGER_32__U)(__tmp__CTRB / ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__5RRB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))))));
  read__QCWB(Self__5RRB);
  __tmp__JTRB=(__UINTEGER_32__U)(__tmp__CTRB % ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)Self__5RRB->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))));
  __tmp__QTRB=create_with_capacity__JBF( 128);
  buf__NSRB=__tmp__QTRB;
  __tmp__CTRB=(__UINTEGER_32__U)(__tmp__JTRB + 128);
  __tmp__LTRB=__tmp__JTRB;
  __tmp__JTRB=(__UINTEGER_32__U)(__tmp__CTRB - 1);
  while ((__tmp__LTRB <= __tmp__JTRB)) {
    add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buf__NSRB),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)Self__5RRB->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__LTRB)]);
    __tmp__LTRB=(__UINTEGER_32__U)(__tmp__LTRB + 1);
  };
  Self__5RRB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.inode__FUQB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__QTRB))).storage__1MT);
}

static void make_inode__XQ1B(__DIRECTORY_EXT2__QHE *Self__YQ1B)

{
  void *__tmp__IR1B;
  __EXT2__OHE *__tmp__KR1B,*partition__CR1B;
  __UINTEGER_32__U __tmp__RR1B,__tmp__YR1B,__tmp__0R1B,Self__XG2B;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *__tmp__5R1B,*buf__GR1B;
  __tmp__IR1B=get_partition__RE2B(Self__YQ1B);
  if (__tmp__IR1B==((void *)0)) {
    __tmp__KR1B=((void *)0);
  } else {
    if (((struct ___OBJ *)__tmp__IR1B)->__id==13) {
      __tmp__KR1B=((void *)__tmp__IR1B);
    } else {
      __tmp__KR1B=((void *)0);
    }
  };
  partition__CR1B=__tmp__KR1B;
  __tmp__RR1B=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__YQ1B->parent_entry_ext2__THE.no_inode__SRRB - 1) / ((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__KR1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_inodes_per_group__DGRB);
  __tmp__YR1B=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__YQ1B->parent_entry_ext2__THE.no_inode__SRRB - 1) % ((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__KR1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_inodes_per_group__DGRB);
  __tmp__0R1B=(__UINTEGER_32__U)(__tmp__RR1B << 5);
  set_block__L5VB(((__EXT2__OHE *)__tmp__KR1B), 2);
  read__QCWB(((__EXT2__OHE *)__tmp__KR1B));
  __tmp__5R1B=create_with_capacity__JBF( 32);
  buf__GR1B=__tmp__5R1B;
  __tmp__RR1B=(__UINTEGER_32__U)(__tmp__0R1B + 32);
  Self__XG2B=__tmp__0R1B;
  while ((Self__XG2B <= __tmp__RR1B)) {
    add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buf__GR1B),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__CR1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )Self__XG2B)]);
    Self__XG2B=(__UINTEGER_32__U)(Self__XG2B + 1);
  };
  __tmp__IR1B=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__5R1B))).storage__1MT);
  __tmp__RR1B=(__UINTEGER_32__U)(__tmp__YR1B << 7);
  set_block__L5VB(((__EXT2__OHE *)__tmp__KR1B),(__UINTEGER_32__U)(((__GROUP_DESCRIPTOR__OSRB *)__tmp__IR1B)->bg_inode_table__RSRB + (__UINTEGER_32__U)(__tmp__RR1B / ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__KR1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))))));
  read__QCWB(((__EXT2__OHE *)__tmp__KR1B));
  __tmp__YR1B=(__UINTEGER_32__U)(__tmp__RR1B % ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__KR1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))));
  __tmp__5R1B=create_with_capacity__JBF( 128);
  buf__GR1B=__tmp__5R1B;
  __tmp__RR1B=(__UINTEGER_32__U)(__tmp__YR1B + 128);
  __tmp__0R1B=__tmp__YR1B;
  __tmp__YR1B=(__UINTEGER_32__U)(__tmp__RR1B - 1);
  while ((__tmp__0R1B <= __tmp__YR1B)) {
    add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buf__GR1B),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__CR1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__0R1B)]);
    __tmp__0R1B=(__UINTEGER_32__U)(__tmp__0R1B + 1);
  };
  Self__YQ1B->parent_entry_ext2__THE.inode__FUQB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__5R1B))).storage__1MT);
}

static void make_inode__VT1B(__STD_FILE_EXT2__EZQB *Self__WT1B)

{
  __INTEGER__K __tmp__GJ2B;
  void *__tmp__LJ2B;
  void *__tmp__NJ2B;
  __EXT2__OHE *__tmp__IU1B,*partition__AU1B;
  __UINTEGER_32__U __tmp__PU1B,__tmp__WU1B,__tmp__YU1B,Self__1K2B;
  __FAST_ARRAYoExpanded_UINTEGER_8o__LDE *__tmp__3U1B,*buf__EU1B;
  copy__5RS(((__STRING__WH *)string_tmp__BHB),Self__WT1B->parent_entry_ext2__FZQB.parent_abstract_entry__SHE.path__YG);
  __tmp__GJ2B=index_of__since__RJIB(((__STRING__WH *)string_tmp__BHB));
  keep_head__3CT(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(__tmp__GJ2B - 1));
  __tmp__LJ2B=at__2KIB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
  if (__tmp__LJ2B==((void *)0)) {
    __tmp__NJ2B=((void *)0);
  } else {
    switch (((struct ___OBJ *)__tmp__LJ2B)->__id) {
    case 5:
    case 7:
    case 14:
    case 8:
    case 12:
    case 15:
    case 16: {
      __tmp__NJ2B=((void *)0);
    } break;
    case 9: {
      __tmp__NJ2B=((void *)__tmp__LJ2B);
    } break;
    case 10: {
      __tmp__NJ2B=((void *)__tmp__LJ2B);
    } break;
    case 11: {
      __tmp__NJ2B=((void *)__tmp__LJ2B);
    } break;
    case 13: {
      __tmp__NJ2B=((void *)__tmp__LJ2B);
    } break;
    }
  };
  if (((void *)__tmp__NJ2B == (void *)((void *)0))) {
    print__SKC((&__string_9));
  };
  if (__tmp__NJ2B==((void *)0)) {
    __tmp__IU1B=((void *)0);
  } else {
    if (((struct ___OBJ *)__tmp__NJ2B)->__id==13) {
      __tmp__IU1B=((void *)__tmp__NJ2B);
    } else {
      __tmp__IU1B=((void *)0);
    }
  };
  partition__AU1B=__tmp__IU1B;
  __tmp__PU1B=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__WT1B->parent_entry_ext2__FZQB.no_inode__SRRB - 1) / ((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__IU1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_inodes_per_group__DGRB);
  __tmp__WU1B=(__UINTEGER_32__U)((__UINTEGER_32__U)(Self__WT1B->parent_entry_ext2__FZQB.no_inode__SRRB - 1) % ((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__IU1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_inodes_per_group__DGRB);
  __tmp__YU1B=(__UINTEGER_32__U)(__tmp__PU1B << 5);
  set_block__L5VB(((__EXT2__OHE *)__tmp__IU1B), 2);
  read__QCWB(((__EXT2__OHE *)__tmp__IU1B));
  __tmp__3U1B=create_with_capacity__JBF( 32);
  buf__EU1B=__tmp__3U1B;
  __tmp__PU1B=(__UINTEGER_32__U)(__tmp__YU1B + 32);
  Self__1K2B=__tmp__YU1B;
  while ((Self__1K2B <= __tmp__PU1B)) {
    add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buf__EU1B),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__AU1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )Self__1K2B)]);
    Self__1K2B=(__UINTEGER_32__U)(Self__1K2B + 1);
  };
  __tmp__LJ2B=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__3U1B))).storage__1MT);
  __tmp__PU1B=(__UINTEGER_32__U)(__tmp__WU1B << 7);
  set_block__L5VB(((__EXT2__OHE *)__tmp__IU1B),(__UINTEGER_32__U)(((__GROUP_DESCRIPTOR__OSRB *)__tmp__LJ2B)->bg_inode_table__RSRB + (__UINTEGER_32__U)(__tmp__PU1B / ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__IU1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))))));
  read__QCWB(((__EXT2__OHE *)__tmp__IU1B));
  __tmp__WU1B=(__UINTEGER_32__U)(__tmp__PU1B % ((__UINTEGER_32__U )(__INTEGER__K)( 1024 << ((__INTEGER__K )((__SUPERBLOCK__YFRB *)((__EXT2__OHE *)__tmp__IU1B)->parent_partition_ext2__XHE.superblock__MIRB)->s_log_block_size__5FRB))));
  __tmp__3U1B=create_with_capacity__JBF( 128);
  buf__EU1B=__tmp__3U1B;
  __tmp__PU1B=(__UINTEGER_32__U)(__tmp__WU1B + 128);
  __tmp__YU1B=__tmp__WU1B;
  __tmp__WU1B=(__UINTEGER_32__U)(__tmp__PU1B - 1);
  while ((__tmp__YU1B <= __tmp__WU1B)) {
    add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)buf__EU1B),((__UINTEGER_8__CD *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)partition__AU1B->parent_partition_ext2__XHE.parent_partition__WHE.buffer__VWBB))).storage__1MT)[((__INTEGER__K )__tmp__YU1B)]);
    __tmp__YU1B=(__UINTEGER_32__U)(__tmp__YU1B + 1);
  };
  Self__WT1B->parent_entry_ext2__FZQB.inode__FUQB=((void *)(*(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)__tmp__3U1B))).storage__1MT);
}

static void* get_partition__RE2B(void *e__TE2B)

{
  __INTEGER__K __tmp__CF2B;
  void *__tmp__HF2B;
  void *__tmp__JF2B,*Result__UE2B;
  copy__5RS(((__STRING__WH *)string_tmp__BHB),((__DIRECTORY_EXT2__QHE *)e__TE2B)->parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
  __tmp__CF2B=index_of__since__RJIB(((__STRING__WH *)string_tmp__BHB));
  keep_head__3CT(((__STRING__WH *)string_tmp__BHB),(__INTEGER__K)(__tmp__CF2B - 1));
  __tmp__HF2B=at__2KIB(((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG),string_tmp__BHB);
  if (__tmp__HF2B==((void *)0)) {
    __tmp__JF2B=((void *)0);
  } else {
    switch (((struct ___OBJ *)__tmp__HF2B)->__id) {
    case 5:
    case 7:
    case 14:
    case 8:
    case 12:
    case 15:
    case 16: {
      __tmp__JF2B=((void *)0);
    } break;
    case 9: {
      __tmp__JF2B=((void *)__tmp__HF2B);
    } break;
    case 10: {
      __tmp__JF2B=((void *)__tmp__HF2B);
    } break;
    case 11: {
      __tmp__JF2B=((void *)__tmp__HF2B);
    } break;
    case 13: {
      __tmp__JF2B=((void *)__tmp__HF2B);
    } break;
    }
  };
  if (((void *)__tmp__JF2B == (void *)((void *)0))) {
    print__SKC((&__string_9));
  };
  Result__UE2B=__tmp__JF2B;
  return(Result__UE2B);
}

static __MEMORY__0AB* new_page__DCJ()

{
  __UINTEGER_CPU__3AB __tmp__XCJ;
  __MEMORY__0AB *__tmp__QDJ,*Result__FCJ;
  if ((capacity_max__NCJ == 0)) {
                ;
    capacity_max__NCJ=((__UINTEGER_CPU__3AB ) 8388608);
    begin_memory__5AC=get_begin_memory__2FM;
    ;
  };
  __tmp__XCJ=(__UINTEGER_CPU__3AB)(nb_page__ZEF << 26);
  nb_page__ZEF=(__UINTEGER_CPU__3AB)(nb_page__ZEF - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 1)));
  if (((__UINTEGER_CPU__3AB)(__tmp__XCJ - (__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 67108864))) > capacity_max__NCJ)) {
    print__SKC((&__string_19));
    exit__I0();
  };
  __tmp__QDJ=((__MEMORY__0AB *)(void *)((unsigned long)begin_memory__5AC - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )__tmp__XCJ))));
  __tmp__QDJ->previous_linear__2AB=((void *)0);
  __tmp__QDJ->size_and_id__5AB=(__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 0)) - ((__UINTEGER_CPU__3AB ) 1)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB ) 2)) - ((__UINTEGER_CPU__3AB ) 1)))) - ((__UINTEGER_CPU__3AB ) 1))) - ((__UINTEGER_CPU__3AB ) 1)) & (__UINTEGER_CPU__3AB)((__UINTEGER_CPU__3AB)(((__UINTEGER_CPU__3AB ) 0) - ((__UINTEGER_CPU__3AB )(__INTEGER__K)( 67108864 - (__INTEGER__K)(((__INTEGER__K )(sizeof(void *))) + ((__INTEGER__K )(sizeof(unsigned long))))))) - ((__UINTEGER_CPU__3AB ) 1)))) - ((__UINTEGER_CPU__3AB ) 1));
  add_link_free__OMO(__tmp__QDJ);
  last_block[((__UINTEGER_CPU__3AB)(nb_page__ZEF - ((__UINTEGER_CPU__3AB ) 1)))] = (__tmp__QDJ);
  Result__FCJ=__tmp__QDJ;
  return(Result__FCJ);
}

static __UINTEGER_32__U read__size__S0G(__DRIVE__HPD *Self__T0G,__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *dest__U0G,__INTEGER__K s__V0G)

{
  __UINTEGER_32__U __tmp__X0G,nb_sec__T1H,__tmp__D2MC,__tmp__E2MC;
  __UINTEGER_32__U Result__W0G;
  __INTEGER__K __tmp__M1MC,__tmp__O1MC;
  __UINTEGER_16__5F val__N1MC;
  __UINTEGER_8__CD *buf_8__Y1H;
  __UINTEGER_16__5F *__tmp__N2H;
  __UINTEGER_32__U *__tmp__O2H;
  __UINTEGER_8__CD result__F2MC,result__G2MC;
  if (((struct ___OBJ *)Self__T0G->parent_controler__IPD)->__id==17) {
    if (((struct ___OBJ *)Self__T0G->parent_controler__IPD)->__id==17) {
      deferred__D2I(Self__T0G);
    } else {
      deferred__D2I(Self__T0G);
    };
    __tmp__X0G= 0;
  } else {
    buf_8__Y1H=((__UINTEGER_8__CD *) 10240);
    nb_sec__T1H=((__UINTEGER_32__U )s__V0G);
    do {
      __tmp__N2H=((__UINTEGER_16__5F *)buf_8__Y1H);
      __tmp__O2H=((__UINTEGER_32__U *)buf_8__Y1H);
      ax__KAB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(ax__KAB & 255) | 16896);
      dx__HJB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)(dx__HJB & 65280) | ((__UINTEGER_16__5F )Self__T0G->n_drive__EZG));
      ds__HBB= 640;
      si__SJB= 0;
      clear_all__CSO(((__UINTEGER_8__CD *) 10240), 2047);
      __tmp__N2H[ 0]= 16;
      __tmp__N2H[ 1]= 1;
      __tmp__N2H[ 2]= 512;
      __tmp__N2H[ 3]= 640;
      __tmp__O2H[ 2]=Self__T0G->cursor__R0G;
      __tmp__O2H[ 3]= 0;
      __tmp__M1MC=(__INTEGER__K)(top_stack__BKB - 1);
      top_stack__BKB=__tmp__M1MC;
      stack__MKB[__tmp__M1MC]=ax__KAB;
      val__N1MC=cx__EJB;
      __tmp__O1MC=(__INTEGER__K)(__tmp__M1MC - 1);
      top_stack__BKB=__tmp__O1MC;
      stack__MKB[__tmp__O1MC]=val__N1MC;
      __tmp__M1MC=(__INTEGER__K)(__tmp__O1MC - 1);
      top_stack__BKB=__tmp__M1MC;
      stack__MKB[__tmp__M1MC]=dx__HJB;
      val__N1MC=bx__KJB;
      __tmp__O1MC=(__INTEGER__K)(__tmp__M1MC - 1);
      top_stack__BKB=__tmp__O1MC;
      stack__MKB[__tmp__O1MC]=val__N1MC;
      __tmp__M1MC=(__INTEGER__K)(__tmp__O1MC - 1);
      top_stack__BKB=__tmp__M1MC;
      stack__MKB[__tmp__M1MC]= 0;
      val__N1MC=bp__PJB;
      __tmp__O1MC=(__INTEGER__K)(__tmp__M1MC - 1);
      top_stack__BKB=__tmp__O1MC;
      stack__MKB[__tmp__O1MC]=val__N1MC;
      __tmp__M1MC=(__INTEGER__K)(__tmp__O1MC - 1);
      top_stack__BKB=__tmp__M1MC;
      stack__MKB[__tmp__M1MC]=si__SJB;
      val__N1MC=di__VJB;
      __tmp__O1MC=(__INTEGER__K)(__tmp__M1MC - 1);
      top_stack__BKB=__tmp__O1MC;
      stack__MKB[__tmp__O1MC]=val__N1MC;
      val__N1MC=es__EBB;
      __tmp__M1MC=(__INTEGER__K)(__tmp__O1MC - 1);
      top_stack__BKB=__tmp__M1MC;
      stack__MKB[__tmp__M1MC]=val__N1MC;
      __tmp__O1MC=(__INTEGER__K)(__tmp__M1MC - 1);
      top_stack__BKB=__tmp__O1MC;
      stack__MKB[__tmp__O1MC]=ds__HBB;
      val__N1MC=flags__KBB;
      __tmp__M1MC=(__INTEGER__K)(__tmp__O1MC - 1);
      top_stack__BKB=__tmp__M1MC;
      stack__MKB[__tmp__M1MC]=val__N1MC;
      __tmp__O1MC=(__INTEGER__K)(__tmp__M1MC - 1);
      top_stack__BKB=__tmp__O1MC;
      stack__MKB[__tmp__O1MC]= 19;
      asm volatile ("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x08        \n": : "g" ((((__UINTEGER_32__U )idtr_mem__1KB))) : "eax", "memory");



      __tmp__D2MC=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )idtr_mem__1KB[ 2]) << 16) | ((__UINTEGER_32__U )idtr_mem__1KB[ 1]));
      asm("CLI");
      __tmp__E2MC=((__UINTEGER_32__U )idtr_mem__1KB);
      idtr_mem__1KB[ 2]= 0;
      idtr_mem__1KB[ 1]= 0;
      idtr_mem__1KB[ 0]= 1023;
      asm("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x18        \n": : "g" ((__tmp__E2MC)) : "eax");



      { unsigned short port;
       volatile unsigned short val;

       port=( 33);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
      result__F2MC=((__UINTEGER_8__CD )(val));
      };
      { unsigned short port;
       volatile unsigned short val;

       port=( 161);
       asm("movw %1,%%dx   \n	    inb %%dx,%%al  \n	    movw %%ax,%0  ": "=m"(val) : "m"(port) : "dx","ax");


     ;
      result__G2MC=((__UINTEGER_8__CD )(val));
      };
      { unsigned short port;
       unsigned short val;

       port=( 32);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 160);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 8);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 112);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 4);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 2);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 0);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 158);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };

    asm("                       \n      .byte 0x9A		\n      .long 0x1000		\n      .word 0x08		\n": : : "memory");



    ;
      { unsigned short port;
       unsigned short val;

       port=( 32);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 160);
       val =( 17);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 32);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 40);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 4);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 2);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =( 1);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 33);
       val =(result__F2MC);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      { unsigned short port;
       unsigned short val;

       port=( 161);
       val =(result__G2MC);
       asm("movw %0,%%dx    \n            movw %1,%%ax    \n            outb %%al,%%dx  ": : "m"(port), "m"(val) : "dx","ax");


     };
      __tmp__E2MC=((__UINTEGER_32__U )idtr_mem__1KB);
      idtr_mem__1KB[ 2]=((__UINTEGER_16__5F )(__UINTEGER_32__U)(__tmp__D2MC >> 16));
      idtr_mem__1KB[ 1]=((__UINTEGER_16__5F )(__UINTEGER_32__U)(__tmp__D2MC & 65535));
      idtr_mem__1KB[ 0]= 2047;
      asm("movl %0,%%eax	\n      .byte 0x0F	\n      .byte 0x01	\n      .byte 0x18        \n": : "g" ((__tmp__E2MC)) : "eax");



      asm("STI");
      top_stack__BKB=(__INTEGER__K)(__tmp__O1MC + 1);
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      flags__KBB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      ds__HBB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      es__EBB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      di__VJB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      si__SJB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      bp__PJB=val__N1MC;
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      bx__KJB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      dx__HJB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      cx__EJB=val__N1MC;
      val__N1MC=stack__MKB[top_stack__BKB];
      top_stack__BKB=(__INTEGER__K)(top_stack__BKB + 1);
      ax__KAB=val__N1MC;
      __tmp__M1MC= 0;
      while ((__tmp__M1MC <= 511)) {
        add_last__O2T(((__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *)dest__U0G),buf_8__Y1H[(__INTEGER__K)( 512 + __tmp__M1MC)]);
        __tmp__M1MC=(__INTEGER__K)(__tmp__M1MC + 1);
      };
      Self__T0G->cursor__R0G=(__UINTEGER_32__U)(Self__T0G->cursor__R0G + 1);
      nb_sec__T1H=(__UINTEGER_32__U)(nb_sec__T1H - 1);
    } while ((nb_sec__T1H != 0));
    __tmp__X0G=((__UINTEGER_32__U )s__V0G);
  };
  Result__W0G=__tmp__X0G;
  return(Result__W0G);
}

static void set_capacity__L3CB(__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *Self__M3CB,__INTEGER__K new_capacity__N3CB)

{
  __POINTER__GB __tmp__0IMC;
  __UINTEGER_8__CD *__tmp__1IMC;
  if ((new_capacity__N3CB > (*(Self__M3CB)).capacity__KLT)) {
    if (((*(Self__M3CB)).capacity__KLT == 0)) {
      __tmp__0IMC=alloc_dynamic__52B(((__UINTEGER_CPU__3AB )new_capacity__N3CB));
      __tmp__1IMC=((__UINTEGER_8__CD *)__tmp__0IMC);
      clear_all__CSO(__tmp__1IMC,(__INTEGER__K)(new_capacity__N3CB - 1));
      (*(Self__M3CB)).storage__1MT=__tmp__1IMC;
    } else {
      __tmp__1IMC=realloc__with__LA0(((__UINTEGER_8__CD *)(*(Self__M3CB)).storage__1MT),(*(Self__M3CB)).capacity__KLT,new_capacity__N3CB);
      (*(Self__M3CB)).storage__1MT=__tmp__1IMC;
    };
    (*(Self__M3CB)).capacity__KLT=new_capacity__N3CB;
  };
}

static void add_part__with__BX3(__FILE_SYSTEM__2B *Self__CX3,void *new_part__DX3)

{
  __FAT12__UFE *Self__TNCB;
  __DATE__YNCB __tmp__BOCB;
  __TIME__UNCB __tmp__POCB;
  __UINTEGER_32__U c__42JC;
  __FAT16__OGE *Self__G4QB;
  __FAT32__4GE *Self__C5QB;
  __EXT2__OHE *Self__45QB;
  __STRING_CONSTANT__Y *__tmp__WQRB,*__tmp__5QRB;
  __INTEGER__K __tmp__0BLC,__tmp__YQRB,idx__JC5;
  __CHARACTER__BB *__tmp__FRRB;
  __HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *Self__5B5;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *node__KC5;
  __HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *__tmp__ZD5;
  __BOOLEAN__C __tmp__3C5,__tmp__0C5;
  __LINKED_LISToENTRYo__AH *Self__NE5;
  __LINKED_LIST_NODEoENTRYo__HGX *__tmp__WE5;
  switch (((struct ___OBJ *)new_part__DX3)->__id) {
  case 9: {
    Self__TNCB=((__FAT12__UFE *)new_part__DX3);
    __tmp__BOCB=((__DATE__YNCB ) 131598134);
    __tmp__POCB=((__TIME__UNCB ) 18619904);
    set_name__OCDB();
    (&SFN_FAT__BVBB_)->attr__OVBB=(__UINTEGER_8__CD)((&SFN_FAT__BVBB_)->attr__OVBB | 16);
    c__42JC=Self__TNCB->parent_fat__5FE.root_block__ANCB;
    (&SFN_FAT__BVBB_)->cluster__XVBB=((__UINTEGER_16__5F )(__UINTEGER_32__U)(c__42JC & 65535));
    (&SFN_FAT__BVBB_)->high_cluster__UVBB=((__UINTEGER_16__5F )(__UINTEGER_32__U)(c__42JC >> 16));
    (&SFN_FAT__BVBB_)->fat_creation_time__RVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) >> 24))) << 11) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 16711680) >> 16))) << 5)) | ((__UINTEGER_16__5F )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 65280) >> 8)) >> 1)));
    (&SFN_FAT__BVBB_)->fat_creation_time_ms__QVBB= 0;
    (&SFN_FAT__BVBB_)->fat_creation_date__SVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    (&SFN_FAT__BVBB_)->fat_access_date__TVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    (&SFN_FAT__BVBB_)->fat_update_time__VVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) >> 24))) << 11) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 16711680) >> 16))) << 5)) | ((__UINTEGER_16__5F )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 65280) >> 8)) >> 1)));
    (&SFN_FAT__BVBB_)->fat_update_date__WVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    copy__3QEB(((__STRING__WH *)string_tmp__BHB),(&__string_7));
    add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
    name_in__PSEB((&SFN_FAT__BVBB_),string_tmp__BHB);
    reduce_path__IUEB(string_tmp__BHB);
    set_path__I1EB(Self__TNCB,string_tmp__BHB);
    Self__TNCB->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.position__LWBB=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(&SFN_FAT__BVBB_)->high_cluster__UVBB) << 16) | ((__UINTEGER_32__U )(&SFN_FAT__BVBB_)->cluster__XVBB));
    open__0UBB(Self__TNCB);
  } break;
  case 10: {
    Self__G4QB=((__FAT16__OGE *)new_part__DX3);
    __tmp__BOCB=((__DATE__YNCB ) 131598134);
    __tmp__POCB=((__TIME__UNCB ) 18619904);
    set_name__OCDB();
    (&SFN_FAT__BVBB_)->attr__OVBB=(__UINTEGER_8__CD)((&SFN_FAT__BVBB_)->attr__OVBB | 16);
    c__42JC=Self__G4QB->parent_fat__PGE.root_block__ANCB;
    (&SFN_FAT__BVBB_)->cluster__XVBB=((__UINTEGER_16__5F )(__UINTEGER_32__U)(c__42JC & 65535));
    (&SFN_FAT__BVBB_)->high_cluster__UVBB=((__UINTEGER_16__5F )(__UINTEGER_32__U)(c__42JC >> 16));
    (&SFN_FAT__BVBB_)->fat_creation_time__RVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) >> 24))) << 11) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 16711680) >> 16))) << 5)) | ((__UINTEGER_16__5F )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 65280) >> 8)) >> 1)));
    (&SFN_FAT__BVBB_)->fat_creation_time_ms__QVBB= 0;
    (&SFN_FAT__BVBB_)->fat_creation_date__SVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    (&SFN_FAT__BVBB_)->fat_access_date__TVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    (&SFN_FAT__BVBB_)->fat_update_time__VVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) >> 24))) << 11) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 16711680) >> 16))) << 5)) | ((__UINTEGER_16__5F )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 65280) >> 8)) >> 1)));
    (&SFN_FAT__BVBB_)->fat_update_date__WVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    copy__3QEB(((__STRING__WH *)string_tmp__BHB),(&__string_7));
    add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
    name_in__PSEB((&SFN_FAT__BVBB_),string_tmp__BHB);
    reduce_path__NBSB(string_tmp__BHB);
    set_path__NISB(Self__G4QB,string_tmp__BHB);
    Self__G4QB->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.position__LWBB=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(&SFN_FAT__BVBB_)->high_cluster__UVBB) << 16) | ((__UINTEGER_32__U )(&SFN_FAT__BVBB_)->cluster__XVBB));
    open__BGQB(Self__G4QB);
  } break;
  case 11: {
    Self__C5QB=((__FAT32__4GE *)new_part__DX3);
    __tmp__BOCB=((__DATE__YNCB ) 131598134);
    __tmp__POCB=((__TIME__UNCB ) 18619904);
    set_name__OCDB();
    (&SFN_FAT__BVBB_)->attr__OVBB=(__UINTEGER_8__CD)((&SFN_FAT__BVBB_)->attr__OVBB | 16);
    c__42JC=Self__C5QB->parent_fat__5GE.root_block__ANCB;
    (&SFN_FAT__BVBB_)->cluster__XVBB=((__UINTEGER_16__5F )(__UINTEGER_32__U)(c__42JC & 65535));
    (&SFN_FAT__BVBB_)->high_cluster__UVBB=((__UINTEGER_16__5F )(__UINTEGER_32__U)(c__42JC >> 16));
    (&SFN_FAT__BVBB_)->fat_creation_time__RVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) >> 24))) << 11) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 16711680) >> 16))) << 5)) | ((__UINTEGER_16__5F )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 65280) >> 8)) >> 1)));
    (&SFN_FAT__BVBB_)->fat_creation_time_ms__QVBB= 0;
    (&SFN_FAT__BVBB_)->fat_creation_date__SVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    (&SFN_FAT__BVBB_)->fat_access_date__TVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    (&SFN_FAT__BVBB_)->fat_update_time__VVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) >> 24))) << 11) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 16711680) >> 16))) << 5)) | ((__UINTEGER_16__5F )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__POCB) & 65280) >> 8)) >> 1)));
    (&SFN_FAT__BVBB_)->fat_update_date__WVBB=(__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)((__UINTEGER_16__5F)(((__UINTEGER_16__5F )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) >> 16)) - 1980) << 9) | (__UINTEGER_16__5F)(((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 65280) >> 8))) << 5)) | ((__UINTEGER_16__5F )((__UINTEGER_8__CD )(__UINTEGER_32__U)(((__UINTEGER_32__U )__tmp__BOCB) & 31))));
    copy__3QEB(((__STRING__WH *)string_tmp__BHB),(&__string_7));
    add_last__KTS(((__STRING__WH *)string_tmp__BHB),'/');
    name_in__PSEB((&SFN_FAT__BVBB_),string_tmp__BHB);
    reduce_path__LKSB(string_tmp__BHB);
    set_path__LRSB(Self__C5QB,string_tmp__BHB);
    Self__C5QB->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.position__LWBB=(__UINTEGER_32__U)((__UINTEGER_32__U)(((__UINTEGER_32__U )(&SFN_FAT__BVBB_)->high_cluster__UVBB) << 16) | ((__UINTEGER_32__U )(&SFN_FAT__BVBB_)->cluster__XVBB));
    open__XLQB(Self__C5QB);
  } break;
  case 13: {
    Self__45QB=((__EXT2__OHE *)new_part__DX3);
    __tmp__WQRB=create_copy__KXD((&__string_20));
    Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG=__tmp__WQRB;
    __tmp__WQRB=((__STRING_CONSTANT__Y *)Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG);
    __tmp__0BLC=fast_reverse_index_of__from__TAW(((__CHARACTER__BB *)__tmp__WQRB->storage__MC),(__INTEGER__K)(__tmp__WQRB->count__LC - 1));
    __tmp__YQRB=(__INTEGER__K)( 1 + __tmp__0BLC);
    if (((void *)Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD == (void *)((void *)0))) {
      __tmp__5QRB=clone__T2N();
      Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD=__tmp__5QRB;
    };
    __tmp__WQRB=Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.name__NOD;
    __tmp__FRRB=((__CHARACTER__BB *)(void *)((unsigned long)((__POINTER__GB )((__CHARACTER__BB *)Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG->storage__MC)) - (unsigned long)(void *)((unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB ) 0)) - (unsigned long)((__POINTER__GB )((__UINTEGER_CPU__3AB )__tmp__YQRB)))));
    __tmp__0BLC=(__INTEGER__K)(Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG->count__LC - __tmp__YQRB);
    __tmp__5QRB=((__STRING_CONSTANT__Y *)__tmp__WQRB);
    __tmp__5QRB->storage__MC=__tmp__FRRB;
    __tmp__5QRB->count__LC=__tmp__0BLC;
    Self__45QB->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.no_inode__SRRB= 2;
    make_inode__4RRB(Self__45QB);
  } break;
  };
  switch (((struct ___OBJ *)new_part__DX3)->__id) {
  case 9: {
    __tmp__WQRB=((__FAT12__UFE *)new_part__DX3)->parent_fat__5FE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
  } break;
  case 10: {
    __tmp__WQRB=((__FAT16__OGE *)new_part__DX3)->parent_fat__PGE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
  } break;
  case 11: {
    __tmp__WQRB=((__FAT32__4GE *)new_part__DX3)->parent_fat__5GE.parent_partition__4FE.parent_directory_fat__2FE.parent_entry_fat__0FE.parent_abstract_entry__ZFE.path__YG;
  } break;
  case 13: {
    __tmp__WQRB=((__EXT2__OHE *)new_part__DX3)->parent_partition_ext2__XHE.parent_directory_ext2__VHE.parent_entry_ext2__THE.parent_abstract_entry__SHE.path__YG;
  } break;
  };
  Self__5B5=((__HASHED_DICTIONARYoENTRYxABSTRACT_STRINGo__OG *)alias__WG);
  __tmp__5QRB=__tmp__WQRB;
  __tmp__0BLC=hash_code__BQT(((__STRING_CONSTANT__Y *)__tmp__WQRB));
  __tmp__YQRB=(__INTEGER__K)(__tmp__0BLC % Self__5B5->capacity__W3F);
  idx__JC5=__tmp__YQRB;
  node__KC5=((void **)Self__5B5->buckets__43F)[__tmp__YQRB];
  until_do__FCAB:
  {
    if (((void *)node__KC5 == (void *)((void *)0))) {
      __tmp__3C5=1;
    } else {
      __tmp__0C5=__infix_equal_equal__2YAB(((__STRING_CONSTANT__Y *)node__KC5->key__K4F),__tmp__5QRB);
      __tmp__3C5=__tmp__0C5;
    };
    if ((! __tmp__3C5)) {
      node__KC5=node__KC5->next__W4F;
      goto until_do__FCAB;
    };
  };
  if (((void *)node__KC5 == (void *)((void *)0))) {
    if ((Self__5B5->capacity__W3F == Self__5B5->count__3BG)) {
      increase_capacity__PXL(Self__5B5);
      idx__JC5=(__INTEGER__K)(__tmp__0BLC % Self__5B5->capacity__W3F);
    };
    __tmp__ZD5=new_node__to__next__UIJ(new_part__DX3,__tmp__WQRB,((void **)Self__5B5->buckets__43F)[idx__JC5]);
    node__KC5=__tmp__ZD5;
    ((void **)Self__5B5->buckets__43F)[idx__JC5]=__tmp__ZD5;
    Self__5B5->count__3BG=(__INTEGER__K)(Self__5B5->count__3BG + 1);
  } else {
    ((__HASHED_DICTIONARY_NODEoENTRYxABSTRACT_STRINGo__P3F *)node__KC5)->item__44F=new_part__DX3;
  };
  Self__NE5=((__LINKED_LISToENTRYo__AH *)Self__CX3->parent_directory__4B.list__GH);
  if (((void *)Self__NE5->first_link__LGX == (void *)((void *)0))) {
    __tmp__WE5=create__next__CWAB(new_part__DX3);
    Self__NE5->first_link__LGX=__tmp__WE5;
    Self__NE5->parent_linked_collection__FH.upper__BKK= 1;
    Self__NE5->last_link__UGX=__tmp__WE5;
    Self__NE5->mem_idx__SGX= 1;
    Self__NE5->mem_lnk__TGX=__tmp__WE5;
  } else {
    __tmp__WE5=create__next__CWAB(new_part__DX3);
    ((__LINKED_LIST_NODEoENTRYo__HGX *)Self__NE5->last_link__UGX)->next__5GBB=__tmp__WE5;
    Self__NE5->parent_linked_collection__FH.upper__BKK=(__INTEGER__K)(Self__NE5->parent_linked_collection__FH.upper__BKK + 1);
    Self__NE5->last_link__UGX=__tmp__WE5;
  };
}

static void add_last__O2T(__FAST_ARRAYoExpanded_UINTEGER_8o__LDE *Self__P2T,__UINTEGER_8__CD element__Q2T)

{
  __POINTER__GB __tmp__DJMC;
  __INTEGER__K __tmp__R3T;
  __BOOLEAN__C __tmp__42T;
  __UINTEGER_8__CD *__tmp__EJMC;
  if (((__INTEGER__K)((*(Self__P2T)).upper__4KT + 1) < (*(Self__P2T)).capacity__KLT)) {
    (*(Self__P2T)).upper__4KT=(__INTEGER__K)((*(Self__P2T)).upper__4KT + 1);
    __tmp__42T=1;
  } else {
    __tmp__42T=0;
  };
  if ((! __tmp__42T)) {
    if (((*(Self__P2T)).capacity__KLT == 0)) {
      __tmp__DJMC=alloc_dynamic__52B(((__UINTEGER_CPU__3AB ) 2));
      __tmp__EJMC=((__UINTEGER_8__CD *)__tmp__DJMC);
      clear_all__CSO(__tmp__EJMC, 1);
      (*(Self__P2T)).storage__1MT=__tmp__EJMC;
      (*(Self__P2T)).capacity__KLT= 2;
      (*(Self__P2T)).upper__4KT= 0;
    } else {
      __tmp__R3T=(__INTEGER__K)((*(Self__P2T)).capacity__KLT << 1);
      __tmp__EJMC=realloc__with__LA0(((__UINTEGER_8__CD *)(*(Self__P2T)).storage__1MT),(*(Self__P2T)).capacity__KLT,__tmp__R3T);
      (*(Self__P2T)).storage__1MT=__tmp__EJMC;
      (*(Self__P2T)).capacity__KLT=__tmp__R3T;
      (*(Self__P2T)).upper__4KT=(__INTEGER__K)((*(Self__P2T)).upper__4KT + 1);
    };
  };
  ((__UINTEGER_8__CD *)(*(Self__P2T)).storage__1MT)[(*(Self__P2T)).upper__4KT]=element__Q2T;
}

static void copy__3QEB(__STRING__WH *Self__4QEB,__STRING_CONSTANT__Y *other__5QEB)

{
  __CHARACTER__BB *__tmp__RREB;
  Self__4QEB->count__FK=other__5QEB->count__LC;
  if ((Self__4QEB->count__FK > 0)) {
    if ((Self__4QEB->capacity__KSS < Self__4QEB->count__FK)) {
      __tmp__RREB=create__MUX(Self__4QEB->count__FK);
      Self__4QEB->storage__VSS=__tmp__RREB;
      Self__4QEB->capacity__KSS=Self__4QEB->count__FK;
    };
    copy_from__until__3UX(((__CHARACTER__BB *)Self__4QEB->storage__VSS),other__5QEB->storage__MC,(__INTEGER__K)(Self__4QEB->count__FK - 1));
  };
}

static void deferred__D2I(__DRIVE__HPD *Self__E2I)

{
  if (((struct ___OBJ *)Self__E2I->parent_controler__IPD)->__id==17) {
  };
  if (((struct ___OBJ *)Self__E2I->parent_controler__IPD)->__id==17) {
    crash_on__with_message__KMK(Self__E2I);
  } else {
    crash_on__with_message__KMK(Self__E2I);
  };
}

static __UINTEGER_8__CD* realloc__with__LA0(__UINTEGER_8__CD *Self__MA0,__INTEGER__K old_nb_elts__NA0,__INTEGER__K new_nb_elts__OA0)

{
  __POINTER__GB __tmp__RB0;
  __INTEGER__K __tmp__XB0,Self__4E3;
  __UINTEGER_8__CD *__tmp__WB0,*Result__PA0;
  __tmp__RB0=realloc_dynamic__old_size__new_size__VJ0(((__POINTER__GB )Self__MA0),((__UINTEGER_CPU__3AB )old_nb_elts__NA0),((__UINTEGER_CPU__3AB )new_nb_elts__OA0));
  __tmp__WB0=((__UINTEGER_8__CD *)__tmp__RB0);
  __tmp__XB0=(__INTEGER__K)(new_nb_elts__OA0 - 1);
  Self__4E3=old_nb_elts__NA0;
  while ((Self__4E3 <= __tmp__XB0)) {
    __tmp__WB0[Self__4E3]= 0;
    Self__4E3=(__INTEGER__K)(Self__4E3 + 1);
  };
  Result__PA0=__tmp__WB0;
  return(Result__PA0);
}

static void set_name__OCDB()

{
  __INTEGER__K k__TCDB,Self__MNEB;
  __CHARACTER__BB car__SCDB,__tmp__RDDB;
  __CHARACTER__BB *name_raw__RCDB;
  car__SCDB='\0';
  name_raw__RCDB=((__CHARACTER__BB *)(&SFN_FAT__BVBB_));
  k__TCDB= 1;
  Self__MNEB= 0;
  while ((Self__MNEB <= 7)) {
    if ((k__TCDB > (&__string_21)->count__LC)) {
      car__SCDB=' ';
    } else {
      __tmp__RDDB=to_upper__55IB(((__CHARACTER__BB *)(&__string_21)->storage__MC)[(__INTEGER__K)(k__TCDB - 1)]);
      car__SCDB=__tmp__RDDB;
    };
    if ((car__SCDB == '.')) {
      name_raw__RCDB[Self__MNEB]=' ';
    } else {
      name_raw__RCDB[Self__MNEB]=car__SCDB;
      k__TCDB=(__INTEGER__K)(k__TCDB + 1);
    };
    Self__MNEB=(__INTEGER__K)(Self__MNEB + 1);
  };
  if ((car__SCDB == '.')) {
    k__TCDB=(__INTEGER__K)(k__TCDB + 1);
  };
  Self__MNEB= 8;
  while ((Self__MNEB <= 10)) {
    if ((k__TCDB > (&__string_21)->count__LC)) {
      car__SCDB=' ';
    } else {
      __tmp__RDDB=to_upper__55IB(((__CHARACTER__BB *)(&__string_21)->storage__MC)[(__INTEGER__K)(k__TCDB - 1)]);
      car__SCDB=__tmp__RDDB;
    };
    if ((car__SCDB == '.')) {
      name_raw__RCDB[Self__MNEB]=' ';
    } else {
      name_raw__RCDB[Self__MNEB]=car__SCDB;
      k__TCDB=(__INTEGER__K)(k__TCDB + 1);
    };
    Self__MNEB=(__INTEGER__K)(Self__MNEB + 1);
  };
}

static void crash_on__with_message__KMK(__DRIVE__HPD *Self__LMK)

{
  if (((struct ___OBJ *)Self__LMK->parent_controler__IPD)->__id==17) {
    print_runtime_stack_on__OJL(Self__LMK);
  } else {
    print_runtime_stack_on__OJL(Self__LMK);
  };
  print__SKC((&__string_22));
  put_character__UKC('\n');
  if (((struct ___OBJ *)Self__LMK->parent_controler__IPD)->__id==17) {
  };
  if (((struct ___OBJ *)Self__LMK->parent_controler__IPD)->__id==17) {
    exit__I0();
  } else {
    exit__I0();
  };
}

static __CHARACTER__BB to_upper__55IB(__CHARACTER__BB Self__AAJB)

{
  __CHARACTER__BB result__CAJB,Result__BAJB;
  result__CAJB='\0';
  if (((((__UINTEGER_8__CD )Self__AAJB) < 97) || (((__UINTEGER_8__CD )Self__AAJB) > 122))) {
    result__CAJB=Self__AAJB;
  } else {
    result__CAJB=((__CHARACTER__BB )(__UINTEGER_8__CD)(((__UINTEGER_8__CD )Self__AAJB) - 32));
  };
  Result__BAJB=result__CAJB;
  return(Result__BAJB);
}

static void print_runtime_stack_on__OJL(__DRIVE__HPD *Self__PJL)

{
  if (((struct ___OBJ *)Self__PJL->parent_controler__IPD)->__id==17) {
  };
}
