#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 37 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 120
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 135
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 283
#line 279
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 44 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 128
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 143
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h" 3
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 262 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 67 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h" 3
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 102
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 134
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 201
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 31 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 76
#line 65
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 32 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 50 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 53
typedef union __nesc_unnamed4252 {

  char __size[56];
  long int __align;
} pthread_attr_t;







#line 61
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 104
#line 76
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
  } 








  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 106
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 130
#line 115
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 132
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 189
#line 150
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
#line 187
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 191
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 206
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 212
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x2b5ed5aea1f0, const void *arg_0x2b5ed5aea4c8);
#line 776
__extension__ 
#line 793
__extension__ 
# 31 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 110 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 155
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 186
extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 252
extern double erfc(double arg_0x2b5ed5b6c9c8) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 203 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 303
#line 296
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 321
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 48 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h" 3
#line 22
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#line 53
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 172 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 172
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 208
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 273
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 366
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 80 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 111
typedef _G_fpos_t fpos_t;
#line 169
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 243
extern int fflush(FILE *__stream);
#line 307
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 357
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 387
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 855
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 57 "/opt/tinyos-2.1.1/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 68
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 43 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 42 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 45 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 57 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 89 "/opt/tinyos-2.1.1/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 90
struct __nesc_attr_atleastonce {
};
#line 91
struct __nesc_attr_exactlyonce {
};
# 9 "/opt/tinyos-2.1.1/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x2b5ed5dba868), 
int (*key_eq_fn)(void *arg_0x2b5ed5db9020, void *arg_0x2b5ed5db92c0));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 39 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 43
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 48
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 341U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 76
static void fillInOutput(int id, char *name);
#line 151
static inline void sim_log_init();
#line 164
static inline void sim_log_add_channel(char *name, FILE *file);
#line 204
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 226
static void sim_log_commit_change();
#line 238
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 253
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 268
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 298
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 54 "/opt/tinyos-2.1.1/tos/lib/tossim/heap.h"
#line 50
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 47 "/opt/tinyos-2.1.1/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 51
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 103
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 119
static inline void expand_heap(heap_t *heap);
#line 133
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 147
static void swap(node_t *first, node_t *second);
#line 160
static void down_heap(heap_t *heap, int findex);
#line 186
static void up_heap(heap_t *heap, int findex);
# 36 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 43 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 56
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 75
#line 65
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 43 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 72
void sim_end()   ;





int sim_random()   ;
#line 94
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 148
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 171
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 91 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 36 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_gain.h"
#line 45
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/opt/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 233 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/opt/tinyos-2.1.1/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x2b5ed5fa9288, int arg_0x2b5ed5fa94f0);
static double RandomUniform(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 76
void sim_noise_create_model(uint16_t node_id)   ;
#line 89
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 105
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 184
void sim_noise_dist(uint16_t node_id)   ;
#line 237
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 275
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 356
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 411
void makeNoiseModel(uint16_t node_id)   ;
# 51 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 51
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/opt/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 72 "/opt/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 44 "/opt/tinyos-2.1.1/tos/lib/tossim/platform_message.h"
#line 41
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 46
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 50
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 40 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 32 "/opt/tinyos-2.1.1/tos/types/Leds.h"
enum __nesc_unnamed4280 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 42 "/opt/tinyos-2.1.1/tos/lib/net/matrix/Collection.h"
enum __nesc_unnamed4281 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 51 "/opt/tinyos-2.1.1/tos/lib/net/matrix/Ctp.h"
enum __nesc_unnamed4282 {

  AM_CTP_ROUTING = 0x70, 
  AM_CTP_DATA = 0x71, 
  AM_CTP_DEBUG = 0x72, 


  CTP_OPT_PULL = 0x80, 
  CTP_OPT_ECN = 0x40, 
  CTP_OPT_ALL = 0xff, 

  AM_Matrix_CONTROL = 0xf0, 
  AM_Matrix_BEACON = 0xf1, 
  AM_Matrix_DATA = 0xf2
};

typedef nx_uint8_t nx_ctp_options_t;
typedef uint8_t ctp_options_t;

typedef nx_uint8_t nx_Matrix_options_t;
typedef uint8_t Matrix_options_t;
#line 84
#line 73
typedef nx_struct __nesc_unnamed4283 {
  nx_ctp_options_t options;
  nx_uint8_t bdt;
  nx_uint16_t ip;
  nx_uint16_t ipOrigin;
  nx_uint8_t thl;
  nx_uint16_t etx;
  nx_am_addr_t origin;
  nx_uint8_t originSeqNo;
  nx_collection_id_t type;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_data_header_t;






#line 86
typedef nx_struct __nesc_unnamed4284 {
  nx_ctp_options_t options;
  nx_am_addr_t parent;
  nx_uint16_t etx;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_routing_header_t;





#line 93
typedef nx_struct __nesc_unnamed4285 {
  nx_Matrix_options_t options;
  nx_uint16_t ip_node;
  nx_uint16_t data;
} __attribute__((packed)) Matrix_routing_header_t;




#line 99
typedef nx_struct __nesc_unnamed4286 {
  nx_uint16_t ip;
  nx_uint16_t range;
} __attribute__((packed)) Matrix_beacon_header_t;
# 29 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4287 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4288 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4289 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4290 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4291 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 79
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 91
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 100
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 114
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4292 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 34 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4293 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4294 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4295 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4296 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4297 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4298 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4299 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4300 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4301 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4302 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4303 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/opt/tinyos-2.1.1/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4304 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 33 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 60 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngine.h"
enum __nesc_unnamed4305 {

  FORWARD_PACKET_TIME = 7
};




enum __nesc_unnamed4306 {
  SENDDONE_OK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_OK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_FAIL_OFFSET = FORWARD_PACKET_TIME << 2, 
  SENDDONE_FAIL_WINDOW = SENDDONE_FAIL_OFFSET, 
  LOOPY_OFFSET = FORWARD_PACKET_TIME << 2, 
  LOOPY_WINDOW = LOOPY_OFFSET, 
  CONGESTED_WAIT_OFFSET = FORWARD_PACKET_TIME << 2, 
  CONGESTED_WAIT_WINDOW = CONGESTED_WAIT_OFFSET, 
  NO_ROUTE_RETRY = 10000
};








enum __nesc_unnamed4307 {
  MAX_RETRIES = 30
};
#line 104
#line 100
typedef struct __nesc_unnamed4308 {
  message_t * msg;
  uint8_t client;
  uint8_t retries;
} fe_queue_entry_t;
# 7 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpDebugMsg.h"
enum __nesc_unnamed4309 {
  NET_C_DEBUG_STARTED = 0xDE, 

  NET_C_FE_MSG_POOL_EMPTY = 0x10, 
  NET_C_FE_SEND_QUEUE_FULL = 0x11, 
  NET_C_FE_NO_ROUTE = 0x12, 
  NET_C_FE_SUBSEND_OFF = 0x13, 
  NET_C_FE_SUBSEND_BUSY = 0x14, 
  NET_C_FE_BAD_SENDDONE = 0x15, 
  NET_C_FE_QENTRY_POOL_EMPTY = 0x16, 
  NET_C_FE_SUBSEND_SIZE = 0x17, 
  NET_C_FE_LOOP_DETECTED = 0x18, 
  NET_C_FE_SEND_BUSY = 0x19, 

  NET_C_FE_SENDQUEUE_EMPTY = 0x50, 
  NET_C_FE_PUT_MSGPOOL_ERR = 0x51, 
  NET_C_FE_PUT_QEPOOL_ERR = 0x52, 
  NET_C_FE_GET_MSGPOOL_ERR = 0x53, 
  NET_C_FE_GET_QEPOOL_ERR = 0x54, 
  NET_C_FE_QUEUE_SIZE = 0x55, 

  NET_C_FE_SENT_MSG = 0x20, 
  NET_C_FE_RCV_MSG = 0x21, 
  NET_C_FE_FWD_MSG = 0x22, 
  NET_C_FE_DST_MSG = 0x23, 
  NET_C_FE_SENDDONE_FAIL = 0x24, 
  NET_C_FE_SENDDONE_WAITACK = 0x25, 
  NET_C_FE_SENDDONE_FAIL_ACK_SEND = 0x26, 
  NET_C_FE_SENDDONE_FAIL_ACK_FWD = 0x27, 
  NET_C_FE_DUPLICATE_CACHE = 0x28, 
  NET_C_FE_DUPLICATE_QUEUE = 0x29, 
  NET_C_FE_DUPLICATE_CACHE_AT_SEND = 0x2A, 
  NET_C_FE_CONGESTION_SENDWAIT = 0x2B, 
  NET_C_FE_CONGESTION_BEGIN = 0x2C, 
  NET_C_FE_CONGESTION_END = 0x2D, 



  NET_C_FE_CONGESTED = 0x2E, 

  NET_C_TREE_NO_ROUTE = 0x30, 
  NET_C_TREE_NEW_PARENT = 0x31, 
  NET_C_TREE_ROUTE_INFO = 0x32, 
  NET_C_TREE_SENT_BEACON = 0x33, 
  NET_C_TREE_RCV_BEACON = 0x34, 

  NET_C_DBG_1 = 0x40, 
  NET_C_DBG_2 = 0x41, 
  NET_C_DBG_3 = 0x42
};
#line 79
#line 58
typedef nx_struct CollectionDebugMsg {
  nx_uint8_t type;
  nx_union __nesc_unnamed4310 {
    nx_uint16_t arg;
    nx_struct __nesc_unnamed4311 {
      nx_uint16_t msg_uid;
      nx_am_addr_t origin;
      nx_am_addr_t other_node;
    } __attribute__((packed)) msg;
    nx_struct __nesc_unnamed4312 {
      nx_am_addr_t parent;
      nx_uint8_t hopcount;
      nx_uint16_t metric;
    } __attribute__((packed)) route_info;
    nx_struct __nesc_unnamed4313 {
      nx_uint16_t a;
      nx_uint16_t b;
      nx_uint16_t c;
    } __attribute__((packed)) dbg;
  } __attribute__((packed)) data;
  nx_uint16_t seqno;
} __attribute__((packed)) CollectionDebugMsg;
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4314 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4315 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4316 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4317 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4318 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4321 {

  uint8_t flat;
  struct __nesc_unnamed4322 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4323 {

  uint8_t flat;
  struct __nesc_unnamed4324 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4325 {

  uint8_t flat;
  struct __nesc_unnamed4326 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4327 {

  uint8_t flat;
  struct __nesc_unnamed4328 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4329 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4330 {

  uint8_t flat;
  struct __nesc_unnamed4331 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4332 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4333 {

  uint8_t flat;
  struct __nesc_unnamed4334 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4335 {

  uint8_t flat;
  struct __nesc_unnamed4336 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4337 {

  uint8_t flat;
  struct __nesc_unnamed4338 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4339 {

  uint8_t flat;
  struct __nesc_unnamed4340 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 38 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/./LinkEstimator.h"
enum __nesc_unnamed4341 {


  NUM_ENTRIES_FLAG = 15
};
#line 54
#line 51
typedef nx_struct linkest_header {
  nx_uint8_t flags;
  nx_uint8_t seq;
} __attribute__((packed)) linkest_header_t;







#line 59
typedef nx_struct neighbor_stat_entry {
  nx_am_addr_t ll_addr;
  nx_uint8_t inquality;
} __attribute__((packed)) neighbor_stat_entry_t;




#line 65
typedef nx_struct linkest_footer {
  neighbor_stat_entry_t neighborList[1];
} __attribute__((packed)) linkest_footer_t;



enum __nesc_unnamed4342 {
  VALID_ENTRY = 0x1, 


  MATURE_ENTRY = 0x2, 


  INIT_ENTRY = 0x4, 


  PINNED_ENTRY = 0x8
};
#line 111
#line 86
typedef struct neighbor_table_entry {

  am_addr_t ll_addr;

  uint8_t lastseq;


  uint8_t rcvcnt;

  uint8_t failcnt;

  uint8_t flags;


  uint8_t inquality;


  uint16_t etx;



  uint8_t data_success;


  uint8_t data_total;
} neighbor_table_entry_t;
# 4 "/opt/tinyos-2.1.1/tos/lib/net/matrix/TreeRouting.h"
enum __nesc_unnamed4343 {
  AM_TREE_ROUTING_CONTROL = 0xCE, 
  BEACON_INTERVAL = 8192, 
  INVALID_ADDR = 0xFFFF, 
  ETX_THRESHOLD = 50, 
  PARENT_SWITCH_THRESHOLD = 15, 
  MAX_METRIC = 0xFFFF
};







#line 14
typedef struct __nesc_unnamed4344 {
  am_addr_t parent;
  uint16_t etx;
  bool haveHeard;
  bool congested;
} route_info_t;




#line 21
typedef struct __nesc_unnamed4345 {
  am_addr_t neighbor;
  route_info_t info;
} routing_table_entry;

static __inline void routeInfoInit(route_info_t *ri);
# 35 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRouting.h"
enum __nesc_unnamed4346 {


  MATRIX_BEACON_INTERVAL = 60000, 
  MATRIX_UPDATE_INTERVAL = 60000
};



enum __nesc_unnamed4347 {
  INVALID_ADDR_IP = 65535
};
#line 62
enum __nesc_unnamed4348 {

  R_MATRIX_ROUTING_PACKET_TIME = 7
};




enum __nesc_unnamed4349 {
  R_MATRIX_SENDDONE_OK_OFFSET = R_MATRIX_ROUTING_PACKET_TIME, 
  R_MATRIX_SENDDONE_OK_WINDOW = R_MATRIX_ROUTING_PACKET_TIME, 
  R_MATRIX_SENDDONE_NOACK_OFFSET = R_MATRIX_ROUTING_PACKET_TIME, 
  R_MATRIX_SENDDONE_NOACK_WINDOW = R_MATRIX_ROUTING_PACKET_TIME, 
  R_MATRIX_SENDDONE_FAIL_OFFSET = R_MATRIX_ROUTING_PACKET_TIME << 2, 
  R_MATRIX_SENDDONE_FAIL_WINDOW = R_MATRIX_SENDDONE_FAIL_OFFSET, 
  R_MATRIX_LOOPY_OFFSET = R_MATRIX_ROUTING_PACKET_TIME << 2, 
  R_MATRIX_LOOPY_WINDOW = R_MATRIX_LOOPY_OFFSET, 
  R_MATRIX_NO_ROUTE_RETRY = 10000
};







enum __nesc_unnamed4350 {
  R_MATRIX_MAX_RETRIES = 30
};






#line 93
typedef struct __nesc_unnamed4351 {
  uint16_t id;
  uint16_t ip;
  uint16_t downwards;
} table_entry;







#line 100
typedef struct __nesc_unnamed4352 {
  uint16_t id;
  uint16_t ip;
  uint16_t range;
  uint8_t valid;
} table_entry_temporary;
typedef TMilli ModuleTestC$timerThree$precision_tag;
typedef TMilli ModuleTestC$timerOne$precision_tag;
typedef TMilli ModuleTestC$timerTwo$precision_tag;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum CtpP$__nesc_unnamed4353 {
  CtpP$CLIENT_COUNT = 1U, CtpP$FORWARD_COUNT = 12, CtpP$TREE_ROUTING_TABLE_SIZE = 10, CtpP$QUEUE_SIZE = CtpP$CLIENT_COUNT + CtpP$FORWARD_COUNT, CtpP$CACHE_SIZE = 4, CtpP$TABLE_SIZE = 15, CtpP$TEMPORARYTABLE_SIZE = 5
};
typedef message_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$precision_tag;
typedef fe_queue_entry_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t;
typedef fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t;
typedef message_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t;
typedef message_t /*CtpP.MessagePoolP*/PoolC$0$pool_t;
typedef /*CtpP.MessagePoolP*/PoolC$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t;
typedef /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t;
typedef fe_queue_entry_t /*CtpP.QEntryPoolP*/PoolC$1$pool_t;
typedef /*CtpP.QEntryPoolP*/PoolC$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t;
typedef /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t;
typedef fe_queue_entry_t */*CtpP.SendQueueP*/QueueC$0$queue_t;
typedef /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$t;
typedef message_t */*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum AMQueueP$__nesc_unnamed4354 {
  AMQueueP$NUM_CLIENTS = 4U
};
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$precision_tag;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$precision_tag;
typedef TMilli /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$precision_tag;
typedef TMilli /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$precision_tag;
typedef TMilli /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$precision_tag;
typedef TMilli /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$precision_tag;
typedef TMilli /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$precision_tag;
typedef TMilli CoinC$RegularTimer$precision_tag;
typedef TMilli CoinC$RandomTimer$precision_tag;
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ModuleTestC$timerThree$fired(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void ModuleTestC$Boot$booted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void ModuleTestC$RadioControl$startDone(error_t error);
#line 117
static void ModuleTestC$RadioControl$stopDone(error_t error);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void ModuleTestC$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



ModuleTestC$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ModuleTestC$timerOne$fired(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void ModuleTestC$sendMessage$runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ModuleTestC$timerTwo$fired(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$SubInit$default$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );


static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 41 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2b5ed60cbab0);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 41 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2b5ed60cbab0);
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 36 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 40
static void SimMoteP$SimMote$turnOn(void );
#line 35
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 37
static long long int SimMoteP$SimMote$getStartTime(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 39 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed6430828, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

TossimActiveMessageC$AMSend$getPayload(
# 39 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed6430828, 
# 121 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t TossimActiveMessageC$AMSend$maxPayloadLength(
# 39 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed6430828);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 41 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed6439670, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


TossimActiveMessageC$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
#line 83
static void TossimActiveMessageC$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageC$Receive$default$receive(
# 40 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed643aa90, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 77 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 68
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void TossimActiveMessageC$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void TossimActiveMessageC$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 122
message_t * amsg);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 45 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0On(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
#line 109
static error_t TossimPacketModelC$Control$stop(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(
#line 42
message_t * msg);
#line 60
static error_t TossimPacketModelC$PacketAcknowledgements$noAck(
#line 54
message_t * msg);
#line 74
static bool TossimPacketModelC$PacketAcknowledgements$wasAcked(
#line 69
message_t * msg);
# 52 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 51
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 40
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 46 "/opt/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 50 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEvent(uint8_t type);
#line 62
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 43 "/opt/tinyos-2.1.1/tos/lib/net/CollectionPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg);
# 61 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 31 "/opt/tinyos-2.1.1/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(
# 114 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
collection_id_t arg_0x2b5ed66c8da8, 
# 20 "/opt/tinyos-2.1.1/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void );
#line 83
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(
# 113 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
collection_id_t arg_0x2b5ed66c8270, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$runTask(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(
# 111 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed66cb3f0, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(
# 111 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed66cb3f0, 
# 111 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(
# 111 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed66cb3f0);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(
# 111 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed66cb3f0, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t error);
#line 117
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t error);
# 100 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(
# 112 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
collection_id_t arg_0x2b5ed66ca648, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 7 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpCongestion.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void );
# 51 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void );
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt);





static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t etx);
#line 49
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t option);







static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg);








static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg);
#line 46
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t option);
#line 63
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIpOrigin(message_t *msg);
#line 60
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(message_t *msg);
#line 54
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg);
#line 69
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg);





static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2);
#line 61
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setIp(message_t *msg, uint16_t ip);










static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg);
#line 55
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "/opt/tinyos-2.1.1/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(
# 146 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed670fdc8);
# 97 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t * 


/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 61
static bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void );
#line 89
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(
#line 85
/*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$t * newVal);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void );
# 97 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t * 


/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void );
#line 61
static bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void );
#line 89
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(
#line 85
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$t * newVal);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$head(void );
#line 90
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(
#line 86
/*CtpP.SendQueueP*/QueueC$0$Queue$t  newVal);
#line 101
static 
#line 99
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx);
#line 65
static uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*CtpP.SendQueueP*/QueueC$0$Queue$t  

/*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void );







static uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void );
# 40 "/opt/tinyos-2.1.1/tos/interfaces/Cache.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t item);







static bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$t item);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 52
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 101
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 58
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b5ed6b6bc28);
# 81 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b5ed6b6bc28);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b5ed6b6bc28, 
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b5ed6b6bc28, 
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



LinkEstimatorP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor);
#line 44
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor);










static error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor);
#line 41
static error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 58
static error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 47
static error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 38
static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(uint16_t neighbor);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


LinkEstimatorP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t LinkEstimatorP$Packet$maxPayloadLength(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void LinkEstimatorP$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
#line 69
static error_t LinkEstimatorP$Send$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

LinkEstimatorP$Send$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t LinkEstimatorP$Send$maxPayloadLength(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LinkEstimatorP$Init$init(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorP$StdControl$start(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b5ed6d077d8, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b5ed6d085e8, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b5ed6d085e8, 
# 111 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b5ed6d085e8);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b5ed6d085e8, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void );
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void );
# 68 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 56
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 61 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
# 46 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingPacket.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t * msg, ctp_options_t opt);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error);
#line 117
static void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error);
# 83 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void );
#line 71
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );









static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);
#line 53
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getParent(am_addr_t *parent);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void );
#line 72
static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void );
# 51 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CompareBit.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void );
# 49 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void );
#line 48
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$maxPayloadLength(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$maxPayloadLength(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$fired(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 77 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixInfo.nc"
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighborsTemporary(void );
#line 75
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighbors(void );
# 100 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent);
# 39 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixUnicastNameFreeRouting.nc"
static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(uint16_t ip);
static am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(uint16_t ip);
#line 37
static uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$myIp(void );



static am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(uint16_t ip);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$startDone(error_t error);
#line 117
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$stopDone(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Init$init(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$fired(void );
#line 72
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$fired(void );
#line 72
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$fired(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$fired(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$StdControl$start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$runTask(void );
# 47 "/opt/tinyos-2.1.1/tos/interfaces/LinkPacketMetadata.nc"
static bool DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(
#line 44
message_t * msg);
# 46 "/opt/tinyos-2.1.1/tos/lib/net/CollectionId.nc"
static collection_id_t /*ModuleTestAppC.Sender.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void CoinC$RadioControl$startDone(error_t error);
#line 117
static void CoinC$RadioControl$stopDone(error_t error);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void CoinC$RegularTimer$fired(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t CoinC$CoinControl$start(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void CoinC$RandomTimer$fired(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
static bool ModuleTestC$RootControl$isRoot(void );
#line 41
static error_t ModuleTestC$RootControl$setRoot(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ModuleTestC$timerThree$startOneShot(uint32_t dt);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t ModuleTestC$RadioControl$start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t ModuleTestC$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

ModuleTestC$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 35 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint32_t ModuleTestC$Random$rand32(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t ModuleTestC$RoutingControl$start(void );
# 45 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void ModuleTestC$Leds$led0On(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t ModuleTestC$CoinControl$start(void );
# 66 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
static am_addr_t ModuleTestC$CtpPacket$getOrigin(message_t *msg);
#line 63
static uint16_t ModuleTestC$CtpPacket$getIpOrigin(message_t *msg);
#line 61
static void ModuleTestC$CtpPacket$setIp(message_t *msg, uint16_t ip);
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ModuleTestC$timerOne$startOneShot(uint32_t dt);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t ModuleTestC$sendMessage$postTask(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ModuleTestC$timerTwo$startOneShot(uint32_t dt);
# 112 "ModuleTestC.nc"
enum ModuleTestC$__nesc_unnamed4355 {
#line 112
  ModuleTestC$sendMessage = 0U
};
#line 112
typedef int ModuleTestC$__nesc_sillytask_sendMessage[ModuleTestC$sendMessage];
#line 24
message_t ModuleTestC$packet[1000];
bool ModuleTestC$sendBusy[1000];

enum ModuleTestC$__nesc_unnamed4356 {
  ModuleTestC$COUNT = 10, 
  ModuleTestC$INVALID = 65535, 
  ModuleTestC$MAX = 90, 
  ModuleTestC$INITSEND = 90000, 
  ModuleTestC$ROOT = 65534
};



#line 35
typedef nx_struct ModuleTestC$MatrixMsg {
  nx_uint32_t data;
} __attribute__((packed)) ModuleTestC$MatrixMsg;

ModuleTestC$MatrixMsg *ModuleTestC$Msg[1000];

uint16_t ModuleTestC$buffer[1000][ModuleTestC$MAX];
uint8_t ModuleTestC$init[1000];
uint8_t ModuleTestC$final[1000];

bool ModuleTestC$sendInit[1000];

uint32_t ModuleTestC$sendINTERVAL[1000];

uint32_t ModuleTestC$seqNo[1000][100];
uint32_t ModuleTestC$counter[1000];

static void ModuleTestC$insertIP(uint16_t ip);








static inline uint16_t ModuleTestC$getHeaderIP(void );







static inline void ModuleTestC$removeIP(void );







static inline void ModuleTestC$Boot$booted(void );
#line 89
static inline void ModuleTestC$RadioControl$startDone(error_t err);
#line 106
static inline void ModuleTestC$timerThree$fired(void );



static inline void ModuleTestC$RadioControl$stopDone(error_t err);

static inline void ModuleTestC$sendMessage$runTask(void );
#line 131
static inline void ModuleTestC$timerOne$fired(void );









static inline void ModuleTestC$timerTwo$fired(void );



static inline void ModuleTestC$Send$sendDone(message_t *msg, error_t error);
#line 158
static message_t *ModuleTestC$Receive$receive(message_t *msg, void *payload, uint8_t len);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 26 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 38
static inline error_t MotePlatformP$SubInit$default$init(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/opt/tinyos-2.1.1/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 41 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x2b5ed60cbab0);



enum SimSchedulerBasicP$__nesc_unnamed4357 {

  SimSchedulerBasicP$NUM_TASKS = 16U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 95
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 112
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 131
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 158
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 172
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 197
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 213
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 42 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 77
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 39 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed6430828, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageC$Snoop$receive(
# 41 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed6439670, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



TossimActiveMessageC$Receive$receive(
# 40 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x2b5ed643aa90, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 54 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 83
static inline uint8_t TossimActiveMessageC$AMSend$maxPayloadLength(am_id_t id);



static void *TossimActiveMessageC$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len);







static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 119
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);




static void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);




static am_addr_t TossimActiveMessageC$AMPacket$source(message_t *amsg);









static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);




static void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 204
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 228
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 246
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static bool LedsP$Led0$get(void );


static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );




static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );





static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 63
static void LedsP$Leds$led0On(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$stopDoneTask$postTask(void );
# 77 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 68
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 117
static void TossimPacketModelC$Control$stopDone(error_t error);
# 40 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 88 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4358 {
#line 88
  TossimPacketModelC$startDoneTask = 1U
};
#line 88
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4359 {
#line 93
  TossimPacketModelC$stopDoneTask = 2U
};
#line 93
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 137
enum TossimPacketModelC$__nesc_unnamed4360 {
#line 137
  TossimPacketModelC$sendDoneTask = 3U
};
#line 137
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 62
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static error_t TossimPacketModelC$Control$start(void );








static inline error_t TossimPacketModelC$Control$stop(void );
#line 120
static inline error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg);





static inline error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *ack);





static error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack);




static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 151
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 175
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 203
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 241
static inline int TossimPacketModelC$sim_packet_header_length(void );



static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 272
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 52 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 51
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 50 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 118
static double CpmModelC$noise_hash_generation(void );
#line 143
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 158
static inline int CpmModelC$shouldAckReceive(double snr);
#line 170
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 192
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 222
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 240
static bool CpmModelC$shouldReceive(double SNR);
#line 252
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 266
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 288
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 361
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 420
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 451
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 471
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 50 "/opt/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];

static am_addr_t ActiveMessageAddressC$amAddress(void );
# 41 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
#line 58
static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength(void );
# 50 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(uint8_t type);
#line 62
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 51 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(am_addr_t neighbor);



static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(am_addr_t neighbor);
# 40 "/opt/tinyos-2.1.1/tos/interfaces/Cache.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item);







static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item);
# 31 "/opt/tinyos-2.1.1/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(
# 114 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
collection_id_t arg_0x2b5ed66c8da8, 
# 20 "/opt/tinyos-2.1.1/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(
# 113 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
collection_id_t arg_0x2b5ed66c8270, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$postTask(void );
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(
# 111 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed66cb3f0, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 81 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning(void );
#line 62
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt);
# 77 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixInfo.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixInfo$numNeighborsTemporary(void );
#line 75
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixInfo$numNeighbors(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head(void );
#line 90
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(
#line 86
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  newVal);
#line 101
static 
#line 99
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(uint8_t idx);
#line 81
static 
#line 79
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  

/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue(void );
#line 50
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty(void );







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(void );
# 83 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes(void );
#line 71
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );
# 39 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixUnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(uint16_t ip);
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(uint16_t ip);
#line 37
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp(void );



static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(uint16_t ip);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength(void );
#line 83
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(
# 112 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
collection_id_t arg_0x2b5ed66ca648, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute(void );
#line 48
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(
#line 42
message_t * msg);
#line 60
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$noAck(
#line 54
message_t * msg);
#line 74
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(
#line 69
message_t * msg);
# 97 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * newVal);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(
#line 63
message_t * amsg);
# 97 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * 


/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * newVal);
# 46 "/opt/tinyos-2.1.1/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(
# 146 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
uint8_t arg_0x2b5ed670fdc8);
#line 247
enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4361 {
#line 247
  CtpForwardingEngineP$0$sendTask = 4U
};
#line 247
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_sillytask_sendTask[/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask];
#line 702
enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4362 {
#line 702
  CtpForwardingEngineP$0$sendBroadCastTask = 5U
};
#line 702
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_sillytask_sendBroadCastTask[/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask];
#line 173
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t mask, uint16_t offset);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(uint8_t state);
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(uint8_t state);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(uint8_t state);


enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4363 {
  CtpForwardingEngineP$0$QUEUE_CONGESTED = 0x1, 
  CtpForwardingEngineP$0$ROUTING_ON = 0x2, 
  CtpForwardingEngineP$0$RADIO_ON = 0x4, 
  CtpForwardingEngineP$0$ACK_PENDING = 0x8, 
  CtpForwardingEngineP$0$SENDING = 0x10
};

enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4364 {
  CtpForwardingEngineP$0$MAX_METRIC = 0xFFFF, 
  CtpForwardingEngineP$0$INVALID_ADDR = 65535
};


uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[1000];



uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[1000];

bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[1000];

bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[1000];

enum /*CtpP.Forwarder*/CtpForwardingEngineP$0$__nesc_unnamed4365 {
  CtpForwardingEngineP$0$CLIENT_COUNT = 1U
};






fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[1000][/*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT];
fe_queue_entry_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[1000][/*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT];







message_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[1000];
message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[1000];

static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void );










static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void );
#line 252
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t err);










static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent);


static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t window, uint16_t offset);
#line 279
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void );




static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void );





static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t err);





static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(message_t *m);
#line 311
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(uint8_t client, message_t *msg, uint8_t len);
#line 365
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(uint8_t client);



static inline void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(uint8_t client, message_t *msg, uint8_t len);
#line 390
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendUp(fe_queue_entry_t *qe);
#line 483
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDown(fe_queue_entry_t *qe);
#line 572
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardBroadCast(fe_queue_entry_t *qe);
#line 671
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void );
#line 702
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$runTask(void );
#line 783
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success);
#line 827
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(message_t *msg, error_t error);
#line 889
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(message_t * m);
#line 979
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 1042
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(message_t *msg, void *payload, uint8_t len);
#line 1055
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void );





static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void );








static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);







static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(message_t *msg);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void );



static void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(message_t *msg, uint8_t len);








static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg);

static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg);





static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg);
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg);
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg);
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(message_t *msg);
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIpOrigin(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl);


static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t e);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setIp(message_t *msg, uint16_t ip);


static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt);


static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t opt);


static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t opt);






static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2);
#line 1148
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(uint8_t state);


static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(uint8_t state);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(uint8_t state);






static inline 
#line 1160
void 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(uint8_t client, message_t *msg, error_t error);



static inline 
#line 1164
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(uint8_t client);







static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEvent(uint8_t type);








static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 60 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[1000];
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[1000];
/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t * /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[1000][12];
/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[1000][12];

static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void );









static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void );
#line 88
static inline /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t */*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void );
#line 103
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *newVal);
#line 60
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[1000];
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[1000];
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t * /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[1000][12];
/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[1000][12];

static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void );









static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void );
#line 88
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void );
#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *newVal);
# 48 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
/*CtpP.SendQueueP*/QueueC$0$queue_t  /*CtpP.SendQueueP*/QueueC$0$queue[1000][13];
uint8_t /*CtpP.SendQueueP*/QueueC$0$head[1000];
uint8_t /*CtpP.SendQueueP*/QueueC$0$tail[1000];
uint8_t /*CtpP.SendQueueP*/QueueC$0$size[1000];

static inline bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void );



static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$head(void );



static void /*CtpP.SendQueueP*/QueueC$0$printQueue(void );
#line 85
static /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void );
#line 97
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(/*CtpP.SendQueueP*/QueueC$0$queue_t newVal);
#line 112
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx);
# 66 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(message_t *msg);
#line 54
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(message_t *msg);
#line 69
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(message_t *msg);


static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(message_t *msg);
# 58 "/opt/tinyos-2.1.1/tos/lib/net/matrix/LruCtpMsgCacheP.nc"
#line 53
typedef struct /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$__nesc_unnamed4366 {
  am_addr_t origin;
  uint8_t seqno;
  collection_id_t type;
  uint8_t thl;
} /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t;

/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[1000][4];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[1000];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[1000];

static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void );
#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(message_t *m);
#line 100
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(uint8_t i);
#line 116
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(message_t *m);
#line 135
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(message_t *m);
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4367 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 140
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 177
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 215
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 259
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 274
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 289
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 313
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 356
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 375
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 439
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 472
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 492
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 526
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 553
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4368 {
#line 63
  AlarmToTimerC$0$fired = 6U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b5ed6b6bc28);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4369 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 7U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4370 {

  VirtualizeTimerC$0$NUM_TIMERS = 13U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4371 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);









static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 61 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
static void LinkEstimatorP$LinkEstimator$evicted(am_addr_t neighbor);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorP$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 99
static void LinkEstimatorP$Send$sendDone(
#line 92
message_t * msg, 






error_t error);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t LinkEstimatorP$Random$rand16(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP$SubPacket$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


LinkEstimatorP$SubPacket$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t LinkEstimatorP$SubPacket$maxPayloadLength(void );
# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorP$SubAMPacket$source(
#line 73
message_t * amsg);
#line 67
static am_addr_t LinkEstimatorP$SubAMPacket$destination(
#line 63
message_t * amsg);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



LinkEstimatorP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CompareBit.nc"
static bool LinkEstimatorP$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len);
# 47 "/opt/tinyos-2.1.1/tos/interfaces/LinkPacketMetadata.nc"
static bool LinkEstimatorP$LinkPacketMetadata$highChannelQuality(
#line 44
message_t * msg);
# 58 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
enum LinkEstimatorP$__nesc_unnamed4372 {


  LinkEstimatorP$EVICT_ETX_THRESHOLD = 65, 


  LinkEstimatorP$MAX_PKT_GAP = 10, 
  LinkEstimatorP$BEST_ETX = 10, 
  LinkEstimatorP$INVALID_RVAL = 0xff, 
  LinkEstimatorP$INVALID_NEIGHBOR_ADDR = 0xff, 


  LinkEstimatorP$VERY_LARGE_ETX_VALUE = 0xffff, 


  LinkEstimatorP$ALPHA = 9, 


  LinkEstimatorP$DLQ_PKT_WINDOW = 5, 


  LinkEstimatorP$BLQ_PKT_WINDOW = 3, 



  LinkEstimatorP$LARGE_ETX_VALUE = 70
};


neighbor_table_entry_t LinkEstimatorP$NeighborTable[1000][10];

uint8_t LinkEstimatorP$linkEstSeq[1000];



uint8_t LinkEstimatorP$prevSentIdx[1000];


static inline linkest_header_t *LinkEstimatorP$getHeader(message_t *m);




static inline linkest_footer_t *LinkEstimatorP$getFooter(message_t *m, uint8_t len);







static inline uint8_t LinkEstimatorP$addLinkEstHeaderAndFooter(message_t *msg, uint8_t len);
#line 163
static void LinkEstimatorP$initNeighborIdx(uint8_t i, am_addr_t ll_addr);
#line 176
static uint8_t LinkEstimatorP$findIdx(am_addr_t ll_addr);
#line 189
static uint8_t LinkEstimatorP$findEmptyNeighborIdx(void );
#line 202
static uint8_t LinkEstimatorP$findWorstNeighborIdx(uint8_t thresholdETX);
#line 237
static inline uint8_t LinkEstimatorP$findRandomNeighborIdx(void );
#line 275
static void LinkEstimatorP$updateETX(neighbor_table_entry_t *ne, uint16_t newEst);





static void LinkEstimatorP$updateDETX(neighbor_table_entry_t *ne);
#line 300
static uint16_t LinkEstimatorP$computeETX(uint8_t q1);
#line 315
static inline void LinkEstimatorP$updateNeighborTableEst(am_addr_t n);
#line 355
static void LinkEstimatorP$updateNeighborEntryIdx(uint8_t idx, uint8_t seq);
#line 391
static inline void LinkEstimatorP$print_neighbor_table(void );
#line 405
static void LinkEstimatorP$print_packet(message_t *msg, uint8_t len);










static inline void LinkEstimatorP$initNeighborTable(void );







static inline error_t LinkEstimatorP$StdControl$start(void );









static inline error_t LinkEstimatorP$Init$init(void );






static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(am_addr_t neighbor);
#line 457
static inline error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 485
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor);









static inline error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 507
static inline error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor);
#line 524
static inline error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor);
#line 540
static inline error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 555
static inline error_t LinkEstimatorP$Send$send(am_addr_t addr, message_t *msg, uint8_t len);










static inline void LinkEstimatorP$AMSend$sendDone(message_t *msg, error_t error);








static inline uint8_t LinkEstimatorP$Send$maxPayloadLength(void );



static inline void *LinkEstimatorP$Send$getPayload(message_t *msg, uint8_t len);






static inline void LinkEstimatorP$processReceivedMessage(message_t * msg, void * payload, uint8_t len);
#line 663
static inline message_t *LinkEstimatorP$SubReceive$receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 679
static uint8_t LinkEstimatorP$Packet$payloadLength(message_t *msg);
#line 698
static inline uint8_t LinkEstimatorP$Packet$maxPayloadLength(void );




static void *LinkEstimatorP$Packet$getPayload(message_t *msg, uint8_t len);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b5ed6d077d8, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b5ed6d077d8, 
# 121 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2b5ed6d077d8);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2b5ed6d085e8, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4373 {
#line 118
  AMQueueImplP$0$CancelTask = 8U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4374 {
#line 161
  AMQueueImplP$0$errorTask = 9U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4375 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][4];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][4 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 199
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id);



static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask(void );
# 68 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 56
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 44 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(am_addr_t neighbor);
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(am_addr_t neighbor);
#line 58
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(am_addr_t neighbor);
#line 47
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(am_addr_t neighbor);
#line 38
static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(uint16_t neighbor);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16(void );
#line 35
static uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32(void );
# 100 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt);
#line 53
static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(uint32_t dt);
# 7 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpCongestion.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested(void );
# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address(void );
#line 136
static am_id_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(
#line 132
message_t * amsg);
# 51 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound(void );
static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute(void );
# 271 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4376 {
#line 271
  CtpRoutingEngineP$0$updateRouteTask = 10U
};
#line 271
typedef int /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_sillytask_updateRouteTask[/*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask];
#line 393
enum /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_unnamed4377 {
#line 393
  CtpRoutingEngineP$0$sendBeaconTask = 11U
};
#line 393
typedef int /*CtpP.Router*/CtpRoutingEngineP$0$__nesc_sillytask_sendBeaconTask[/*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask];
#line 136
bool /*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[1000];



bool /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[1000];


bool /*CtpP.Router*/CtpRoutingEngineP$0$running[1000];

bool /*CtpP.Router*/CtpRoutingEngineP$0$sending[1000];


bool /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[1000];

route_info_t /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[1000];
bool /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[1000];
am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[1000];

message_t /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[1000];
ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[1000];


routing_table_entry /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[1000][10];
uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[1000];


uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[1000];



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void );
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t arg_0x2b5ed6db2678);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t arg_0x2b5ed6db1020, am_addr_t arg_0x2b5ed6db12e8, uint16_t arg_0x2b5ed6db15a8);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor);
#line 181
uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[1000];
uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$t[1000];
bool /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[1000];

static void /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval(void );




static inline void /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval(void );






static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void );
#line 228
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void );
#line 246
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error);









static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error);






static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(uint16_t etx);







static inline void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void );
#line 393
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void );
#line 434
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error);








static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void );





static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void );
#line 464
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$getHeader(message_t * m);






static inline message_t */*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 521
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor);
#line 533
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void );


static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void );




static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getParent(am_addr_t *parent);








static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 563
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested);
#line 605
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void );
#line 632
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void );
#line 653
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t *msg, void *payload, uint8_t len);
#line 702
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void );





static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t neighbor);
#line 720
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx);
#line 759
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor);
#line 782
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);





static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t etx);



static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t *msg, ctp_options_t opt);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$maxPayloadLength(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$maxPayloadLength(void );



static inline void */*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$maxPayloadLength(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$maxPayloadLength(void );



static inline void */*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(message_t *m, uint8_t len);
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$RootControl$isRoot(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$maxPayloadLength(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$startPeriodic(uint32_t dt);
# 64 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx);
#line 53
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$getParent(am_addr_t *parent);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$maxPayloadLength(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt);
#line 62
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$startOneShot(uint32_t dt);
#line 62
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand16(void );
#line 35
static uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand32(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$postTask(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$startOneShot(uint32_t dt);
# 48 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$requestAck(
#line 42
message_t * msg);
#line 74
static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$wasAcked(
#line 69
message_t * msg);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$postTask(void );
# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$source(
#line 73
message_t * amsg);
#line 57
static am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$address(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$postTask(void );
# 331 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
enum /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_unnamed4378 {
#line 331
  MatrixRoutingEngineP$0$updateTemporaryTableTask = 12U
};
#line 331
typedef int /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_sillytask_updateTemporaryTableTask[/*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask];
#line 346
enum /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_unnamed4379 {
#line 346
  MatrixRoutingEngineP$0$sendAggregationTask = 13U
};
#line 346
typedef int /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_sillytask_sendAggregationTask[/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask];
#line 373
enum /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_unnamed4380 {
#line 373
  MatrixRoutingEngineP$0$sendDistributionTask = 14U
};
#line 373
typedef int /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_sillytask_sendDistributionTask[/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask];
#line 399
enum /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_unnamed4381 {
#line 399
  MatrixRoutingEngineP$0$sendBeaconTask = 15U
};
#line 399
typedef int /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_sillytask_sendBeaconTask[/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask];
#line 73
enum /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_unnamed4382 {
  MatrixRoutingEngineP$0$AGGREGATION_MSG = 0, 
  MatrixRoutingEngineP$0$DISTRIBUTION_MSG = 1
};


static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$startRetxmitTimer(uint16_t mask, uint16_t offset);
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(uint8_t state);
static inline bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(uint8_t state);
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(uint8_t state);


enum /*CtpP.Matrix*/MatrixRoutingEngineP$0$__nesc_unnamed4383 {
  MatrixRoutingEngineP$0$RUNNING_ON = 0x1, 
  MatrixRoutingEngineP$0$RADIO_ON = 0x2, 
  MatrixRoutingEngineP$0$ACK_PENDING = 0x4, 
  MatrixRoutingEngineP$0$SENDING = 0x8, 
  MatrixRoutingEngineP$0$NEW_MESSAGE = 0x10, 
  MatrixRoutingEngineP$0$IP_RECEIVED = 0x20, 
  MatrixRoutingEngineP$0$IP_SENDING = 0X40, 
  MatrixRoutingEngineP$0$IP_SENT = 0X80
};


bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$stable[1000];


uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[1000];


uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[1000];


uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[1000];


uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[1000];


bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[1000];


bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[1000];
#line 127
table_entry /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[1000];


uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[1000];


uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[1000];


uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[1000];

message_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[1000];
message_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[1000];
Matrix_routing_header_t */*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[1000];
Matrix_beacon_header_t */*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[1000];


table_entry /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[1000][15];
uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[1000];









table_entry_temporary /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[1000][5];
uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[1000];









uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_One[1000];
uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One[1000];
uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$k_One[1000];
uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[1000];

uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[1000];
uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[1000];
bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[1000];







uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[1000];
uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[1000];
uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$k_Two[1000];
uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[1000];

uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[1000];
uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[1000];
bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[1000];



static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableInit(void );
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind(am_addr_t arg_0x2b5ed6f3a020);
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Downwards(am_addr_t arg_0x2b5ed6f3ad48, uint16_t arg_0x2b5ed6f39060);

static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP(uint16_t ip);


static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind_Temporary(uint16_t node);
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Temporary(am_addr_t from, uint16_t ip, uint16_t data);
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$routingTemporaryTableEvict(am_addr_t node);
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP_Temporary(uint16_t ip);



static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_One(void );







static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_One(void );





static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_One(void );








static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_One(void );








static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_Two(void );







static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_Two(void );





static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_Two(void );








static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_Two(void );








static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Init$init(void );
#line 283
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$StdControl$start(void );
#line 303
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$startDone(error_t error);




static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$stopDone(error_t error);





static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent);
#line 331
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$runTask(void );
#line 346
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$runTask(void );
#line 373
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$runTask(void );
#line 399
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$runTask(void );
#line 420
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$fired(void );








static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$fired(void );









static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$fired(void );






static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$printt(void );








static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$sendDone(message_t *msg, error_t error);
#line 499
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error);
#line 511
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$fired(void );
#line 547
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$trickleTimerTwo_Root(void );
#line 576
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$trickleTimerTwo_noRoot(void );
#line 594
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$fired(void );
#line 613
static inline message_t */*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 682
static inline message_t */*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 711
static uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$myIp(void );







static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(uint16_t ip);







static inline am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(uint16_t ip);










static inline am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(uint16_t ip);
#line 776
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighbors(void );



static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighborsTemporary(void );
#line 796
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(uint8_t state);


static inline bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(uint8_t state);


static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(uint8_t state);





static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$startRetxmitTimer(uint16_t window, uint16_t offset);
#line 827
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableInit(void );






static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind(am_addr_t node);










static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Downwards(am_addr_t from, uint16_t data);
#line 876
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP(uint16_t ip);










static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind_Temporary(uint16_t node);










static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Temporary(am_addr_t from, uint16_t ip, uint16_t data);
#line 925
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP_Temporary(uint16_t ip);










static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$routingTemporaryTableEvict(am_addr_t node);
# 8 "/opt/tinyos-2.1.1/tos/lib/net/matrix/DummyActiveMessageP.nc"
static inline bool DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(message_t *msg);
# 50 "/opt/tinyos-2.1.1/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*ModuleTestAppC.Sender.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
static bool CoinC$RootControl$isRoot(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t CoinC$RadioControl$start(void );
#line 109
static error_t CoinC$RadioControl$stop(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void CoinC$RegularTimer$startPeriodic(uint32_t dt);
# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
static uint16_t CoinC$Random$rand16(void );
#line 35
static uint32_t CoinC$Random$rand32(void );
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void CoinC$RandomTimer$startOneShot(uint32_t dt);
# 12 "CoinC.nc"
enum CoinC$__nesc_unnamed4384 {
  CoinC$SPACE = 100, 

  CoinC$TIME1 = 5000, 
  CoinC$TIME2 = 15000, 
  CoinC$TIME3 = 25000, 
  CoinC$TIME4 = 35000, 
  CoinC$TIME5 = 45000, 

  CoinC$P1 = 1, 
  CoinC$P2 = 5, 
  CoinC$P3 = 10
};


uint32_t CoinC$interval[1000];
uint16_t CoinC$prob[1000];
uint32_t CoinC$timerI[1000];
uint32_t CoinC$timerF[1000];

bool CoinC$radioOn[1000];
bool CoinC$coinOn[1000];

static inline error_t CoinC$CoinControl$start(void );
#line 47
static inline void CoinC$RadioControl$startDone(error_t err);




static inline void CoinC$RadioControl$stopDone(error_t err);




static inline void CoinC$RegularTimer$fired(void );
#line 75
static inline void CoinC$RandomTimer$fired(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 67
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 119
static inline void expand_heap(heap_t *heap)
#line 119
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 133
{
  int findex = heap->size;

#line 135
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 77
static inline int is_empty(heap_t *heap)
#line 77
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 81
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 85
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 309 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 309
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 298
inline static unsigned int sim_log_hash(void *key)
#line 298
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 151
static inline void sim_log_init()
#line 151
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 122 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 122
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 126
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 132
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 56 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 56
{
  return SimMoteP$isOn[sim_node()];
}

# 164 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 164
{
  sim_log_channel_t *channel;

#line 166
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 172
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 204
{
  sim_log_channel_t *channel;
  int i;

#line 207
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 216
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/opt/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 276 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 276
{
  dummy = 5;
}

# 42 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 42
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 228 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 228
{
  message_t *m = (message_t *)evt->data;

#line 230
  sim_log_debug(111U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 234
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 236
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 49
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
#line 128
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 128
{
  return TossimActiveMessageC$amAddress();
}

#line 152
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 152
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 1190 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEvent(uint8_t type)
#line 1190
{
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(uint8_t type){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEvent(type);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 158 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning;
}

# 81 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$isRunning(2U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1199 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node)
#line 1199
{
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$default$logEventMsg(type, msg, origin, node);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 193 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval(void )
#line 193
{
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] = 128;
  /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime();
}

#line 571
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void )
#line 571
{
  /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
}

# 78 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate(void ){
#line 78
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerImmediateRouteUpdate();
#line 78
}
#line 78
# 181 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 181
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 296 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(message_t *m)
#line 296
{
  return (ctp_data_header_t *)/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(m, sizeof(ctp_data_header_t ));
}

#line 1109
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(message_t *msg)
#line 1109
{
#line 1109
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->etx.nxdata);
}

# 64 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(uint16_t *etx){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(etx);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 57 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$size(void )
#line 57
{
  return /*CtpP.SendQueueP*/QueueC$0$size[sim_node()];
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
#line 90
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
static inline /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t */*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get(void )
#line 88
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]) {
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *rval = /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()]];

#line 91
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()]] = (void *)0;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]--;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()]++;
      if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] == 12) {
          /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] = 0;
        }
      sim_log_debug(208U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get(void )
#line 88
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *rval = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()]];

#line 91
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()]] = (void *)0;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]--;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()]++;
      if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] == 12) {
          /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] = 0;
        }
      sim_log_debug(212U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get(void ){
#line 97
  struct __nesc_unnamed4308 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty(void )
#line 75
{
  sim_log_debug(210U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]);
  return /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()] == 0;
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 75 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty(void )
#line 75
{
  sim_log_debug(206U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]);
  return /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()] == 0;
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 889 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(message_t * m)
#line 889
{
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$empty()) {
      sim_log_debug(200U, "Route", "%s cannot forward, message pool empty.\n", __FUNCTION__);

      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_MSG_POOL_EMPTY);
    }
  else {
#line 895
    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$empty()) {
        sim_log_debug(201U, "Route", "%s cannot forward, queue entry pool empty.\n", __FUNCTION__);


        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_QENTRY_POOL_EMPTY);
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;
        uint16_t gradient;

        qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$get();
        if (qe == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_GET_MSGPOOL_ERR);
            return m;
          }

        newMsg = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$get();
        if (newMsg == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_GET_QEPOOL_ERR);
            return m;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(m->metadata, 0, sizeof(message_metadata_t ));

        qe->msg = m;
        qe->client = 0xff;
        qe->retries = MAX_RETRIES;


        if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(qe) == SUCCESS) {
            sim_log_debug(202U, "Forwarder,Route", "%s forwarding packet %p with queue size %hhu\n", __FUNCTION__, m, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());

            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(&gradient) == SUCCESS) {

                if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getEtx(m) <= gradient) {




                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerImmediateRouteUpdate();
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(LOOPY_WINDOW, LOOPY_OFFSET);
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_LOOP_DETECTED, 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(m));
                  }
              }

            if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$isRunning()) {


                sim_log_debug(203U, "FHangBug", "%s: posted sendTask.\n", __FUNCTION__);
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
              }


            return newMsg;
          }
        else 
#line 954
          {

            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(newMsg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 958
            if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
          }
      }
    }



  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_QUEUE_FULL);
  return m;
}

#line 1078
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(message_t *msg)
#line 1078
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(msg) - sizeof(ctp_data_header_t );
}

#line 1165
static inline 
#line 1164
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 1166
{
  return TRUE;
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/Intercept.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(collection_id_t arg_0x2b5ed66c8da8, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$default$forward(arg_0x2b5ed66c8da8, msg, payload, len);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 1170 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 1172
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collection_id_t arg_0x2b5ed66ca648, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x2b5ed66ca648) {
#line 67
    case 0xf0:
#line 67
      __nesc_result = ModuleTestC$Receive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$default$receive(arg_0x2b5ed66ca648, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 37 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixUnicastNameFreeRouting.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp(void ){
#line 37
  unsigned short __nesc_result;
#line 37

#line 37
  __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$myIp();
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 1107 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(message_t *msg)
#line 1107
{
#line 1107
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->type.nxdata);
}

#line 1134
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(message_t *m1, message_t *m2)
#line 1134
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(m2);
}

# 112 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$element(uint8_t idx)
#line 112
{
  idx += /*CtpP.SendQueueP*/QueueC$0$head[sim_node()];
  if (idx >= 13) {
      idx -= 13;
    }
  return /*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][idx];
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(uint8_t idx){
#line 101
  struct __nesc_unnamed4308 *__nesc_result;
#line 101

#line 101
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$element(idx);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 135 "/opt/tinyos-2.1.1/tos/lib/net/matrix/LruCtpMsgCacheP.nc"
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(message_t *m)
#line 135
{
  return /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(m) < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()];
}

# 48 "/opt/tinyos-2.1.1/tos/interfaces/Cache.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$lookup(item);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 177 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 177
{
  return 28;
}

#line 83
static inline uint8_t TossimActiveMessageC$AMSend$maxPayloadLength(am_id_t id)
#line 83
{
  return TossimActiveMessageC$Packet$maxPayloadLength();
}

# 112 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(am_id_t arg_0x2b5ed6d077d8){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = TossimActiveMessageC$AMSend$maxPayloadLength(arg_0x2b5ed6d077d8);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 199 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(uint8_t id)
#line 199
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$maxPayloadLength(0);
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(0U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength(void )
#line 61
{
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$maxPayloadLength();
}

# 112 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 1114 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(message_t *msg, uint8_t thl)
#line 1114
{
#line 1114
  __nesc_hton_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->thl.nxdata, thl);
}

#line 979
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 980
{
  collection_id_t collectid;
  bool duplicate = FALSE;
  fe_queue_entry_t *qe;
  uint8_t i;
#line 984
  uint8_t thl;


  collectid = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg);



  thl = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(msg);
  thl++;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setThl(msg, thl);

  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_RCV_MSG, 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
  thl--);
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$maxPayloadLength()) {
      return msg;
    }



  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(msg)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE);
      return msg;
    }

  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size() > 0) {
      for (i = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size(); i > 0; i--) {
          qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$element(i - 1);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$matchInstance(qe->msg, msg)) {
              duplicate = TRUE;
              break;
            }
        }
    }

  if (duplicate) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_QUEUE);
      return msg;
    }
  else {

    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(msg) == /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp()) {
      return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg));
      }
    else {
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$Intercept$forward(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(msg))) {
        return msg;
        }
      else 
#line 1036
        {
          sim_log_debug(204U, "Route", "Forwarding packet from %hu.\n", __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.nxdata));
          return /*CtpP.Forwarder*/CtpForwardingEngineP$0$forward(msg);
        }
      }
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 575 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(am_addr_t n, bool congested)
#line 575
{
  uint8_t idx;

#line 577
  if (/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[sim_node()]) {
    return;
    }
#line 579
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]) {
      /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.congested = congested;
    }
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested && !congested) {
    /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
  else {
#line 585
    if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == n && congested) {
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
      }
    }
}

#line 263
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(uint16_t etx)
#line 263
{
  return etx < ETX_THRESHOLD;
}

# 38 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(uint16_t neighbor){
#line 38
  unsigned short __nesc_result;
#line 38

#line 38
  __nesc_result = LinkEstimatorP$LinkEstimator$getLinkQuality(neighbor);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 720 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx)
#line 720
{
  uint8_t idx;
  uint16_t linkEtx;

#line 723
  linkEtx = /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(from);

  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(from);
  if (idx == 10) {




      sim_log_debug(310U, "TreeRouting", "%s FAIL, table full\n", __FUNCTION__);
      return FAIL;
    }
  else {
#line 734
    if (idx == /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]) {

        if (/*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(linkEtx)) {
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].neighbor = from;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.parent = parent;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.etx = etx;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.haveHeard = 1;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.congested = FALSE;
            /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]++;
            sim_log_debug(311U, "TreeRouting", "%s OK, new entry\n", __FUNCTION__);
          }
        else 
#line 744
          {
            sim_log_debug(312U, "TreeRouting", "%s Fail, link quality (%hu) below threshold\n", __FUNCTION__, linkEtx);
          }
      }
    else 
#line 747
      {

        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].neighbor = from;
        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.parent = parent;
        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.etx = etx;
        /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][idx].info.haveHeard = 1;
        sim_log_debug(313U, "TreeRouting", "%s OK, updated entry\n", __FUNCTION__);
      }
    }
#line 755
  return SUCCESS;
}

# 44 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(am_addr_t neighbor){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = LinkEstimatorP$LinkEstimator$pinNeighbor(neighbor);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 1070 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor)
#line 1070
{
}

# 61 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static void LinkEstimatorP$LinkEstimator$evicted(am_addr_t neighbor){
#line 61
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$evicted(neighbor);
#line 61
  /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(neighbor);
#line 61
}
#line 61
# 457 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$insertNeighbor(am_addr_t neighbor)
#line 457
{
  uint8_t nidx;

  nidx = LinkEstimatorP$findIdx(neighbor);
  if (nidx != LinkEstimatorP$INVALID_RVAL) {
      sim_log_debug(271U, "LI", "insert: Found the entry, no need to insert\n");
      return SUCCESS;
    }

  nidx = LinkEstimatorP$findEmptyNeighborIdx();
  if (nidx != LinkEstimatorP$INVALID_RVAL) {
      sim_log_debug(272U, "LI", "insert: inserted into the empty slot\n");
      LinkEstimatorP$initNeighborIdx(nidx, neighbor);
      return SUCCESS;
    }
  else 
#line 471
    {
      nidx = LinkEstimatorP$findWorstNeighborIdx(LinkEstimatorP$BEST_ETX);
      if (nidx != LinkEstimatorP$INVALID_RVAL) {
          sim_log_debug(273U, "LI", "insert: inserted by replacing an entry for neighbor: %d\n", LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);

          LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);
          LinkEstimatorP$initNeighborIdx(nidx, neighbor);
          return SUCCESS;
        }
    }
  return FAIL;
}

# 41 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(am_addr_t neighbor){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = LinkEstimatorP$LinkEstimator$insertNeighbor(neighbor);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageC$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 471 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline message_t */*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 471
{
  am_addr_t from;
  ctp_routing_header_t *rcvBeacon;
  bool congested;


  if (len != sizeof(ctp_routing_header_t )) {
      sim_log_debug(304U, "LITest", "%s, received beacon of size %hhu, expected %i\n", __FUNCTION__, len, (int )sizeof(ctp_routing_header_t ));




      return msg;
    }


  from = /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$source(msg);
  rcvBeacon = (ctp_routing_header_t *)payload;

  congested = /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(msg, CTP_OPT_ECN);

  sim_log_debug(305U, "TreeRouting", "%s from: %d  [ parent: %d etx: %d]\n", __FUNCTION__, from, __nesc_ntoh_uint16(rcvBeacon->parent.nxdata), __nesc_ntoh_uint16(rcvBeacon->etx.nxdata));




  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) != INVALID_ADDR) {



      if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
          sim_log_debug(306U, "TreeRouting", "from a root, inserting if not in table\n");
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$insertNeighbor(from);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(from);
        }


      /*CtpP.Router*/CtpRoutingEngineP$0$routingTableUpdateEntry(from, __nesc_ntoh_uint16(rcvBeacon->parent.nxdata), __nesc_ntoh_uint16(rcvBeacon->etx.nxdata));
      /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$setNeighborCongested(from, congested);
    }

  if (/*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(msg, CTP_OPT_PULL)) {
      /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
    }
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 78 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t LinkEstimatorP$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 237 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$findRandomNeighborIdx(void )
#line 237
{
  uint8_t i;
  uint8_t cnt;
  uint8_t num_eligible_eviction;

  num_eligible_eviction = 0;
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
          if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & PINNED_ENTRY || 
          LinkEstimatorP$NeighborTable[sim_node()][i].flags & MATURE_ENTRY) {
            }
          else 
#line 247
            {
              num_eligible_eviction++;
            }
        }
    }

  if (num_eligible_eviction == 0) {
      return LinkEstimatorP$INVALID_RVAL;
    }

  cnt = LinkEstimatorP$Random$rand16() % num_eligible_eviction;

  for (i = 0; i < 10; i++) {
      if (! LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
        continue;
        }
#line 262
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & PINNED_ENTRY || 
      LinkEstimatorP$NeighborTable[sim_node()][i].flags & MATURE_ENTRY) {
        continue;
        }
#line 265
      if (cnt-- == 0) {
        return i;
        }
    }
#line 268
  return LinkEstimatorP$INVALID_RVAL;
}

# 136 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_id_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 653 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(message_t *msg, void *payload, uint8_t len)
#line 653
{

  bool found = FALSE;
  uint16_t pathEtx;
  uint16_t neighEtx;
  int i;
  routing_table_entry *entry;
  ctp_routing_header_t *rcvBeacon;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$type(msg) != AM_CTP_ROUTING || 
  len != sizeof(ctp_routing_header_t )) {
    return FALSE;
    }

  rcvBeacon = (ctp_routing_header_t *)payload;

  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) == INVALID_ADDR) {
    return FALSE;
    }
  if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
      return TRUE;
    }

  pathEtx = __nesc_ntoh_uint16(rcvBeacon->etx.nxdata);


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()] && !found; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i];

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent) {
        continue;
        }
#line 684
      neighEtx = entry->info.etx;
      found |= pathEtx < neighEtx;
    }
  return found;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CompareBit.nc"
inline static bool LinkEstimatorP$CompareBit$shouldInsert(message_t * msg, void * payload, uint8_t len){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CompareBit$shouldInsert(msg, payload, len);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 8 "/opt/tinyos-2.1.1/tos/lib/net/matrix/DummyActiveMessageP.nc"
static inline bool DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(message_t *msg)
#line 8
{
  return 0;
}

# 47 "/opt/tinyos-2.1.1/tos/interfaces/LinkPacketMetadata.nc"
inline static bool LinkEstimatorP$LinkPacketMetadata$highChannelQuality(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = DummyActiveMessageP$LinkPacketMetadata$highChannelQuality(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 391 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$print_neighbor_table(void )
#line 391
{
  uint8_t i;
  neighbor_table_entry_t *ne;

#line 394
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP$NeighborTable[sim_node()][i];
      if (ne->flags & VALID_ENTRY) {
          sim_log_debug(266U, "LI,LITest", "%d:%d inQ=%d, rcv=%d, fail=%d, Q=%d\n", i, ne->ll_addr, ne->inquality, ne->rcvcnt, ne->failcnt, LinkEstimatorP$computeETX(ne->inquality));
        }
    }
}

# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP$SubAMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageC$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * LinkEstimatorP$SubPacket$getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 96 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_header_t *LinkEstimatorP$getHeader(message_t *m)
#line 96
{
  return (linkest_header_t *)LinkEstimatorP$SubPacket$getPayload(m, sizeof(linkest_header_t ));
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP$SubAMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 586 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$processReceivedMessage(message_t * msg, void * payload, uint8_t len)
#line 586
{
  uint8_t nidx;
  uint8_t num_entries;

  sim_log_debug(276U, "LI", "LI receiving packet, buf addr: %x\n", payload);
  LinkEstimatorP$print_packet(msg, len);

  if (LinkEstimatorP$SubAMPacket$destination(msg) == AM_BROADCAST_ADDR) {
      linkest_header_t *hdr = LinkEstimatorP$getHeader(msg);
      am_addr_t ll_addr;

      ll_addr = LinkEstimatorP$SubAMPacket$source(msg);

      sim_log_debug(277U, "LI", "Got seq: %d from link: %d\n", __nesc_ntoh_uint8(hdr->seq.nxdata), ll_addr);

      num_entries = __nesc_ntoh_uint8(hdr->flags.nxdata) & NUM_ENTRIES_FLAG;
      LinkEstimatorP$print_neighbor_table();
#line 618
      nidx = LinkEstimatorP$findIdx(ll_addr);
      if (nidx != LinkEstimatorP$INVALID_RVAL) {
          sim_log_debug(278U, "LI", "Found the entry so updating\n");
          LinkEstimatorP$updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
        }
      else 
#line 622
        {
          nidx = LinkEstimatorP$findEmptyNeighborIdx();
          if (nidx != LinkEstimatorP$INVALID_RVAL) {
              sim_log_debug(279U, "LI", "Found an empty entry\n");
              LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
              LinkEstimatorP$updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
            }
          else 
#line 628
            {
              nidx = LinkEstimatorP$findWorstNeighborIdx(LinkEstimatorP$EVICT_ETX_THRESHOLD);
              if (nidx != LinkEstimatorP$INVALID_RVAL) {
                  sim_log_debug(280U, "LI", "Evicted neighbor %d at idx %d\n", LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr, nidx);

                  LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);
                  LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
                }
              else 
#line 635
                {
                  sim_log_debug(281U, "LI", "No room in the table\n");





                  if (LinkEstimatorP$LinkPacketMetadata$highChannelQuality(msg)) {
                      if (LinkEstimatorP$CompareBit$shouldInsert(msg, 
                      LinkEstimatorP$Packet$getPayload(msg, LinkEstimatorP$Packet$payloadLength(msg)), 
                      LinkEstimatorP$Packet$payloadLength(msg))) {
                          nidx = LinkEstimatorP$findRandomNeighborIdx();
                          if (nidx != LinkEstimatorP$INVALID_RVAL) {
                              LinkEstimatorP$LinkEstimator$evicted(LinkEstimatorP$NeighborTable[sim_node()][nidx].ll_addr);
                              LinkEstimatorP$initNeighborIdx(nidx, ll_addr);
                            }
                        }
                    }
                }
            }
        }
    }
}





static inline message_t *LinkEstimatorP$SubReceive$receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 665
{
  sim_log_debug(282U, "LI", "Received upper packet. Will signal up\n");
  LinkEstimatorP$processReceivedMessage(msg, payload, len);
  return LinkEstimatorP$Receive$receive(msg, 
  LinkEstimatorP$Packet$getPayload(msg, LinkEstimatorP$Packet$payloadLength(msg)), 
  LinkEstimatorP$Packet$payloadLength(msg));
}

# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 802 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(uint8_t state)
#line 802
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[sim_node()] | state;
}

#line 799
static inline bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(uint8_t state)
#line 799
{
  return /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[sim_node()] & state;
}

#line 246
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_Two(void )
#line 246
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[sim_node()] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_Two();
}

# 77 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageC$AMPacket$source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 613 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline message_t */*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 613
{
  am_addr_t from;
  Matrix_routing_header_t *rcvControl;


  if (len != sizeof(Matrix_routing_header_t )) {
      sim_log_debug(332U, "MatrixLITest", "%s, received control message of size %hhu, expected %i\n", __FUNCTION__, len, (int )sizeof(Matrix_routing_header_t ));
      return msg;
    }


  from = /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$source(msg);
  rcvControl = (Matrix_routing_header_t *)payload;



  switch (__nesc_ntoh_uint8(rcvControl->options.nxdata)) {

      case /*CtpP.Matrix*/MatrixRoutingEngineP$0$AGGREGATION_MSG: 


        if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED)) {

            if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$stable[sim_node()]) {
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_Two();
              }
#line 638
            if (FAIL != /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Downwards(from, __nesc_ntoh_uint16(rcvControl->data.nxdata))) {
                /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$NEW_MESSAGE);
              }
          }
        else 
#line 641
          {
            if (FAIL != /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Downwards(from, __nesc_ntoh_uint16(rcvControl->data.nxdata))) {
                if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENDING)) {
                    __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[sim_node()] * 0.1);
                    /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[sim_node()] -= __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata);
                    /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip = /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()] - 1].ip + __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata) - 1;
                    __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->ip_node.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip);

                    /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[sim_node()] = R_MATRIX_MAX_RETRIES;
                    /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask();
                  }
              }
          }
      break;

      case /*CtpP.Matrix*/MatrixRoutingEngineP$0$DISTRIBUTION_MSG: 
        if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED)) {
            /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip = __nesc_ntoh_uint16(rcvControl->ip_node.nxdata);
            /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] = __nesc_ntoh_uint16(rcvControl->data.nxdata) - 1;
            /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED);

            if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]) {
                __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] * 0.9 * (/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].downwards + 1) / (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()] + /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].downwards));
                /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip = /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip - /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] + __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata) - 1;
                __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->ip_node.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip);

                /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENDING);
                /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[sim_node()] = R_MATRIX_MAX_RETRIES;
                /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask();
              }
            else 
#line 670
              {
                /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()];
              }
          }

      break;
    }


  return msg;
}

#line 898
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Temporary(am_addr_t from, uint16_t ip, uint16_t data)
#line 898
{
  uint8_t idx;

  idx = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind_Temporary(from);
  if (idx == 5) {

      sim_log_debug(338U, "MatrixRouting", "%s FAIL, table temporary full\n", __FUNCTION__);
      return FAIL;
    }
  else {
#line 907
    if (idx == /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]) {

        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][idx].id = from;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][idx].ip = ip;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][idx].range = data;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][idx].valid = 0x2;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]++;
        sim_log_debug(339U, "MatrixRouting", "%s OK, table temporary new entry\n", __FUNCTION__);
      }
    else 
#line 915
      {

        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][idx].valid = 0x2;
        sim_log_debug(340U, "MatrixRouting", "%s OK, updated table temporary entry\n", __FUNCTION__);
      }
    }
#line 920
  return SUCCESS;
}

#line 682
static inline message_t */*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 682
{
  am_addr_t from;
  Matrix_beacon_header_t *rcvBeacon;


  if (len != sizeof(Matrix_beacon_header_t )) {
      sim_log_debug(333U, "MatrixLITest", "%s, received control message of size %hhu, expected %i\n", __FUNCTION__, len, (int )sizeof(Matrix_beacon_header_t ));
      return msg;
    }


  from = /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$source(msg);
  rcvBeacon = (Matrix_beacon_header_t *)payload;

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENT)) {

      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()] == /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind(from)) {

          /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Temporary(from, __nesc_ntoh_uint16(rcvBeacon->ip.nxdata), __nesc_ntoh_uint16(rcvBeacon->range.nxdata));
        }
    }


  return msg;
}

# 204 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 204
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x2b5ed643aa90, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x2b5ed643aa90) {
#line 67
    case 112:
#line 67
      __nesc_result = LinkEstimatorP$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    case 113:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    case 240:
#line 67
      __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    case 241:
#line 67
      __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = TossimActiveMessageC$Receive$default$receive(arg_0x2b5ed643aa90, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 222 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned int __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned int __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 148 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, dt);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 131 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 61
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 61
{
#line 61
  return 100;
}

# 53 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 53
{
  return SimMoteP$startTime[sim_node()];
}

# 119 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 119
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 146
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 146
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4325 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 315 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$updateNeighborTableEst(am_addr_t n)
#line 315
{
  uint8_t i;
#line 316
  uint8_t totalPkt;
  neighbor_table_entry_t *ne;
  uint8_t newEst;
  uint8_t minPkt;

  minPkt = LinkEstimatorP$BLQ_PKT_WINDOW;
  sim_log_debug(259U, "LI", "%s\n", __FUNCTION__);
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP$NeighborTable[sim_node()][i];
      if (ne->ll_addr == n) {
          if (ne->flags & VALID_ENTRY) {
              sim_log_debug(260U, "LI", "Making link: %d mature\n", i);
              ne->flags |= MATURE_ENTRY;
              totalPkt = ne->rcvcnt + ne->failcnt;
              sim_log_debug(261U, "LI", "MinPkt: %d, totalPkt: %d\n", minPkt, totalPkt);
              if (totalPkt < minPkt) {
                  totalPkt = minPkt;
                }
              if (totalPkt == 0) {
                  ne->inquality = LinkEstimatorP$ALPHA * ne->inquality / 10;
                }
              else 
#line 336
                {
                  newEst = 250UL * ne->rcvcnt / totalPkt;
                  sim_log_debug(262U, "LI,LITest", "  %hu: %hhu -> %hhu", ne->ll_addr, ne->inquality, (LinkEstimatorP$ALPHA * ne->inquality + (10 - LinkEstimatorP$ALPHA) * newEst) / 10);
                  ne->inquality = (LinkEstimatorP$ALPHA * ne->inquality + (10 - LinkEstimatorP$ALPHA) * newEst) / 10;
                }
              ne->rcvcnt = 0;
              ne->failcnt = 0;
              LinkEstimatorP$updateETX(ne, LinkEstimatorP$computeETX(ne->inquality));
            }
          else 
#line 344
            {
              sim_log_debug(263U, "LI", " - entry %i is invalid.\n", (int )i);
            }
        }
    }
}

# 759 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(am_addr_t neighbor)
#line 759
{
  uint8_t idx;
#line 760
  uint8_t i;

#line 761
  idx = /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(neighbor);
  if (idx == /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]) {
    return FAIL;
    }
#line 764
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]--;
  for (i = idx; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]; i++) {
      /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i] = /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i + 1];
    }
  return SUCCESS;
}

# 57 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 57
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 169
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 169
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP$SubPacket$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 95
inline static uint8_t LinkEstimatorP$SubPacket$maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = TossimActiveMessageC$Packet$maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 698 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP$Packet$maxPayloadLength(void )
#line 698
{
  return LinkEstimatorP$SubPacket$maxPayloadLength() - sizeof(linkest_header_t );
}

#line 575
static inline uint8_t LinkEstimatorP$Send$maxPayloadLength(void )
#line 575
{
  return LinkEstimatorP$Packet$maxPayloadLength();
}

# 112 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = LinkEstimatorP$Send$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 579 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void *LinkEstimatorP$Send$getPayload(message_t *msg, uint8_t len)
#line 579
{
  return LinkEstimatorP$Packet$getPayload(msg, len);
}

# 124 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = LinkEstimatorP$Send$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 464 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP$0$getHeader(message_t * m)
#line 464
{
  return (ctp_routing_header_t *)/*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(m, /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength());
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC$Random$rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 66 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
inline static am_addr_t ModuleTestC$CtpPacket$getOrigin(message_t *msg){
#line 66
  unsigned short __nesc_result;
#line 66

#line 66
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
#line 63
inline static uint16_t ModuleTestC$CtpPacket$getIpOrigin(message_t *msg){
#line 63
  unsigned short __nesc_result;
#line 63

#line 63
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIpOrigin(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 61 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 13;
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 1176 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 1178
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(collection_id_t arg_0x2b5ed66c8270, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$default$receive(arg_0x2b5ed66c8270, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 567 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate(void )
#line 567
{
  /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
}

# 71 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate(void ){
#line 71
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate();
#line 71
}
#line 71
# 1121 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(message_t *msg, ctp_options_t opt)
#line 1121
{
  return (__nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

#line 1042
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(message_t *msg, void *payload, uint8_t len)
#line 1043
{


  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$option(msg, CTP_OPT_PULL)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$triggerRouteUpdate();
    }

  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Snoop$receive(/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg), 
  msg, payload + sizeof(ctp_data_header_t ), 
  len - sizeof(ctp_data_header_t ));
}

# 208 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 208
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x2b5ed6439670, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x2b5ed6439670) {
#line 67
    case 113:
#line 67
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSnoop$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x2b5ed6439670, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 83 "/opt/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 83
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 91
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 95
  __nesc_disable_interrupt();
  return result;
}



#line 100
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 77 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 77
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 95
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 158
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(98U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 46
  SimSchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 112 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 117
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint32_t ModuleTestC$Random$rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC$Random$rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void ModuleTestC$timerTwo$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(9U, dt);
#line 62
}
#line 62
# 45 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void ModuleTestC$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 1151 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(uint8_t state)
#line 1151
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] & state;
}

# 50 "/opt/tinyos-2.1.1/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*ModuleTestAppC.Sender.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch(void )
#line 50
{
  return 240U;
}

# 1182 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(uint8_t client)
#line 1182
{
  return 0;
}

# 46 "/opt/tinyos-2.1.1/tos/lib/net/CollectionId.nc"
inline static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(uint8_t arg_0x2b5ed670fdc8){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  switch (arg_0x2b5ed670fdc8) {
#line 46
    case 0U:
#line 46
      __nesc_result = /*ModuleTestAppC.Sender.CollectionSenderP.CollectionIdP*/CollectionIdP$0$CollectionId$fetch();
#line 46
      break;
#line 46
    default:
#line 46
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$default$fetch(arg_0x2b5ed670fdc8);
#line 46
      break;
#line 46
    }
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 173 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 173
{
  __nesc_hton_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 1082 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 1082
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$setPayloadLength(msg, len + sizeof(ctp_data_header_t ));
}

# 95 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = TossimActiveMessageC$Packet$maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 1086 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength(void )
#line 1086
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$maxPayloadLength() - sizeof(ctp_data_header_t );
}

#line 365
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(uint8_t client)
#line 365
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength();
}

#line 311
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(uint8_t client, message_t *msg, uint8_t len)
#line 311
{
  ctp_data_header_t *hdr;
  fe_queue_entry_t *qe;

#line 314
  sim_log_debug(165U, "Forwarder", "%s: sending packet from client %hhu: %x, len %hhu\n", __FUNCTION__, client, msg, len);
  if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ROUTING_ON)) {
#line 315
      return EOFF;
    }
#line 316
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$maxPayloadLength(client)) {
#line 316
      return ESIZE;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(msg, len);
  hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg);

  __nesc_hton_uint8(hdr->bdt.nxdata, 0);
  __nesc_hton_uint16(hdr->ipOrigin.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp());
  __nesc_hton_uint16(hdr->origin.nxdata, TOS_NODE_ID);
  __nesc_hton_uint8(hdr->originSeqNo.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[sim_node()]++);
  __nesc_hton_uint8(hdr->type.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionId$fetch(client));
  __nesc_hton_uint8(hdr->thl.nxdata, 0);

  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][client] == (void *)0) {
      sim_log_debug(166U, "Forwarder", "%s: send failed as client is busy.\n", __FUNCTION__);
      return EBUSY;
    }

  qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][client];
  qe->msg = msg;
  qe->client = client;
  qe->retries = MAX_RETRIES;
  sim_log_debug(167U, "Forwarder", "%s: queue entry for %hhu is %hhu deep\n", __FUNCTION__, client, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$enqueue(qe) == SUCCESS) {
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$RADIO_ON) && !/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING)) {
          sim_log_debug(168U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
        }
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][client] = (void *)0;
      return SUCCESS;
    }
  else {
      sim_log_debug(169U, "Forwarder", "%s: send failed as packet could not be enqueued.\n", __FUNCTION__);




      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SEND_QUEUE_FULL);


      return FAIL;
    }
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t ModuleTestC$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 1118 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setIp(message_t *msg, uint16_t ip)
#line 1118
{
#line 1118
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->ip.nxdata, ip);
}

# 61 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
inline static void ModuleTestC$CtpPacket$setIp(message_t *msg, uint16_t ip){
#line 61
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setIp(msg, ip);
#line 61
}
#line 61
# 61 "ModuleTestC.nc"
static inline uint16_t ModuleTestC$getHeaderIP(void )
#line 61
{
  if (ModuleTestC$final[sim_node()] != ModuleTestC$init[sim_node()]) {
      return ModuleTestC$buffer[sim_node()][ModuleTestC$init[sim_node()]];
    }
  else 
#line 64
    {
      return ModuleTestC$INVALID;
    }
}

#line 112
static inline void ModuleTestC$sendMessage$runTask(void )
#line 112
{
  uint16_t iP;

#line 114
  if (!ModuleTestC$sendBusy[sim_node()]) {
      iP = ModuleTestC$getHeaderIP();
      if (iP != ModuleTestC$INVALID) {
          __nesc_hton_uint32(ModuleTestC$Msg[sim_node()]->data.nxdata, ModuleTestC$counter[sim_node()]);
          ModuleTestC$CtpPacket$setIp(&ModuleTestC$packet[sim_node()], iP);
          if (ModuleTestC$Send$send(&ModuleTestC$packet[sim_node()], sizeof(ModuleTestC$MatrixMsg )) != SUCCESS) {

              ModuleTestC$Leds$led0On();
            }
          else {
              ModuleTestC$sendBusy[sim_node()] = TRUE;
            }
        }
    }
  ModuleTestC$timerTwo$startOneShot(ModuleTestC$sendINTERVAL[sim_node()] + ModuleTestC$Random$rand32() % ModuleTestC$sendINTERVAL[sim_node()]);
}

# 47 "CoinC.nc"
static inline void CoinC$RadioControl$startDone(error_t err)
#line 47
{
  CoinC$radioOn[sim_node()] = TRUE;
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void ModuleTestC$timerThree$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(10U, dt);
#line 62
}
#line 62
inline static void ModuleTestC$timerOne$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(8U, dt);
#line 62
}
#line 62
# 788 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t etx)
#line 788
{
  return SUCCESS;
}

# 68 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventRoute(type, parent, hopcount, metric);
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 279 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound(void )
#line 279
{
  sim_log_debug(164U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

# 51 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound(void ){
#line 51
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$routeFound();
#line 51
}
#line 51
# 605 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot(void )
#line 605
{
  bool route_found = FALSE;

#line 607
  route_found = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR;
  /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()] = 1;
  /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent = /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx = 0;

  if (route_found) {
    /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound();
    }
#line 614
  sim_log_debug(308U, "TreeRouting", "%s I'm a root now!\n", __FUNCTION__);
  /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(NET_C_TREE_NEW_PARENT, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent, 0, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
inline static error_t ModuleTestC$RootControl$setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 58 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(7U, dt);
#line 53
}
#line 53
# 214 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_One(void )
#line 214
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_One[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[sim_node()] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_One();
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 283 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$StdControl$start(void )
#line 283
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].id = /*CtpP.Matrix*/MatrixRoutingEngineP$0$AMPacket$address();


  if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON)) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON);
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_One();

      /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$startPeriodic(MATRIX_UPDATE_INTERVAL);
      sim_log_debug(314U, "MatrixTreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON), /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON));
    }
  return SUCCESS;
}

# 424 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$StdControl$start(void )
#line 424
{
  sim_log_debug(269U, "LI", "Link estimator start\n");
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(1U, dt);
#line 53
}
#line 53
# 57 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = TossimActiveMessageC$AMPacket$address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 228 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start(void )
#line 228
{
  /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[sim_node()] = /*CtpP.Router*/CtpRoutingEngineP$0$AMPacket$address();

  if (!/*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()] = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP$0$resetInterval();
      /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$startPeriodic(BEACON_INTERVAL);
      sim_log_debug(289U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
    }
  return SUCCESS;
}

# 1154 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(uint8_t state)
#line 1154
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] | state;
}

#line 235
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start(void )
#line 235
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ROUTING_ON);
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t ModuleTestC$RoutingControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$StdControl$start();
#line 74
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP$0$StdControl$start());
#line 74
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP$StdControl$start());
#line 74
  __nesc_result = ecombine(__nesc_result, /*CtpP.Matrix*/MatrixRoutingEngineP$0$StdControl$start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t ModuleTestC$RadioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = TossimPacketModelC$Control$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 89 "ModuleTestC.nc"
static inline void ModuleTestC$RadioControl$startDone(error_t err)
#line 89
{
  if (err != SUCCESS) {
    ModuleTestC$RadioControl$start();
    }
  else 
#line 92
    {
      ModuleTestC$RoutingControl$start();
      if (TOS_NODE_ID == 1) {
          ModuleTestC$RootControl$setRoot();
          ModuleTestC$sendINTERVAL[sim_node()] = 1000;
        }
    }
  if (!ModuleTestC$sendInit[sim_node()]) {
      ModuleTestC$sendInit[sim_node()] = TRUE;
      ModuleTestC$timerOne$startOneShot(ModuleTestC$INITSEND + ModuleTestC$Random$rand32() % (ModuleTestC$INITSEND / 2));
      ModuleTestC$timerThree$startOneShot(40000);
    }
}

# 303 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$startDone(error_t error)
#line 303
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON);
  sim_log_debug(316U, "MatrixTreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON), /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON));
}

# 53 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline bool /*CtpP.SendQueueP*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*CtpP.SendQueueP*/QueueC$0$size[sim_node()] == 0;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 252 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error_t err)
#line 252
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$RADIO_ON);
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
          sim_log_debug(162U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
        }
    }
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 246 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error_t error)
#line 246
{
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = TRUE;
  sim_log_debug(291U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
  if (/*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      uint16_t nextInt;

#line 251
      nextInt = /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand16() % BEACON_INTERVAL;
      nextInt += BEACON_INTERVAL >> 1;
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 92
  /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$startDone(error);
#line 92
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$startDone(error);
#line 92
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$startDone(error);
#line 92
  ModuleTestC$RadioControl$startDone(error);
#line 92
  CoinC$RadioControl$startDone(error);
#line 92
}
#line 92
# 88 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 88
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 52 "CoinC.nc"
static inline void CoinC$RadioControl$stopDone(error_t err)
#line 52
{
  CoinC$radioOn[sim_node()] = FALSE;
}

# 110 "ModuleTestC.nc"
static inline void ModuleTestC$RadioControl$stopDone(error_t err)
#line 110
{
}

# 796 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(uint8_t state)
#line 796
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[sim_node()] & ~state;
}

#line 308
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$stopDone(error_t error)
#line 308
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON);
  sim_log_debug(317U, "MatrixTreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON), /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON));
}

# 1148 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(uint8_t state)
#line 1148
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[sim_node()] & ~state;
}

#line 290
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error_t err)
#line 290
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$RADIO_ON);
    }
}

# 256 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error_t error)
#line 256
{
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = FALSE;
  sim_log_debug(292U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 117
  /*CtpP.Router*/CtpRoutingEngineP$0$RadioControl$stopDone(error);
#line 117
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RadioControl$stopDone(error);
#line 117
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$RadioControl$stopDone(error);
#line 117
  ModuleTestC$RadioControl$stopDone(error);
#line 117
  CoinC$RadioControl$stopDone(error);
#line 117
}
#line 117
# 93 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 93
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
}

# 303 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x2b5ed6430828, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x2b5ed6430828, msg, error);
#line 99
}
#line 99
# 95 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 95
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 68 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 68
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 68
}
#line 68
# 74 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 74
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 137
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 137
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 140
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 126 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *ack)
#line 126
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 128
  __nesc_hton_uint8(meta->ack.nxdata, FALSE);
  return SUCCESS;
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$noAck(message_t * msg){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$noAck(msg);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 81 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue(void ){
#line 81
  struct __nesc_unnamed4308 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 65 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$head(void )
#line 65
{
  return /*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][/*CtpP.SendQueueP*/QueueC$0$head[sim_node()]];
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$t  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head(void ){
#line 73
  struct __nesc_unnamed4308 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*CtpP.SendQueueP*/QueueC$0$Queue$head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 702 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$runTask(void )
#line 702
{
  sim_log_debug(188U, "Forwarder", "%s: Trying to send a packet by BROAD CAST. Queue size is %hhu.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING) || /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SENDQUEUE_EMPTY);
      return;
    }
  else {



      ctp_data_header_t *hdr;
      error_t subsendResult;
      fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();
      uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(qe->msg);
      am_addr_t dest = AM_BROADCAST_ADDR;
      uint16_t gradient = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MAX_METRIC;

#line 718
      hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg);
      __nesc_hton_uint8(hdr->bdt.nxdata, 1);

      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(qe->msg)) {




          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
            }
#line 730
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
            }
#line 732
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[sim_node()] = FALSE;

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
          return;
        }


      sim_log_debug(189U, "Forwarder", "Sending BROADCAST MESSAGE queue entry %p\n", qe);


      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(qe->msg, gradient);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$noAck(qe->msg) == SUCCESS) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING);
        }
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED)) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(qe->msg, CTP_OPT_ECN);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED);
        }

      subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(dest, qe->msg, payloadLen);
      if (subsendResult == SUCCESS) {

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
          sim_log_debug(190U, "Forwarder", "%s: subsend succeeded with sending BROADCAST %p.\n", __FUNCTION__, qe->msg);
          return;
        }
      else {
        if (subsendResult == ESIZE) {
            sim_log_debug(191U, "Forwarder", "%s: subsend failed from ESIZE: truncate packet.\n", __FUNCTION__);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength());
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$postTask();
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_SIZE);
          }
        else {
            sim_log_debug(192U, "Forwarder", "%s: subsend failed from %i\n", __FUNCTION__, (int )subsendResult);
          }
        }
    }
}

# 876 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP(uint16_t ip)
#line 876
{
  uint8_t i;

#line 878
  for (i = 0; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]; i++) {
      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][i].ip >= ip) {
        break;
        }
    }
#line 882
  return i;
}

#line 727
static inline am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(uint16_t ip)
#line 727
{
  uint8_t idx = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP(ip);

#line 729
  if (idx == /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]) {

      return INVALID_ADDR;
    }
  else 
#line 732
    {

      return /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][idx].id;
    }
}

# 40 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixUnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(uint16_t ip){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(ip);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 776 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighbors(void )
#line 776
{
  return /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()];
}

# 75 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixInfo.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixInfo$numNeighbors(void ){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighbors();
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 483 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDown(fe_queue_entry_t *qe)
#line 483
{
  uint16_t gradient = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MAX_METRIC;

  if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixInfo$numNeighbors()) {


      /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 492
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
      return;
    }
  else {
      error_t subsendResult;
      am_addr_t dest;
      uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(qe->msg);

#line 502
      dest = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$nextHop(__nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->ip.nxdata));

      if (dest == /*CtpP.Forwarder*/CtpForwardingEngineP$0$INVALID_ADDR || /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(qe->msg)) {




          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
            }
#line 513
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
            }
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
          return;
        }


      sim_log_debug(176U, "Forwarder", "Sending down queue entry %p\n", qe);

      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp() == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(qe->msg)) {

          collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->type.nxdata);
          uint8_t *payload;
          uint8_t payloadLength;

          memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], qe->msg, sizeof(message_t ));

          payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]));
          payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]);
          sim_log_debug(177U, "Forwarder", "%s: I'm destination, so loopback and signal receive.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], 
          payload, 
          payloadLength);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(qe->msg, SUCCESS);
        }
      else {

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(qe->msg, gradient);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(qe->msg) == SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING);
            }
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED)) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(qe->msg, CTP_OPT_ECN);
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED);
            }

          subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(dest, qe->msg, payloadLen);
          if (subsendResult == SUCCESS) {

              /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
              sim_log_debug(178U, "Forwarder", "%s: subsend succeeded with %p.\n", __FUNCTION__, qe->msg);
              return;
            }
          else {
            if (subsendResult == ESIZE) {
                sim_log_debug(179U, "Forwarder", "%s: subsend failed from ESIZE: truncate packet.\n", __FUNCTION__);
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength());
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_SIZE);
              }
            else {
                sim_log_debug(180U, "Forwarder", "%s: subsend failed from %i\n", __FUNCTION__, (int )subsendResult);
              }
            }
        }
    }
}

# 533 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop(void )
#line 533
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent;
}

# 48 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$Routing$nextHop();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 536 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute(void )
#line 536
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent != INVALID_ADDR;
}

# 49 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$Routing$hasRoute();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 632 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot(void )
#line 632
{
  return /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()];
}

# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 390 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendUp(fe_queue_entry_t *qe)
#line 390
{
  uint16_t gradient;


  if ((
#line 393
  !/*CtpP.Forwarder*/CtpForwardingEngineP$0$RootControl$isRoot() && 
  !/*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$hasRoute()) || 
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$getEtx(&gradient) != SUCCESS) {








      sim_log_debug(170U, "Forwarder", "%s: no route, don't send, try again in %i.\n", __FUNCTION__, NO_ROUTE_RETRY);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(NO_ROUTE_RETRY);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_NO_ROUTE);
      return;
    }
  else {
      error_t subsendResult;
      am_addr_t dest;
      uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(qe->msg);

#line 413
      dest = /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$nextHop();

      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(qe->msg)) {




          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
            }
#line 424
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
            }
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
          return;
        }


      sim_log_debug(171U, "Forwarder", "Sending up queue entry %p\n", qe);

      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp() == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(qe->msg)) {

          collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->type.nxdata);
          uint8_t *payload;
          uint8_t payloadLength;

          memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], qe->msg, sizeof(message_t ));

          payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]));
          payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]);
          sim_log_debug(172U, "Forwarder", "%s: I'm destinatio, so loopback and signal receive.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], 
          payload, 
          payloadLength);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(qe->msg, SUCCESS);
        }
      else {

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(qe->msg, gradient);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(qe->msg) == SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING);
            }
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED)) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(qe->msg, CTP_OPT_ECN);
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED);
            }

          subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(dest, qe->msg, payloadLen);
          if (subsendResult == SUCCESS) {

              /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
              sim_log_debug(173U, "Forwarder", "%s: subsend succeeded with %p.\n", __FUNCTION__, qe->msg);
              return;
            }
          else {
            if (subsendResult == ESIZE) {
                sim_log_debug(174U, "Forwarder", "%s: subsend failed from ESIZE: truncate packet.\n", __FUNCTION__);
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength());
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_SIZE);
              }
            else {
                sim_log_debug(175U, "Forwarder", "%s: subsend failed from %i\n", __FUNCTION__, (int )subsendResult);
              }
            }
        }
    }
}

# 39 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixUnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(uint16_t ip){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(ip);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 925 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP_Temporary(uint16_t ip)
#line 925
{
  uint8_t i;

#line 927
  for (i = 0; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]; i++) {
      if (ip > /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].ip || ip < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].ip - /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].range) {
        break;
        }
    }
#line 931
  return i;
}

#line 738
static inline am_addr_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(uint16_t ip)
#line 738
{
  uint8_t idx;

#line 740
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]) {
      idx = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFindIP_Temporary(ip);
      if (idx == /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]) {
          return INVALID_ADDR;
        }
      else 
#line 744
        {
          return /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][idx].id;
        }
    }
  else 
#line 747
    {
      return INVALID_ADDR;
    }
}

# 41 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixUnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(uint16_t ip){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(ip);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 780 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighborsTemporary(void )
#line 780
{
  return /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()];
}

# 77 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixInfo.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixInfo$numNeighborsTemporary(void ){
#line 77
  unsigned char __nesc_result;
#line 77

#line 77
  __nesc_result = /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixInfo$numNeighborsTemporary();
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 572 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardBroadCast(fe_queue_entry_t *qe)
#line 572
{
  uint16_t gradient = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MAX_METRIC;

  if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixInfo$numNeighborsTemporary()) {



      sim_log_debug(181U, "Forwarder", "%s: no temporary neighbors, don't send.\n", __FUNCTION__);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 584
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
#line 586
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[sim_node()] = FALSE;

      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
      return;
    }
  else {
      error_t subsendResult;
      ctp_data_header_t *hdr;
      am_addr_t dest;
      uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(qe->msg);

#line 596
      dest = /*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$nextHopTemporary(__nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->ip.nxdata));

      /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[sim_node()] = TRUE;
      hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg);
      __nesc_hton_uint8(hdr->bdt.nxdata, 0);

      if (dest == /*CtpP.Forwarder*/CtpForwardingEngineP$0$INVALID_ADDR || /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$lookup(qe->msg)) {




          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
            }
#line 611
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
            }
#line 613
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[sim_node()] = FALSE;

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
          return;
        }


      sim_log_debug(182U, "Forwarder", "FORWARD MESSAGE FROM BROADCAST QUEUE ENTRY %p\n", qe);

      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$myIp() == /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(qe->msg)) {

          collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg)->type.nxdata);
          uint8_t *payload;
          uint8_t payloadLength;

          memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], qe->msg, sizeof(message_t ));

          payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]));
          payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()]);
          sim_log_debug(183U, "Forwarder", "%s: I'm a root, so loopback and signal receive.\n", __FUNCTION__);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Receive$receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()], 
          payload, 
          payloadLength);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(qe->msg, SUCCESS);
        }
      else {

          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(qe->msg, gradient);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(qe->msg) == SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING);
            }
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED)) {
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(qe->msg, CTP_OPT_ECN);
              /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$QUEUE_CONGESTED);
            }

          subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$send(dest, qe->msg, payloadLen);
          if (subsendResult == SUCCESS) {

              /*CtpP.Forwarder*/CtpForwardingEngineP$0$setState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
              sim_log_debug(184U, "Forwarder", "%s: subsend succeeded with forwarding A BROADCAST MESSAGE %p.\n", __FUNCTION__, qe->msg);
              return;
            }
          else {
            if (subsendResult == ESIZE) {
                sim_log_debug(185U, "Forwarder", "%s: subsend failed from ESIZE: truncate packet.\n", __FUNCTION__);
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$maxPayloadLength());
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
                /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SUBSEND_SIZE);
              }
            else {
                sim_log_debug(186U, "Forwarder", "%s: subsend failed from %i\n", __FUNCTION__, (int )subsendResult);
              }
            }
        }
    }
}

#line 671
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask(void )
#line 671
{
  sim_log_debug(187U, "Forwarder", "%s: Trying to send a packet. Queue size is %hhu.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$size());
  if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING) || /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$empty()) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_SENDQUEUE_EMPTY);
      return;
    }
  else {



      ctp_data_header_t *hdr;
      fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();

#line 683
      hdr = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(qe->msg);

      if (__nesc_ntoh_uint8(hdr->bdt.nxdata) || /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[sim_node()]) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardBroadCast(qe);
        }
      else {
          if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(/*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(qe->msg))) {

              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendUp(qe);
            }
          else {


              /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendDown(qe);
            }
        }
    }
}

# 128 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned int __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
#line 92
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 89 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 155 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 4 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 112);
  return /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 101 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline linkest_footer_t *LinkEstimatorP$getFooter(message_t *m, uint8_t len)
#line 101
{

  return (linkest_footer_t *)(len + (uint8_t *)LinkEstimatorP$Packet$getPayload(m, len + sizeof(linkest_footer_t )));
}




static inline uint8_t LinkEstimatorP$addLinkEstHeaderAndFooter(message_t *msg, uint8_t len)
#line 109
{
  unsigned char *__nesc_temp44;
#line 110
  uint8_t newlen;
  linkest_header_t * hdr;
  linkest_footer_t * footer;
  uint8_t i;
#line 113
  uint8_t j;
#line 113
  uint8_t k;
  uint8_t maxEntries;
#line 114
  uint8_t newPrevSentIdx;

#line 115
  sim_log_debug(252U, "LI", "newlen1 = %d\n", len);
  hdr = LinkEstimatorP$getHeader(msg);
  footer = LinkEstimatorP$getFooter(msg, len);

  maxEntries = (LinkEstimatorP$SubPacket$maxPayloadLength() - len - sizeof(linkest_header_t ))
   / sizeof(linkest_footer_t );



  if (maxEntries > NUM_ENTRIES_FLAG) {
      maxEntries = NUM_ENTRIES_FLAG;
    }
  sim_log_debug(253U, "LI", "Max payload is: %d, maxEntries is: %d\n", LinkEstimatorP$SubPacket$maxPayloadLength(), maxEntries);

  j = 0;
  newPrevSentIdx = 0;
  for (i = 0; i < 10 && j < maxEntries; i++) {
      uint8_t neighborCount;
      neighbor_stat_entry_t * neighborLists;

#line 134
      if (maxEntries <= 10) {
        neighborCount = maxEntries;
        }
      else {
#line 137
        neighborCount = 10;
        }
      neighborLists = (neighbor_stat_entry_t * )footer->neighborList;
      k = (LinkEstimatorP$prevSentIdx[sim_node()] + i + 1) % 10;
      if (LinkEstimatorP$NeighborTable[sim_node()][k].flags & VALID_ENTRY && 
      LinkEstimatorP$NeighborTable[sim_node()][k].flags & MATURE_ENTRY) {
          __nesc_hton_uint16(neighborLists[j].ll_addr.nxdata, LinkEstimatorP$NeighborTable[sim_node()][k].ll_addr);
          __nesc_hton_uint8(neighborLists[j].inquality.nxdata, LinkEstimatorP$NeighborTable[sim_node()][k].inquality);
          newPrevSentIdx = k;
          sim_log_debug(254U, "LI", "Loaded on footer: %d %d %d\n", j, __nesc_ntoh_uint16(neighborLists[j].ll_addr.nxdata), __nesc_ntoh_uint8(neighborLists[j].inquality.nxdata));

          j++;
        }
    }
  LinkEstimatorP$prevSentIdx[sim_node()] = newPrevSentIdx;

  __nesc_hton_uint8(hdr->seq.nxdata, LinkEstimatorP$linkEstSeq[sim_node()]++);
  __nesc_hton_uint8(hdr->flags.nxdata, 0);
  (__nesc_temp44 = hdr->flags.nxdata, __nesc_hton_uint8(__nesc_temp44, __nesc_ntoh_uint8(__nesc_temp44) | (NUM_ENTRIES_FLAG & j)));
  newlen = sizeof(linkest_header_t ) + len + j * sizeof(linkest_footer_t );
  sim_log_debug(255U, "LI", "newlen2 = %d\n", newlen);
  return newlen;
}

#line 555
static inline error_t LinkEstimatorP$Send$send(am_addr_t addr, message_t *msg, uint8_t len)
#line 555
{
  uint8_t newlen;

#line 557
  newlen = LinkEstimatorP$addLinkEstHeaderAndFooter(msg, len);
  sim_log_debug(274U, "LITest", "%s packet of length %hhu became %hhu\n", __FUNCTION__, len, newlen);
  sim_log_debug(275U, "LI", "Sending seq: %d\n", LinkEstimatorP$linkEstSeq[sim_node()]);
  LinkEstimatorP$print_packet(msg, newlen);
  return LinkEstimatorP$AMSend$send(addr, msg, newlen);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = LinkEstimatorP$Send$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 1061 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested(void )
#line 1061
{
  return FALSE;
}

# 7 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpCongestion.nc"
inline static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested(void ){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpCongestion$isCongested();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 393 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask(void )
#line 393
{
  unsigned char *__nesc_temp46;
  unsigned char *__nesc_temp45;
#line 394
  error_t eval;

#line 395
  if (/*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()]) {
      return;
    }

  __nesc_hton_uint8(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->options.nxdata, 0);


  if (/*CtpP.Router*/CtpRoutingEngineP$0$CtpCongestion$isCongested()) {
      (__nesc_temp45 = /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->options.nxdata, __nesc_hton_uint8(__nesc_temp45, __nesc_ntoh_uint8(__nesc_temp45) | CTP_OPT_ECN));
    }

  __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->parent.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent);
  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()]) {
      __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx);
    }
  else {
#line 410
    if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx);
        (__nesc_temp46 = /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->options.nxdata, __nesc_hton_uint8(__nesc_temp46, __nesc_ntoh_uint8(__nesc_temp46) | CTP_OPT_PULL));
      }
    else 
#line 413
      {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx + /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent));
      }
    }
  sim_log_debug(300U, "TreeRouting", "%s parent: %d etx: %d\n", __FUNCTION__, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->parent.nxdata), __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata));



  /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventRoute(NET_C_TREE_SENT_BEACON, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->parent.nxdata), 0, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()]->etx.nxdata));

  eval = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$send(AM_BROADCAST_ADDR, 
  &/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[sim_node()], 
  sizeof(ctp_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()] = TRUE;
    }
  else {
#line 428
    if (eval == EOFF) {
        /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = FALSE;
        sim_log_debug(301U, "TreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()]);
      }
    }
}

# 284 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute(void )
#line 284
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute(void ){
#line 52
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$UnicastNameFreeRouting$noRoute();
#line 52
}
#line 52
# 540 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$clearDLQ(am_addr_t neighbor)
#line 540
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 543
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP$NeighborTable[sim_node()][nidx];
  ne->data_total = 0;
  ne->data_success = 0;
  return SUCCESS;
}

# 58 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(am_addr_t neighbor){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = LinkEstimatorP$LinkEstimator$clearDLQ(neighbor);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 495 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$unpinNeighbor(am_addr_t neighbor)
#line 495
{
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 497
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP$NeighborTable[sim_node()][nidx].flags &= ~PINNED_ENTRY;
  return SUCCESS;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(am_addr_t neighbor){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = LinkEstimatorP$LinkEstimator$unpinNeighbor(neighbor);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 782 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
#line 782
{
  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.1/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$default$logEventDbg(type, arg1, arg2, arg3);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 35 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC$Random$rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 314 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent)
#line 314
{
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED)) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[sim_node()] = newParent;
      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[sim_node()] != /*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[sim_node()]) {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[sim_node()] = TRUE;
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$startOneShot(MATRIX_BEACON_INTERVAL / 2 + /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand32() % (MATRIX_BEACON_INTERVAL / 2));
        }
      else {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[sim_node()] = FALSE;
        }
    }
}

# 263 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent)
#line 263
{
}

# 100 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$parentChanged(am_addr_t newParent){
#line 100
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$parentChanged(newParent);
#line 100
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$parentChanged(newParent);
#line 100
}
#line 100
# 271 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask(void )
#line 271
{
  uint8_t i;
  routing_table_entry *entry;
  routing_table_entry *best;
  uint16_t minEtx;
  uint16_t currentEtx;
  uint16_t linkEtx;
#line 277
  uint16_t pathEtx;

  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()]) {
    return;
    }
  best = (void *)0;

  minEtx = MAX_METRIC;

  currentEtx = MAX_METRIC;

  sim_log_debug(293U, "TreeRouting", "%s\n", __FUNCTION__);


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i];


      if (entry->info.parent == INVALID_ADDR || entry->info.parent == /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[sim_node()]) {
          sim_log_debug(294U, "TreeRouting", "routingTable[%d]: neighbor: [id: %d parent: %d  etx: NO ROUTE]\n", i, entry->neighbor, entry->info.parent);


          continue;
        }

      linkEtx = /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(entry->neighbor);
      sim_log_debug(295U, "TreeRouting", "routingTable[%d]: neighbor: [id: %d parent: %d etx: %d retx: %d]\n", i, entry->neighbor, entry->info.parent, linkEtx, entry->info.etx);


      pathEtx = linkEtx + entry->info.etx;

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent) {
          sim_log_debug(296U, "TreeRouting", "   already parent.\n");
          currentEtx = pathEtx;

          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx = entry->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested = entry->info.congested;
          continue;
        }

      if (entry->info.congested) {
        continue;
        }
      if (!/*CtpP.Router*/CtpRoutingEngineP$0$passLinkEtxThreshold(linkEtx)) {
          sim_log_debug(297U, "TreeRouting", "   did not pass threshold.\n");
          continue;
        }

      if (pathEtx < minEtx) {
          sim_log_debug(298U, "TreeRouting", "   best is %d, setting to %d\n", pathEtx, entry->neighbor);
          minEtx = pathEtx;
          best = entry;
        }
    }
#line 345
  if (minEtx != MAX_METRIC) {

      if ((
#line 346
      currentEtx == MAX_METRIC || (
      /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested && minEtx < /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx + 10)) || 
      minEtx + PARENT_SWITCH_THRESHOLD < currentEtx) {




          /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[sim_node()]++;


          /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$parentChanged(best->neighbor);

          sim_log_debug(299U, "TreeRouting", "Changed parent. from %d to %d\n", /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent, best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP$0$CollectionDebug$logEventDbg(NET_C_TREE_NEW_PARENT, best->neighbor, best->info.etx, minEtx);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$unpinNeighbor(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$pinNeighbor(best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$clearDLQ(best->neighbor);

          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent = best->neighbor;
          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx = best->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].congested = best->info.congested;
          if (currentEtx - minEtx > 20) {
              /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$triggerRouteUpdate();
            }
        }
    }




  if (/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] && /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
    /*CtpP.Router*/CtpRoutingEngineP$0$Routing$noRoute();
    }
  else {



    if (
#line 382
    !/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] && 
    currentEtx == MAX_METRIC && 
    minEtx != MAX_METRIC) {
      /*CtpP.Router*/CtpRoutingEngineP$0$Routing$routeFound();
      }
    }
#line 386
  /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] = FALSE;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(3U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setDestination(msg, dest);
  /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMPacket$setType(msg, 241);
  return /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$send(msg, len);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 399 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$runTask(void )
#line 399
{
  error_t eval;

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[sim_node()]) {
      return;
    }

  __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[sim_node()]->ip.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip);
  __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[sim_node()]->range.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()]);



  eval = /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$send(/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[sim_node()], &/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[sim_node()], sizeof(Matrix_beacon_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[sim_node()] = TRUE;
    }
  else {
#line 414
    if (eval == EOFF) {
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON);
        sim_log_debug(322U, "MatrixTreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON), /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON));
      }
    }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 120 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg)
#line 120
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 122
  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 48 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$requestAck(message_t * msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$requestAck(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 373 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$runTask(void )
#line 373
{
  error_t eval;

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING)) {
      return;
    }


  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$requestAck(&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[sim_node()]) == SUCCESS) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$ACK_PENDING);
    }

  __nesc_hton_uint8(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->options.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$DISTRIBUTION_MSG);

  sim_log_debug(320U, "MatrixRouting", "%s parent: %d etx: %d\n", __FUNCTION__, __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->ip_node.nxdata), __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata));

  eval = /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$send(/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].id, &/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[sim_node()], sizeof(Matrix_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING);
    }
  else {
#line 392
    if (eval == EOFF) {
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON);
        sim_log_debug(321U, "MatrixTreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON), /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON));
      }
    }
}

#line 346
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$runTask(void )
#line 346
{
  error_t eval;

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING)) {
      return;
    }


  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$requestAck(&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[sim_node()]) == SUCCESS) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$ACK_PENDING);
    }


  __nesc_hton_uint8(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->options.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$AGGREGATION_MSG);
  __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].downwards + /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]);


  eval = /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$send(/*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[sim_node()], &/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[sim_node()], sizeof(Matrix_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING);
    }
  else {
#line 366
    if (eval == EOFF) {
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON);
        sim_log_debug(319U, "MatrixTreeRoutingCtl", "%s running: %d radioOn: %d\n", __FUNCTION__, /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON), /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON));
      }
    }
}

#line 936
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$routingTemporaryTableEvict(am_addr_t node)
#line 936
{
  uint8_t idx;
#line 937
  uint8_t i;

#line 938
  idx = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind_Temporary(node);
  if (idx == /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]) {
    return FAIL;
    }
#line 941
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]--;
  for (i = idx; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]; i++) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i + 1];
    }
  return SUCCESS;
}

#line 331
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$runTask(void )
#line 331
{
  uint8_t i;

  for (i = 0; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]; i++) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].valid = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].valid >> 1;
      if (! /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].valid) {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$routingTemporaryTableEvict(/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].id);
        }
    }

  sim_log_debug(318U, "MatrixRouting", "%s\n", __FUNCTION__);
}

# 213 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2b5ed60cbab0){
#line 64
  switch (arg_0x2b5ed60cbab0) {
#line 64
    case ModuleTestC$sendMessage:
#line 64
      ModuleTestC$sendMessage$runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC$startDoneTask:
#line 64
      TossimPacketModelC$startDoneTask$runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC$stopDoneTask:
#line 64
      TossimPacketModelC$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC$sendDoneTask:
#line 64
      TossimPacketModelC$sendDoneTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask:
#line 64
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask:
#line 64
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask:
#line 64
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask:
#line 64
      /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask:
#line 64
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask:
#line 64
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask:
#line 64
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$runTask();
#line 64
      break;
#line 64
    case /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask:
#line 64
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x2b5ed60cbab0);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
#line 151
inline static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(2U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 83 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 136 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
#line 67
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x2b5ed6d077d8, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x2b5ed6d077d8, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 475 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 475
{
  free(msg);
}

# 53 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 77 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 77
  TossimActiveMessageC$Model$receive(msg);
#line 77
}
#line 77
# 280 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 280
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 52 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 52
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 52
}
#line 52
# 252 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 252
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 255
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 288
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 288
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(141U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 303
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(142U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 309
  sim_log_debug(143U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(144U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 319
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(145U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(146U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(147U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(148U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(149U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(150U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(151U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 459
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 459
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 461
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 471
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 361
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 361
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 366
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(152U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 388
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(153U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 392
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(154U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 396
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(155U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 404
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(156U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 420
{
  int prevNode = sim_node();

#line 422
  sim_log_debug(157U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 428
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 431
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(158U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 438
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(159U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 40 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 40
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 40
}
#line 40
# 272 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 272
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 274
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(133U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 241
static inline int TossimPacketModelC$sim_packet_header_length(void )
#line 241
{
  return sizeof(tossim_header_t );
}

static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 245
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * (TossimPacketModelC$sendingLength[sim_node()] + TossimPacketModelC$sim_packet_header_length());
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(131U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(132U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 451 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 451
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(160U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 49
  CpmModelC$Model$setPendingTransmission();
#line 49
}
#line 49
# 203 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 203
{
  sim_log_debug(139U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 48 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = CpmModelC$Model$clearChannel();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 203 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 203
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 213
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 221
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 225
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 235
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(130U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 179
static inline void TossimPacketModelC$start_csma(void )
#line 179
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 186
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(129U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 153
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 153
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(127U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(128U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 82 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 82
{
  sim_time_t ftime = sim_time();
  int hours;
#line 84
  int minutes;
#line 84
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 4;
  for (i = 0; i < 4; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 4;
        }
      else {
          break;
        }
    }
  if (i >= 4) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 4;
    }
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 499 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error)
#line 499
{
  if (error != SUCCESS) {
      sim_log_debug(330U, "MatrixTreeRoutingCtl", "%s: send failed\n", __FUNCTION__);
    }
  else {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[sim_node()] = FALSE;
      sim_log_debug_clear(331U, "beacons", "%s:enviou:%d:\n", sim_time_string(), TOS_NODE_ID);
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$sendDone(m, err);
}

# 446 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$printt(void )
#line 446
{
  int i;

#line 448
  sim_log_debug(324U, "Table", "\nIP: %d\t range: %d reserved: %d\n", /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip, /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()], /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[sim_node()]);
  for (i = 0; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]; i++) {
      sim_log_debug_clear(325U, "Table", "filho:%d\t ip:%d\n", /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][i].id, /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][i].ip);
    }
  sim_log_debug_clear(326U, "Table", "\n");
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$wasAcked(message_t * msg){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$wasAcked(msg);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 455 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$sendDone(message_t *msg, error_t error)
#line 455
{
  if (error != SUCCESS) {

      sim_log_debug(327U, "MatrixTreeRoutingCtl", "%s: send failed\n", __FUNCTION__);
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$startRetxmitTimer(R_MATRIX_SENDDONE_FAIL_WINDOW, R_MATRIX_SENDDONE_FAIL_OFFSET);
    }
  else {
      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$ACK_PENDING) && !/*CtpP.Matrix*/MatrixRoutingEngineP$0$PacketAcknowledgements$wasAcked(msg)) {

          if (--/*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[sim_node()]) {
              sim_log_debug(328U, "MatrixTreeRoutingCtl", "%s: not acked, retransmit\n", __FUNCTION__);
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$startRetxmitTimer(R_MATRIX_SENDDONE_NOACK_WINDOW, R_MATRIX_SENDDONE_NOACK_OFFSET);
            }
          else 
#line 467
            {

              /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING);
            }
        }
      else 

        {

          /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING);
          sim_log_debug_clear(329U, "beacons", "%s:enviou:%d:\n", sim_time_string(), TOS_NODE_ID);

          if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENDING)) {
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]++;
              if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()] < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]) {
                  __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] * 0.9 * (/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].downwards + 1) / (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()] + /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].downwards));
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip = /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()] - 1].ip + __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata) - 1;
                  __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->ip_node.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip);
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[sim_node()] = R_MATRIX_MAX_RETRIES;
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask();
                }
              else 
#line 487
                {
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip - /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()] - 1].ip;
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENDING);
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENT);
                  /*CtpP.Matrix*/MatrixRoutingEngineP$0$printt();
                }
            }
        }
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$sendDone(m, err);
}

# 41 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(5U, dt);
#line 62
}
#line 62
# 434 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(message_t *msg, error_t error)
#line 434
{
  if (msg != &/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[sim_node()] || !/*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()]) {

      return;
    }
  sim_log_debug_clear(302U, "beacons", "%s:enviou:%d:\n", sim_time_string(), TOS_NODE_ID);
  /*CtpP.Router*/CtpRoutingEngineP$0$sending[sim_node()] = FALSE;
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorP$Send$sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$sendDone(msg, error);
#line 99
}
#line 99
# 566 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$AMSend$sendDone(message_t *msg, error_t error)
#line 566
{
  LinkEstimatorP$Send$sendDone(msg, error);
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  LinkEstimatorP$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(message_t * msg){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$wasAcked(msg);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 524 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$txNoAck(am_addr_t neighbor)
#line 524
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 527
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }

  ne = &LinkEstimatorP$NeighborTable[sim_node()][nidx];
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP$DLQ_PKT_WINDOW) {
      LinkEstimatorP$updateDETX(ne);
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(am_addr_t neighbor){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = LinkEstimatorP$LinkEstimator$txNoAck(neighbor);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 563 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes(void )
#line 563
{
  /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
}

# 83 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes(void ){
#line 83
  /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$recomputeRoutes();
#line 83
}
#line 83
# 507 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP$LinkEstimator$txAck(am_addr_t neighbor)
#line 507
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 510
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP$NeighborTable[sim_node()][nidx];
  ne->data_success++;
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP$DLQ_PKT_WINDOW) {
      LinkEstimatorP$updateDETX(ne);
    }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(am_addr_t neighbor){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LinkEstimatorP$LinkEstimator$txAck(neighbor);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(message_t *msg){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
#line 69
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(message_t *msg){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(msg);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
#line 66
inline static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(message_t *msg){
#line 66
  unsigned short __nesc_result;
#line 66

#line 66
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 100 "/opt/tinyos-2.1.1/tos/lib/net/matrix/LruCtpMsgCacheP.nc"
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(uint8_t i)
#line 100
{
  uint8_t j;

#line 102
  if (i >= /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) {
    return;
    }
#line 104
  if (i == 0) {

      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] = (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + 1) % 4;
    }
  else 
#line 107
    {

      for (j = i; j < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]; j++) {
          memcpy(&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()]) % 4], &/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + 1) % 4], sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$ctp_packet_sig_t ));
        }
    }
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]--;
}

static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(message_t *m)
#line 116
{
  uint8_t i;

#line 118
  if (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()] == 4) {





      i = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(m);
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$remove(i % /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]);
    }

  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].origin = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].seqno = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].thl = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]) % 4].type = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]++;
}

# 40 "/opt/tinyos-2.1.1/tos/interfaces/Cache.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$t item){
#line 40
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Cache$insert(item);
#line 40
}
#line 40
# 69 "ModuleTestC.nc"
static inline void ModuleTestC$removeIP(void )
#line 69
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 70
    {
      if (ModuleTestC$final[sim_node()] != ModuleTestC$init[sim_node()]) {
          ModuleTestC$init[sim_node()] = (ModuleTestC$init[sim_node()] + 1) % ModuleTestC$MAX;
        }
    }
#line 74
    __nesc_atomic_end(__nesc_atomic); }
}

#line 145
static inline void ModuleTestC$Send$sendDone(message_t *msg, error_t error)
#line 145
{
  if (error != SUCCESS) {
      ModuleTestC$Leds$led0On();
    }
  else 
#line 148
    {
      ModuleTestC$removeIP();

      sim_log_debug(47U, "Message_App", "SENT :%s\n", sim_time_string());

      ModuleTestC$counter[sim_node()]++;
    }
  ModuleTestC$sendBusy[sim_node()] = FALSE;
}

# 1161 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline 
#line 1160
void 
/*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(uint8_t client, message_t *msg, error_t error)
#line 1161
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(uint8_t arg_0x2b5ed66cb3f0, message_t * msg, error_t error){
#line 89
  switch (arg_0x2b5ed66cb3f0) {
#line 89
    case 0U:
#line 89
      ModuleTestC$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$default$sendDone(arg_0x2b5ed66cb3f0, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 783 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success)
#line 783
{



  if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][qe->client] = qe;
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$sendDone(qe->client, msg, SUCCESS);
      if (success) {
          sim_log_debug(193U, "CtpForwarder", "%s: packet %hu.%hhu for client %hhu acknowledged.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), qe->client);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENT_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
      else 
#line 796
        {
          sim_log_debug(194U, "CtpForwarder", "%s: packet %hu.%hhu for client %hhu dropped.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), qe->client);
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_SEND, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
    }
  else {
      if (success) {
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$SentCache$insert(qe->msg);
          sim_log_debug(195U, "CtpForwarder", "%s: forwarded packet %hu.%hhu acknowledged: insert in transmit queue.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg));
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_FWD_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
      else {
          sim_log_debug(196U, "CtpForwarder", "%s: forwarded packet %hu.%hhu dropped.\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg));
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_FWD, 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        }
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MessagePool$put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 822
      if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$QEntryPool$put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
    }
}

# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 2);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 30
}
#line 30
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 2)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool LedsP$Led0$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 222 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 222
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 231
  sim_log_debug(140U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 234
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 237
  return prr_hat;
}

# 119 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 119
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 121
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(110U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 79 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 288 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 288
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 291
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(134U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 51 "/opt/tinyos-2.1.1/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 51
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 51
}
#line 51
# 143 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 143
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 149
  sim_log_debug(137U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 152
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 155
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 158
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 161
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 165
        prr = 0.0;
        }
    }
#line 167
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 170
{






  if (
#line 176
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 183
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 198 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval(void )
#line 198
{
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] *= 2;
  if (/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] > 512000) {
      /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()] = 512000;
    }
  /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime();
}

static inline void /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval(void )
#line 206
{
  uint32_t remaining = /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()];

#line 208
  remaining -= /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[sim_node()] = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(remaining);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 449 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired(void )
#line 449
{
  if (/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] && /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      if (!/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[sim_node()]) {
          /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
          /*CtpP.Router*/CtpRoutingEngineP$0$sendBeaconTask$postTask();
          sim_log_debug(303U, "RoutingTimer", "Beacon timer fired at %s\n", sim_time_string());
          /*CtpP.Router*/CtpRoutingEngineP$0$remainingInterval();
        }
      else {
          /*CtpP.Router*/CtpRoutingEngineP$0$decayInterval();
        }
    }
}

#line 443
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired(void )
#line 443
{
  if (/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] && /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()]) {
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
}

# 1055 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired(void )
#line 1055
{
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
  sim_log_debug(205U, "FHangBug", "%s posted sendTask.\n", __FUNCTION__);
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendTask$postTask();
}

# 64 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(etx);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 220 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_One(void )
#line 220
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[sim_node()] *= 2;
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[sim_node()] > /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One[sim_node()]) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One[sim_node()];
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[sim_node()]++;
    }
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_One();
}

static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_One(void )
#line 229
{
  uint32_t remaining_One = /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[sim_node()];

#line 231
  remaining_One -= /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[sim_node()] = TRUE;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$startOneShot(remaining_One);
}

# 541 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getParent(am_addr_t *parent)
#line 541
{
  if (parent == (void *)0) {
    return FAIL;
    }
#line 544
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
    return FAIL;
    }
#line 546
  *parent = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent;
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpInfo.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$getParent(am_addr_t *parent){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getParent(parent);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 511 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$fired(void )
#line 511
{
  bool hasParent;
  uint16_t newParent;
  uint16_t etx;

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[sim_node()] < /*CtpP.Matrix*/MatrixRoutingEngineP$0$k_One[sim_node()]) {
      if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[sim_node()]) {
          hasParent = /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$getParent(&newParent);

          if (newParent != /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[sim_node()] || hasParent) {
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_One();
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[sim_node()] = newParent;
            }
          else {
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_One();
            }
        }
      else {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_One();
        }
    }
  else {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[sim_node()];
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$CtpInfo$getEtx(&etx);

      /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[sim_node()] + 5 * /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[sim_node()] / (etx + 1);
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[sim_node()] + 5 * /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[sim_node()] / (etx + 1);

      /*CtpP.Matrix*/MatrixRoutingEngineP$0$stable[sim_node()] = TRUE;
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$resetInterval_Two();
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 576 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$trickleTimerTwo_noRoot(void )
#line 576
{
  if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED)) {
      if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[sim_node()]) {
          if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$NEW_MESSAGE) && /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON) && /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON)) {

              /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[sim_node()] = R_MATRIX_MAX_RETRIES;
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$postTask();
              /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$NEW_MESSAGE);
            }
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_Two();
        }
      else {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_Two();
        }
    }
}

#line 547
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$trickleTimerTwo_Root(void )
#line 547
{
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[sim_node()] < /*CtpP.Matrix*/MatrixRoutingEngineP$0$k_Two[sim_node()]) {
      if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[sim_node()]) {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_Two();
        }
      else {
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_Two();
        }
    }
  else {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip = 65534;
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] = 65534;
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED);

      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]) {

          __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] * 0.9 * (/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].downwards + 1) / (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()] + /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].downwards));
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip = /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip - /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()] + __nesc_ntoh_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->data.nxdata) - 1;
          __nesc_hton_uint16(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()]->ip_node.nxdata, /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[sim_node()]].ip);

          /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_SENDING);
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[sim_node()] = R_MATRIX_MAX_RETRIES;
          /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask();
        }
    }
}

# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$RootControl$isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 594 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$fired(void )
#line 594
{
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$RootControl$isRoot()) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$trickleTimerTwo_Root();
    }
  else {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$trickleTimerTwo_noRoot();
    }
}

#line 420
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$fired(void )
#line 420
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$clearState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$SENDING);
  sim_log_debug(323U, "MatrixFHangBug", "%s posted sendTask.\n", __FUNCTION__);
  if (!/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED)) {
    /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendAggregationTask$postTask();
    }
  else {
#line 426
    /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendDistributionTask$postTask();
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 429 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$fired(void )
#line 429
{
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RADIO_ON) && /*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$RUNNING_ON)) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBeaconTask$postTask();
    }

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[sim_node()]) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$startOneShot(MATRIX_BEACON_INTERVAL / 2 + /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand32() % (MATRIX_BEACON_INTERVAL / 2));
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 439 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$fired(void )
#line 439
{

  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$updateTemporaryTableTask$postTask();
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t ModuleTestC$sendMessage$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(ModuleTestC$sendMessage);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
inline static bool ModuleTestC$RootControl$isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 131 "ModuleTestC.nc"
static inline void ModuleTestC$timerOne$fired(void )
#line 131
{
  uint8_t i;

#line 133
  if (!ModuleTestC$RootControl$isRoot()) {
      for (i = 0; i < ModuleTestC$COUNT; i++) {
          ModuleTestC$insertIP(ModuleTestC$ROOT);
        }
    }
  ModuleTestC$sendMessage$postTask();
}

static inline void ModuleTestC$timerTwo$fired(void )
#line 141
{
  ModuleTestC$sendMessage$postTask();
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void CoinC$RegularTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(12U, dt);
#line 53
}
#line 53
# 43 "/opt/tinyos-2.1.1/tos/lib/net/RootControl.nc"
inline static bool CoinC$RootControl$isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP$0$RootControl$isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 35 "CoinC.nc"
static inline error_t CoinC$CoinControl$start(void )
#line 35
{
  if (!CoinC$coinOn[sim_node()] && !CoinC$RootControl$isRoot()) {
      CoinC$coinOn[sim_node()] = TRUE;
      CoinC$RegularTimer$startPeriodic(CoinC$interval[sim_node()]);
    }
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t ModuleTestC$CoinControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CoinC$CoinControl$start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 106 "ModuleTestC.nc"
static inline void ModuleTestC$timerThree$fired(void )
#line 106
{
  ModuleTestC$CoinControl$start();
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t CoinC$RadioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = TossimPacketModelC$Control$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 75 "CoinC.nc"
static inline void CoinC$RandomTimer$fired(void )
#line 75
{
  if (!CoinC$radioOn[sim_node()]) {
    CoinC$RadioControl$start();
    }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void CoinC$RandomTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(11U, dt);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$stopDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$stopDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 107 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Control$stop(void )
#line 107
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(125U, "TossimPacketModelC", "TossimPacketModelC: Control.stop() called before initialization!\n");
      return FAIL;
    }
  TossimPacketModelC$running[sim_node()] = FALSE;
  sim_log_debug(126U, "TossimPacketModelC", "TossimPacketModelC: Control.stop() called.\n");
  TossimPacketModelC$stopDoneTask$postTask();
  return SUCCESS;
}

# 109 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t CoinC$RadioControl$stop(void ){
#line 109
  unsigned char __nesc_result;
#line 109

#line 109
  __nesc_result = TossimPacketModelC$Control$stop();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 35 "/opt/tinyos-2.1.1/tos/interfaces/Random.nc"
inline static uint32_t CoinC$Random$rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC$Random$rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35






inline static uint16_t CoinC$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 57 "CoinC.nc"
static inline void CoinC$RegularTimer$fired(void )
#line 57
{

  uint16_t aux = CoinC$Random$rand16() % CoinC$SPACE;

  CoinC$interval[sim_node()] = CoinC$timerI[sim_node()] + CoinC$Random$rand32() % (CoinC$timerF[sim_node()] - CoinC$timerI[sim_node()]);

  if (aux <= CoinC$prob[sim_node()]) {
      if (CoinC$radioOn[sim_node()]) {
        CoinC$RadioControl$stop();
        }
    }
  else 
#line 66
    {
      if (!CoinC$radioOn[sim_node()]) {
        CoinC$RadioControl$start();
        }
    }
  if (CoinC$coinOn[sim_node()]) {
    CoinC$RandomTimer$startOneShot(CoinC$interval[sim_node()]);
    }
}

# 193 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x2b5ed6b6bc28){
#line 72
  switch (arg_0x2b5ed6b6bc28) {
#line 72
    case 0U:
#line 72
      /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      /*CtpP.Router*/CtpRoutingEngineP$0$RouteTimer$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$fired();
#line 72
      break;
#line 72
    case 6U:
#line 72
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$fired();
#line 72
      break;
#line 72
    case 7U:
#line 72
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$UpdateTimer$fired();
#line 72
      break;
#line 72
    case 8U:
#line 72
      ModuleTestC$timerOne$fired();
#line 72
      break;
#line 72
    case 9U:
#line 72
      ModuleTestC$timerTwo$fired();
#line 72
      break;
#line 72
    case 10U:
#line 72
      ModuleTestC$timerThree$fired();
#line 72
      break;
#line 72
    case 11U:
#line 72
      CoinC$RandomTimer$fired();
#line 72
      break;
#line 72
    case 12U:
#line 72
      CoinC$RegularTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x2b5ed6b6bc28);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 561 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 561
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 569 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 569
{
  sim_log_debug(251U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 108
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 108
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 110
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 537
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 537
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(250U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 473
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 473
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(247U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(248U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 492
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 526
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 526
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 528
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 140
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 140
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 289
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 289
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 291
  sim_log_debug(240U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 297
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 179
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 179
{
  sim_log_debug(230U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 186
      sim_print_now(timeStr, 128);
      sim_log_debug(231U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(232U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(233U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(234U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(235U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(236U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 215
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 217
  sim_log_debug(237U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 79 "/opt/tinyos-2.1.1/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 79
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
#line 151
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 38 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 38
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 53
{
#line 53
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
  sim_log_debug(49U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 46
{
  sim_log_debug(50U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 46
{
  sim_log_debug(51U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    sim_log_debug(112U, "Init", "LEDS: initialized.\n");
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 21 "/opt/tinyos-2.1.1/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 78 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 78
{
  sim_log_debug(122U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 44 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 416 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static inline void LinkEstimatorP$initNeighborTable(void )
#line 416
{
  uint8_t i;

  for (i = 0; i < 10; i++) {
      LinkEstimatorP$NeighborTable[sim_node()][i].flags = 0;
    }
}











static inline error_t LinkEstimatorP$Init$init(void )
#line 434
{
  sim_log_debug(270U, "LI", "Link estimator init\n");
  LinkEstimatorP$initNeighborTable();
  return SUCCESS;
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(3U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$maxPayloadLength(void )
#line 61
{
  return /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$maxPayloadLength();
}

# 112 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
#line 124
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(am_id_t arg_0x2b5ed6d077d8, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = TossimActiveMessageC$AMSend$getPayload(arg_0x2b5ed6d077d8, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 203 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(0, m, len);
}

# 114 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void * /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(3U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void */*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$getPayload(m, len);
}

# 124 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 101 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$maxPayloadLength(2U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$maxPayloadLength(void )
#line 61
{
  return /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$maxPayloadLength();
}

# 112 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 114 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void * /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(2U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void */*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$getPayload(m, len);
}

# 124 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 827 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static inline void /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableInit(void )
#line 827
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()] = 0;
}

#line 270
static inline error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$Init$init(void )
#line 270
{
  uint8_t controlMaxLength;
  uint8_t beaconMaxLength;

#line 273
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$setState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$NEW_MESSAGE);
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableInit();
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$getPayload(&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[sim_node()], /*CtpP.Matrix*/MatrixRoutingEngineP$0$ControlSend$maxPayloadLength());
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$getPayload(&/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[sim_node()], /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconSend$maxPayloadLength());



  return SUCCESS;
}

# 224 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init(void )
#line 224
{
  int i;

#line 226
  for (i = 0; i < /*CtpP.Forwarder*/CtpForwardingEngineP$0$CLIENT_COUNT; i++) {
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][i] = /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[sim_node()] + i;
      sim_log_debug(161U, "Forwarder", "clientPtrs[%hhu] = %p\n", i, /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[sim_node()][i]);
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[sim_node()] = &/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[sim_node()];
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[sim_node()] = 0;
  return SUCCESS;
}

# 702 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit(void )
#line 702
{
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()] = 0;
}

# 26 "/opt/tinyos-2.1.1/tos/lib/net/matrix/TreeRouting.h"
static __inline void routeInfoInit(route_info_t *ri)
#line 26
{
  ri->parent = INVALID_ADDR;
  ri->etx = 0;
  ri->haveHeard = 0;
  ri->congested = FALSE;
}

# 213 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP$0$Init$init(void )
#line 213
{
  uint8_t maxLength;

#line 215
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[sim_node()] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$running[sim_node()] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[sim_node()] = 0;
  /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()] = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()]);
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableInit();
  /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()] = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$getPayload(&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[sim_node()], /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength());
  maxLength = /*CtpP.Router*/CtpRoutingEngineP$0$BeaconSend$maxPayloadLength();
  sim_log_debug(288U, "TreeRoutingCtl", "TreeRouting initialized. (used payload:%d max payload:%d!\n", sizeof /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[sim_node()], maxLength);

  return SUCCESS;
}

# 65 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][i] = &/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[sim_node()][i];
    }
  /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()] = 12;
  /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][i] = &/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[sim_node()][i];
    }
  /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()] = 12;
  /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] = 0;
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/lib/net/matrix/LruCtpMsgCacheP.nc"
static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init(void )
#line 64
{
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()] = 0;
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()] = 0;
  return SUCCESS;
}

# 439 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 439
{
#line 439
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 356 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 356
{
  sim_log_debug(242U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 37 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 37
}
#line 37
# 553 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 553
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.MessagePoolP.PoolP*/PoolP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.Forwarder*/CtpForwardingEngineP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*CtpP.Matrix*/MatrixRoutingEngineP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 369 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static inline void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(uint8_t client, message_t *msg, uint8_t len)
#line 369
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(msg, len);
}

# 114 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void * ModuleTestC$Send$getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Send$getPayload(0U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 77 "ModuleTestC.nc"
static inline void ModuleTestC$Boot$booted(void )
#line 77
{
  uint8_t i;

#line 79
  ModuleTestC$Msg[sim_node()] = (ModuleTestC$MatrixMsg *)ModuleTestC$Send$getPayload(&ModuleTestC$packet[sim_node()], sizeof(ModuleTestC$MatrixMsg ));

  sim_log_debug(46U, "booted", "%d:Booted:%s\n", TOS_NODE_ID, sim_time_string());
  ModuleTestC$RadioControl$start();

  for (i = 0; i < 100; i++) {
      ModuleTestC$seqNo[sim_node()][i] = 0;
    }
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 49
  ModuleTestC$Boot$booted();
#line 49
}
#line 49
# 47 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 47
{
  return SimMoteP$euid[sim_node()];
}

#line 50
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 50
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 60
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 77
static inline void SimMoteP$SimMote$turnOff(void )
#line 77
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 149
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 149
{
  char buf[128];

#line 151
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(106U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 38 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 38
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 42
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 238 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 238
{
  va_list args;
  int i;

#line 241
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 246
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 76
static void fillInOutput(int id, char *name)
#line 76
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 81
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          int i;
#line 129
          int j;

#line 130
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 113 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 113
{
  return current_node;
}

# 186 "/opt/tinyos-2.1.1/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 186
{
  int parent_index;

#line 188
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 147
static void swap(node_t *first, node_t *second)
#line 147
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 47
{
  long long int key;

#line 49
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 103 "/opt/tinyos-2.1.1/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 103
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 106
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 160
static void down_heap(heap_t *heap, int findex)
#line 160
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 174
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 179
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 52 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 52
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 56
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 66
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 71
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 76
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 82
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 49
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 57
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 226 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 226
{
  int i;

#line 228
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 59 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 94 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 94
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 72
  void sim_end()
#line 72
{
  sim_queue_init();
}



  int sim_random()
#line 78
{
  uint32_t mlcg;
#line 79
  uint32_t p;
#line 79
  uint32_t q;
  uint64_t tmpseed;

#line 81
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 102
{
  return sim_ticks;
}

#line 105
  void sim_set_time(sim_time_t t)
#line 105
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 109
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 116
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 121
{
  bool result = FALSE;

#line 123
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 125
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 126 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 126
{
  bool result;
  int tmp = sim_node();

#line 129
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 268 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 268
{
  va_list args;
  int i;

#line 271
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 276
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 148 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 148
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 171
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 176
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 181
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 185
{
  return sim_log_remove_channel(channel, file);
}

# 49 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 49
{
  return csmaInitHigh;
}

#line 52
  int sim_csma_init_low()
#line 52
{
  return csmaInitLow;
}

#line 55
  int sim_csma_high()
#line 55
{
  return csmaHigh;
}

#line 58
  int sim_csma_low()
#line 58
{
  return csmaLow;
}

#line 61
  int sim_csma_symbols_per_sec()
#line 61
{
  return csmaSymbolsPerSec;
}

#line 64
  int sim_csma_bits_per_symbol()
#line 64
{
  return csmaBitsPerSymbol;
}

#line 67
  int sim_csma_preamble_length()
#line 67
{
  return csmaPreambleLength;
}

#line 70
  int sim_csma_exponent_base()
#line 70
{
  return csmaExponentBase;
#line 71
  ;
}

#line 73
  int sim_csma_max_iterations()
#line 73
{
  return csmaMaxIterations;
}

#line 76
  int sim_csma_min_free_samples()
#line 76
{
  return csmaMinFreeSamples;
}

#line 79
  int sim_csma_rxtx_delay()
#line 79
{
  return csmaRxTxDelay;
}

#line 82
  int sim_csma_ack_time()
#line 82
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 88
{
  csmaInitHigh = val;
}

#line 91
  void sim_csma_set_init_low(int val)
#line 91
{
  csmaInitLow = val;
}

#line 94
  void sim_csma_set_high(int val)
#line 94
{
  csmaHigh = val;
}

#line 97
  void sim_csma_set_low(int val)
#line 97
{
  csmaLow = val;
}

#line 100
  void sim_csma_set_symbols_per_sec(int val)
#line 100
{
  csmaSymbolsPerSec = val;
}

#line 103
  void sim_csma_set_bits_per_symbol(int val)
#line 103
{
  csmaBitsPerSymbol = val;
}

#line 106
  void sim_csma_set_preamble_length(int val)
#line 106
{
  csmaPreambleLength = val;
}

#line 109
  void sim_csma_set_exponent_base(int val)
#line 109
{
  csmaExponentBase = val;
}

#line 112
  void sim_csma_set_max_iterations(int val)
#line 112
{
  csmaMaxIterations = val;
}

#line 115
  void sim_csma_set_min_free_samples(int val)
#line 115
{
  csmaMinFreeSamples = val;
}

#line 118
  void sim_csma_set_rxtx_delay(int val)
#line 118
{
  csmaRxTxDelay = val;
}

#line 121
  void sim_csma_set_ack_time(int val)
#line 121
{
  csmaAckTime = val;
}

# 16 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 76 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 76
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 411
  void makeNoiseModel(uint16_t node_id)
#line 411
{
  int i;

#line 413
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 105
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 108
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 136
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 142
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 161
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 237
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 240
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 184
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 193
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 207
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 227
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 89
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 89
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 94
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 115
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 118
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 280
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 290
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 342
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 349
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/opt/tinyos-2.1.1/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 356 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 356
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 380
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 386
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 253 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 253
{
  va_list args;
  int i;

#line 256
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 261
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 46 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 46
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 48
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 51
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 53
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 56
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 58
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 61
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 63
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 66
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 68
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 70
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 70
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 72
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 75
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 77
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 80
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 82
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 85
{
  message_t *msg = (message_t *)p;

#line 87
  return (uint8_t *)& msg->data;
}

#line 89
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 89
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 92
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 94
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 94
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 246 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 246
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 248
  sim_queue_insert(evt);
}

#line 101
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 101
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(108U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(109U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 132
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 132
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 134
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 53 "/opt/tinyos-2.1.1/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
#line 53
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 157 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 157
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 159
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 142
static am_addr_t TossimActiveMessageC$AMPacket$source(message_t *amsg)
#line 142
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 144
  return __nesc_ntoh_uint16(header->src.nxdata);
}

# 834 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind(am_addr_t node)
#line 834
{
  uint8_t i;

#line 836
  if (node == INVALID_ADDR) {
    return /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()];
    }
#line 838
  for (i = 0; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]; i++) {
      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][i].id == node) {
        break;
        }
    }
#line 842
  return i;
}

#line 887
static uint8_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind_Temporary(uint16_t node)
#line 887
{
  uint8_t i;

#line 889
  if (node == INVALID_ADDR) {
    return /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()];
    }
#line 891
  for (i = 0; i < /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[sim_node()]; i++) {
      if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[sim_node()][i].id == node) {
        break;
        }
    }
#line 895
  return i;
}

#line 238
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_Two(void )
#line 238
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[sim_node()] /= 2;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[sim_node()] += /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand32() % /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[sim_node()] = FALSE;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$startOneShot(/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[sim_node()]);
}

# 58 "/opt/tinyos-2.1.1/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed[sim_node()] = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 133 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 197 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 200
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(101U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(102U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 69
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 69
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 161 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 274 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 274
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 277
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(239U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 100
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 100
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 98 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 98
{
  long long int result;
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 152 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 152
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 154
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 313
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 313
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 375
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 375
{
  Atm128_TIFR_t at;

#line 377
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 449
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 449
{
  sim_log_debug(245U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 845 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static error_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableUpdateEntry_Downwards(am_addr_t from, uint16_t data)
#line 845
{
  uint8_t idx;
  uint16_t aux;

  idx = /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableFind(from);
  if (idx == 15) {

      sim_log_debug(335U, "MatrixRouting", "%s FAIL, table downwards full\n", __FUNCTION__);
      return FAIL;
    }
  else {
#line 855
    if (idx == /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]) {

        /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][idx].id = from;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][idx].downwards = data;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[sim_node()]++;

        /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].downwards += data;
        sim_log_debug(336U, "MatrixRouting", "%s OK,table downwards new entry\n", __FUNCTION__);
      }
    else 
#line 863
      {

        aux = /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][idx].downwards;
        /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[sim_node()][idx].downwards = data;

        /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].downwards += data - aux;
        sim_log_debug(337U, "MatrixRouting", "%s OK, updated table downwards entry\n", __FUNCTION__);
      }
    }
#line 871
  return SUCCESS;
}

# 405 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP$print_packet(message_t *msg, uint8_t len)
#line 405
{
  uint8_t i;
  uint8_t *b;

  b = (uint8_t *)msg->data;
  for (i = 0; i < len; i++) 
    sim_log_debug_clear(267U, "LI", "%x ", b[i]);
  sim_log_debug_clear(268U, "LI", "\n");
}

#line 300
static uint16_t LinkEstimatorP$computeETX(uint8_t q1)
#line 300
{
  uint16_t q;

#line 302
  if (q1 > 0) {
      q = 2500 / q1;
      if (q > 250) {
          q = LinkEstimatorP$VERY_LARGE_ETX_VALUE;
        }
      return q;
    }
  else 
#line 308
    {
      return LinkEstimatorP$VERY_LARGE_ETX_VALUE;
    }
}

#line 176
static uint8_t LinkEstimatorP$findIdx(am_addr_t ll_addr)
#line 176
{
  uint8_t i;

#line 178
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
          if (LinkEstimatorP$NeighborTable[sim_node()][i].ll_addr == ll_addr) {
              return i;
            }
        }
    }
  return LinkEstimatorP$INVALID_RVAL;
}

#line 355
static void LinkEstimatorP$updateNeighborEntryIdx(uint8_t idx, uint8_t seq)
#line 355
{
  uint8_t packetGap;

  if (LinkEstimatorP$NeighborTable[sim_node()][idx].flags & INIT_ENTRY) {
      sim_log_debug(264U, "LI", "Init entry update\n");
      LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq = seq;
      LinkEstimatorP$NeighborTable[sim_node()][idx].flags &= ~INIT_ENTRY;
    }

  packetGap = seq - LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq;
  sim_log_debug(265U, "LI", "updateNeighborEntryIdx: prevseq %d, curseq %d, gap %d\n", LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq, seq, packetGap);

  LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq = seq;
  LinkEstimatorP$NeighborTable[sim_node()][idx].rcvcnt++;
  if (packetGap > 0) {
      LinkEstimatorP$NeighborTable[sim_node()][idx].failcnt += packetGap - 1;
    }





  if (
#line 376
  LinkEstimatorP$NeighborTable[sim_node()][idx].rcvcnt + LinkEstimatorP$NeighborTable[sim_node()][idx].failcnt >= LinkEstimatorP$BLQ_PKT_WINDOW
   || packetGap >= LinkEstimatorP$BLQ_PKT_WINDOW) {
      LinkEstimatorP$updateNeighborTableEst(LinkEstimatorP$NeighborTable[sim_node()][idx].ll_addr);
    }

  if (packetGap > LinkEstimatorP$MAX_PKT_GAP) {
      LinkEstimatorP$initNeighborIdx(idx, LinkEstimatorP$NeighborTable[sim_node()][idx].ll_addr);
      LinkEstimatorP$NeighborTable[sim_node()][idx].lastseq = seq;
      LinkEstimatorP$NeighborTable[sim_node()][idx].rcvcnt = 1;
    }
}

#line 275
static void LinkEstimatorP$updateETX(neighbor_table_entry_t *ne, uint16_t newEst)
#line 275
{
  ne->etx = (LinkEstimatorP$ALPHA * ne->etx + (10 - LinkEstimatorP$ALPHA) * newEst) / 10;
}

#line 163
static void LinkEstimatorP$initNeighborIdx(uint8_t i, am_addr_t ll_addr)
#line 163
{
  neighbor_table_entry_t *ne;

#line 165
  ne = &LinkEstimatorP$NeighborTable[sim_node()][i];
  ne->ll_addr = ll_addr;
  ne->lastseq = 0;
  ne->rcvcnt = 0;
  ne->failcnt = 0;
  ne->flags = INIT_ENTRY | VALID_ENTRY;
  ne->inquality = 0;
  ne->etx = 0;
}

#line 189
static uint8_t LinkEstimatorP$findEmptyNeighborIdx(void )
#line 189
{
  uint8_t i;

#line 191
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY) {
        }
      else 
#line 193
        {
          return i;
        }
    }
  return LinkEstimatorP$INVALID_RVAL;
}



static uint8_t LinkEstimatorP$findWorstNeighborIdx(uint8_t thresholdETX)
#line 202
{
  uint8_t i;
#line 203
  uint8_t worstNeighborIdx;
  uint16_t worstETX;
#line 204
  uint16_t thisETX;

  worstNeighborIdx = LinkEstimatorP$INVALID_RVAL;
  worstETX = 0;
  for (i = 0; i < 10; i++) {
      if (!(LinkEstimatorP$NeighborTable[sim_node()][i].flags & VALID_ENTRY)) {
          sim_log_debug(256U, "LI", "Invalid so continuing\n");
          continue;
        }
      if (!(LinkEstimatorP$NeighborTable[sim_node()][i].flags & MATURE_ENTRY)) {
          sim_log_debug(257U, "LI", "Not mature, so continuing\n");
          continue;
        }
      if (LinkEstimatorP$NeighborTable[sim_node()][i].flags & PINNED_ENTRY) {
          sim_log_debug(258U, "LI", "Pinned entry, so continuing\n");
          continue;
        }
      thisETX = LinkEstimatorP$NeighborTable[sim_node()][i].etx;
      if (thisETX >= worstETX) {
          worstNeighborIdx = i;
          worstETX = thisETX;
        }
    }
  if (worstETX >= thresholdETX) {
      return worstNeighborIdx;
    }
  else 
#line 229
    {
      return LinkEstimatorP$INVALID_RVAL;
    }
}

# 521 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$evicted(am_addr_t neighbor)
#line 521
{
  /*CtpP.Router*/CtpRoutingEngineP$0$routingTableEvict(neighbor);
  sim_log_debug(307U, "TreeRouting", "%s\n", __FUNCTION__);
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == neighbor) {
      routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()]);
      /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[sim_node()] = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP$0$updateRouteTask$postTask();
    }
}

#line 708
static uint8_t /*CtpP.Router*/CtpRoutingEngineP$0$routingTableFind(am_addr_t neighbor)
#line 708
{
  uint8_t i;

#line 710
  if (neighbor == INVALID_ADDR) {
    return /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()];
    }
#line 712
  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[sim_node()]; i++) {
      if (/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[sim_node()][i].neighbor == neighbor) {
        break;
        }
    }
#line 716
  return i;
}

# 703 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void *LinkEstimatorP$Packet$getPayload(message_t *msg, uint8_t len)
#line 703
{
  void *payload = LinkEstimatorP$SubPacket$getPayload(msg, len + sizeof(linkest_header_t ));

#line 705
  if (payload != (void *)0) {
      payload += sizeof(linkest_header_t );
    }
  return payload;
}

#line 679
static uint8_t LinkEstimatorP$Packet$payloadLength(message_t *msg)
#line 679
{
  linkest_header_t *hdr;

#line 681
  hdr = LinkEstimatorP$getHeader(msg);
  return LinkEstimatorP$SubPacket$payloadLength(msg)
   - sizeof(linkest_header_t )
   - sizeof(linkest_footer_t ) * (NUM_ENTRIES_FLAG & __nesc_ntoh_uint8(hdr->flags.nxdata));
}

# 792 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP$0$CtpRoutingPacket$getOption(message_t *msg, ctp_options_t opt)
#line 792
{
  return (__nesc_ntoh_uint8(/*CtpP.Router*/CtpRoutingEngineP$0$getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

# 485 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static error_t LinkEstimatorP$LinkEstimator$pinNeighbor(am_addr_t neighbor)
#line 485
{
  uint8_t nidx = LinkEstimatorP$findIdx(neighbor);

#line 487
  if (nidx == LinkEstimatorP$INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP$NeighborTable[sim_node()][nidx].flags |= PINNED_ENTRY;
  return SUCCESS;
}

#line 441
static uint16_t LinkEstimatorP$LinkEstimator$getLinkQuality(am_addr_t neighbor)
#line 441
{
  uint8_t idx;

#line 443
  idx = LinkEstimatorP$findIdx(neighbor);
  if (idx == LinkEstimatorP$INVALID_RVAL) {
      return LinkEstimatorP$VERY_LARGE_ETX_VALUE;
    }
  else 
#line 446
    {
      if (LinkEstimatorP$NeighborTable[sim_node()][idx].flags & MATURE_ENTRY) {
          return LinkEstimatorP$NeighborTable[sim_node()][idx].etx;
        }
      else 
#line 449
        {
          return LinkEstimatorP$VERY_LARGE_ETX_VALUE;
        }
    }
}

# 185 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$chooseAdvertiseTime(void )
#line 185
{
  /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()] = /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()] /= 2;
  /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()] += /*CtpP.Router*/CtpRoutingEngineP$0$Random$rand32() % /*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()];
  /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[sim_node()] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(/*CtpP.Router*/CtpRoutingEngineP$0$t[sim_node()]);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 62
}
#line 62
# 1113 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getThl(message_t *msg)
#line 1113
{
#line 1113
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->thl.nxdata);
}

#line 1101
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(message_t *msg)
#line 1101
{
#line 1101
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->originSeqNo.nxdata);
}

#line 1099
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(message_t *msg)
#line 1099
{
#line 1099
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.nxdata);
}

# 84 "/opt/tinyos-2.1.1/tos/lib/net/matrix/LruCtpMsgCacheP.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$lookup(message_t *m)
#line 84
{
  uint8_t i;
  uint8_t idx;

#line 87
  for (i = 0; i < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[sim_node()]; i++) {
      idx = (i + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[sim_node()]) % 4;


      if (
#line 89
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getOrigin(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].origin && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getSequenceNumber(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].seqno && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getThl(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].thl && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[sim_node()][idx].type) {
          break;
        }
    }
  return i;
}

# 1108 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getOrigin(message_t *msg)
#line 1108
{
#line 1108
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->origin.nxdata);
}


static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getSequenceNumber(message_t *msg)
#line 1112
{
#line 1112
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->originSeqNo.nxdata);
}

# 72 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpPacket.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$CtpPacket$getType(message_t *msg){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getType(msg);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 1110 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIp(message_t *msg)
#line 1110
{
#line 1110
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->ip.nxdata);
}

# 711 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static uint16_t /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$myIp(void )
#line 711
{
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$hasState(/*CtpP.Matrix*/MatrixRoutingEngineP$0$IP_RECEIVED)) {
      return /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip;
    }
  else 
#line 714
    {
      return INVALID_ADDR_IP;
    }
}

# 158 "ModuleTestC.nc"
static message_t *ModuleTestC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  ModuleTestC$MatrixMsg *testing;
  uint16_t origem;

#line 161
  testing = (ModuleTestC$MatrixMsg *)payload;
  origem = (uint16_t )ModuleTestC$CtpPacket$getOrigin(msg);

  if (ModuleTestC$seqNo[sim_node()][origem - 1] < __nesc_ntoh_uint32(testing->data.nxdata)) {
      ModuleTestC$seqNo[sim_node()][origem - 1] = __nesc_ntoh_uint32(testing->data.nxdata);

      if (ModuleTestC$RootControl$isRoot()) {
          ModuleTestC$insertIP(ModuleTestC$CtpPacket$getIpOrigin(msg));
        }

      sim_log_debug(48U, "Receive_App", "RECEIVED from %d : ip %d : %s\n", origem, ModuleTestC$CtpPacket$getIpOrigin(msg), sim_time_string());
    }
  return msg;
}

#line 52
static void ModuleTestC$insertIP(uint16_t ip)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {
      if ((ModuleTestC$final[sim_node()] + 1) % ModuleTestC$MAX != ModuleTestC$init[sim_node()]) {
          ModuleTestC$buffer[sim_node()][ModuleTestC$final[sim_node()]] = ip;
          ModuleTestC$final[sim_node()] = (ModuleTestC$final[sim_node()] + 1) % ModuleTestC$MAX;
        }
    }
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 1111 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$getIpOrigin(message_t *msg)
#line 1111
{
#line 1111
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->ipOrigin.nxdata);
}

#line 1090
static void */*CtpP.Forwarder*/CtpForwardingEngineP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 1090
{
  uint8_t *payload = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$getPayload(msg, len + sizeof(ctp_data_header_t ));

#line 1092
  if (payload != (void *)0) {
      payload += sizeof(ctp_data_header_t );
    }
  return payload;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubPacket$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static error_t /*CtpP.SendQueueP*/QueueC$0$Queue$enqueue(/*CtpP.SendQueueP*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*CtpP.SendQueueP*/QueueC$0$Queue$size() < /*CtpP.SendQueueP*/QueueC$0$Queue$maxSize()) {
      sim_log_debug(220U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]);
      /*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][/*CtpP.SendQueueP*/QueueC$0$tail[sim_node()]] = newVal;
      /*CtpP.SendQueueP*/QueueC$0$tail[sim_node()]++;
      if (/*CtpP.SendQueueP*/QueueC$0$tail[sim_node()] == 13) {
#line 102
        /*CtpP.SendQueueP*/QueueC$0$tail[sim_node()] = 0;
        }
#line 103
      /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]++;
      /*CtpP.SendQueueP*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

#line 69
static void /*CtpP.SendQueueP*/QueueC$0$printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(214U, "QueueC", "head <-");
  for (i = /*CtpP.SendQueueP*/QueueC$0$head[sim_node()]; i < /*CtpP.SendQueueP*/QueueC$0$head[sim_node()] + /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]; i++) {
      sim_log_debug_clear(215U, "QueueC", "[");
      for (j = 0; j < sizeof(/*CtpP.SendQueueP*/QueueC$0$queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*CtpP.SendQueueP*/QueueC$0$queue[sim_node()][i % 13])[j];

#line 77
          sim_log_debug_clear(216U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(217U, "QueueC", "] ");
    }
  sim_log_debug_clear(218U, "QueueC", "<- tail\n");
}

# 550 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpRoutingEngineP.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP$0$CtpInfo$getEtx(uint16_t *etx)
#line 550
{
  if (etx == (void *)0) {
    return FAIL;
    }
#line 553
  if (/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent == INVALID_ADDR) {
    return FAIL;
    }
#line 555
  if (/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[sim_node()] == 1) {
      *etx = 0;
    }
  else 
#line 557
    {
      *etx = /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].etx + /*CtpP.Router*/CtpRoutingEngineP$0$LinkEstimator$getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[sim_node()].parent);
    }
  return SUCCESS;
}

# 266 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(uint16_t window, uint16_t offset)
#line 266
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP$0$Random$rand16();

#line 268
  r %= window;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(r);
  sim_log_debug(163U, "Forwarder", "Rexmit timer will fire in %hu ms\n", r);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$RetxmitTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 62
}
#line 62
# 103 "/opt/tinyos-2.1.1/tos/system/PoolP.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP$0$Pool$put(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool_t *newVal)
#line 103
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[sim_node()] + /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[sim_node()][emptyIndex] = newVal;
      /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]++;
      sim_log_debug(209U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[sim_node()]);
      return SUCCESS;
    }
}

#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP$1$Pool$put(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool_t *newVal)
#line 103
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[sim_node()] + /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[sim_node()][emptyIndex] = newVal;
      /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]++;
      sim_log_debug(213U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[sim_node()]);
      return SUCCESS;
    }
}

# 102 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 102
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 106
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 110
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 43 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 43
{
  char timeBuf[128];

#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(97U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 172 "/opt/tinyos-2.1.1/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 175
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(99U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 181
            FALSE;

            {
#line 181
              __nesc_atomic_end(__nesc_atomic); 
#line 181
              return __nesc_temp;
            }
          }
        }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
#line 184
  sim_log_debug(100U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setDestination(msg, dest);
  /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$AMPacket$setType(msg, 240);
  return /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$send(msg, len);
}

# 137 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 137
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 139
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

#line 162
static void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 162
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 164
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 82 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 4) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(283U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 4) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(284U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(285U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 4;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(286U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 65 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 67
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 70
  sim_log_debug(107U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ));
  return err;
}

# 266 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 266
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 269
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 118
static double CpmModelC$noise_hash_generation(void )
#line 118
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(135U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(136U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 181 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 4) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(287U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

#line 166
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 4) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

#line 207
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x2b5ed6d085e8, message_t * msg, error_t error){
#line 89
  switch (arg_0x2b5ed6d085e8) {
#line 89
    case 0U:
#line 89
      /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    case 2U:
#line 89
      /*CtpP.SendMessageControl.SenderC.AMQueueEntryP*/AMQueueEntryP$2$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    case 3U:
#line 89
      /*CtpP.SendMessageBeacon.SenderC.AMQueueEntryP*/AMQueueEntryP$3$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x2b5ed6d085e8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 808 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$startRetxmitTimer(uint16_t window, uint16_t offset)
#line 808
{
  uint16_t r = /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand16();

#line 810
  r %= window;
  r += offset;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$RetxmitTimer$startOneShot(r);
  sim_log_debug(334U, "MatrixTreeRoutingCtl", "Rexmit timer will fire in %hu ms\n", r);
}

# 132 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack)
#line 132
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 134
  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 827 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$SubSend$sendDone(message_t *msg, error_t error)
#line 827
{
  fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$head();

#line 829
  sim_log_debug(197U, "Forwarder", "%s to %hu and %hhu\n", __FUNCTION__, /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg), error);

  if (error != SUCCESS) {

      sim_log_debug(198U, "Forwarder", "%s: send failed\n", __FUNCTION__);
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_FAIL, 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
      /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_FAIL_WINDOW, SENDDONE_FAIL_OFFSET);
    }
  else {
#line 840
    if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$hasState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING) && !/*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$wasAcked(msg)) {

        /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txNoAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        if (/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(__nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->ip.nxdata))) {
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpInfo$recomputeRoutes();
          }
        if (-- qe->retries) {
            sim_log_debug(199U, "Forwarder", "%s: not acked, retransmit\n", __FUNCTION__);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionDebug$logEventMsg(NET_C_FE_SENDDONE_WAITACK, 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getSequenceNumber(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$CollectionPacket$getOrigin(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_NOACK_WINDOW, SENDDONE_NOACK_OFFSET);
          }
        else 
#line 853
          {




            /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[sim_node()] = TRUE;
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$ACK_PENDING);
            /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
            if (!/*CtpP.Forwarder*/CtpForwardingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(__nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->ip.nxdata))) {

                /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendBroadCastTask$postTask();
              }
          }
      }
    else 
      {



        /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[sim_node()] = FALSE;
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[sim_node()] = FALSE;

        /*CtpP.Forwarder*/CtpForwardingEngineP$0$SendQueue$dequeue();
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$clearState(/*CtpP.Forwarder*/CtpForwardingEngineP$0$SENDING);
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$LinkEstimator$txAck(/*CtpP.Forwarder*/CtpForwardingEngineP$0$AMPacket$destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP$0$packetComplete(qe, msg, TRUE);
      }
    }
}

# 281 "/opt/tinyos-2.1.1/tos/lib/net/4bitle/LinkEstimatorP.nc"
static void LinkEstimatorP$updateDETX(neighbor_table_entry_t *ne)
#line 281
{
  uint16_t estETX;

  if (ne->data_success == 0) {



      estETX = ne->data_total * 10;
    }
  else 
#line 289
    {
      estETX = 10 * ne->data_total / ne->data_success;
      ne->data_success = 0;
      ne->data_total = 0;
    }
  LinkEstimatorP$updateETX(ne, estETX);
}

# 719 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static bool /*CtpP.Matrix*/MatrixRoutingEngineP$0$MatrixUnicastNameFreeRouting$directionToSend(uint16_t ip)
#line 719
{

  if (ip > /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip || ip < /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[sim_node()].ip - /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[sim_node()]) {
    return TRUE;
    }
  else {
#line 724
    return FALSE;
    }
}

# 85 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static /*CtpP.SendQueueP*/QueueC$0$queue_t /*CtpP.SendQueueP*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*CtpP.SendQueueP*/QueueC$0$queue_t t = /*CtpP.SendQueueP*/QueueC$0$Queue$head();

#line 87
  sim_log_debug(219U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]);
  if (!/*CtpP.SendQueueP*/QueueC$0$Queue$empty()) {
      /*CtpP.SendQueueP*/QueueC$0$head[sim_node()]++;
      if (/*CtpP.SendQueueP*/QueueC$0$head[sim_node()] == 13) {
#line 90
        /*CtpP.SendQueueP*/QueueC$0$head[sim_node()] = 0;
        }
#line 91
      /*CtpP.SendQueueP*/QueueC$0$size[sim_node()]--;
      /*CtpP.SendQueueP*/QueueC$0$printQueue();
    }
  return t;
}

# 63 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static void LedsP$Leds$led0On(void )
#line 63
{
  LedsP$Led0$clr();
  sim_log_debug(113U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP$Led0$get() ? "off" : "on");
#line 65
  ;
}

# 240 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 240
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 243
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 247
        prr = 0.0;
        }
    }
#line 249
  return prr;
}

# 299 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 299
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 208 "/opt/tinyos-2.1.1/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 208
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$BeaconTimer$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(6U, dt);
#line 62
}
#line 62
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 98 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$Control$start(void )
#line 98
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(123U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(124U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

# 143 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 261 "/opt/tinyos-2.1.1/tos/lib/net/matrix/MatrixRoutingEngineP.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$remainingInterval_Two(void )
#line 261
{
  uint32_t remaining_Two = /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[sim_node()];

#line 263
  remaining_Two -= /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[sim_node()] = TRUE;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerTwo$startOneShot(remaining_Two);
}

#line 252
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$decayInterval_Two(void )
#line 252
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[sim_node()] *= 2;
  if (/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[sim_node()] > /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[sim_node()]) {
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[sim_node()];
      /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[sim_node()]++;
    }
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_Two();
}

#line 206
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$chooseAdvertiseTime_One(void )
#line 206
{
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[sim_node()] = /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[sim_node()] /= 2;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[sim_node()] += /*CtpP.Matrix*/MatrixRoutingEngineP$0$Random$rand32() % /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[sim_node()];
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[sim_node()] = FALSE;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$startOneShot(/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[sim_node()]);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*CtpP.Matrix*/MatrixRoutingEngineP$0$TrickleTimerOne$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 62
}
#line 62
# 212 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(225U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(226U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(227U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(228U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(229U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 455 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 455
{
  sim_log_debug(246U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 457
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 259
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 259
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 265
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 89 "/opt/tinyos-2.1.1/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 89
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 91
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 92 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 92
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 500
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 500
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(249U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 86
  void INTERRUPT_15(void )
#line 86
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 223
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 223
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(238U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 1117 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setEtx(message_t *msg, uint16_t e)
#line 1117
{
#line 1117
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->etx.nxdata, e);
}








static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$clearOption(message_t *msg, ctp_options_t opt)
#line 1127
{
  unsigned char *__nesc_temp43;

#line 1128
  (__nesc_temp43 = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp43, __nesc_ntoh_uint8(__nesc_temp43) & ~opt));
}

# 48 "/opt/tinyos-2.1.1/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP$0$PacketAcknowledgements$requestAck(message_t * msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$requestAck(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 1124 "/opt/tinyos-2.1.1/tos/lib/net/matrix/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP$0$CtpPacket$setOption(message_t *msg, ctp_options_t opt)
#line 1124
{
  unsigned char *__nesc_temp42;

#line 1125
  (__nesc_temp42 = /*CtpP.Forwarder*/CtpForwardingEngineP$0$getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp42, __nesc_ntoh_uint8(__nesc_temp42) | opt));
}

# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 113);
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 87 "/opt/tinyos-2.1.1/tos/lib/tossim/TossimActiveMessageC.nc"
static void *TossimActiveMessageC$AMSend$getPayload(am_id_t id, message_t *m, uint8_t len)
#line 87
{
  return TossimActiveMessageC$Packet$getPayload(m, len);
}

# 82 "/opt/tinyos-2.1.1/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 82
{
  long long int result;
  int tmp = sim_node();

#line 85
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 91
{
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 107
{
  int result;
  int tmpID = sim_node();

#line 110
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(104U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 117
{
  int tmpID = sim_node();

#line 119
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(105U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 135
{
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 64
static void SimMoteP$SimMote$turnOn(void )
#line 64
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(103U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 142
  void sim_mote_turn_off(int mote)
#line 142
{
  int tmp = sim_node();

#line 144
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 158
{
  int tmp = sim_node();

#line 160
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module ModuleTestC */
  if (!strcmp(varname, "ModuleTestC$packet"))
  {
    *addr = (uintptr_t)&ModuleTestC$packet[__nesc_mote];
    *size = sizeof(ModuleTestC$packet[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$sendBusy"))
  {
    *addr = (uintptr_t)&ModuleTestC$sendBusy[__nesc_mote];
    *size = sizeof(ModuleTestC$sendBusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$Msg"))
  {
    *addr = (uintptr_t)&ModuleTestC$Msg[__nesc_mote];
    *size = sizeof(ModuleTestC$Msg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$buffer"))
  {
    *addr = (uintptr_t)&ModuleTestC$buffer[__nesc_mote];
    *size = sizeof(ModuleTestC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$init"))
  {
    *addr = (uintptr_t)&ModuleTestC$init[__nesc_mote];
    *size = sizeof(ModuleTestC$init[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$final"))
  {
    *addr = (uintptr_t)&ModuleTestC$final[__nesc_mote];
    *size = sizeof(ModuleTestC$final[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$sendInit"))
  {
    *addr = (uintptr_t)&ModuleTestC$sendInit[__nesc_mote];
    *size = sizeof(ModuleTestC$sendInit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$sendINTERVAL"))
  {
    *addr = (uintptr_t)&ModuleTestC$sendINTERVAL[__nesc_mote];
    *size = sizeof(ModuleTestC$sendINTERVAL[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$seqNo"))
  {
    *addr = (uintptr_t)&ModuleTestC$seqNo[__nesc_mote];
    *size = sizeof(ModuleTestC$seqNo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ModuleTestC$counter"))
  {
    *addr = (uintptr_t)&ModuleTestC$counter[__nesc_mote];
    *size = sizeof(ModuleTestC$counter[__nesc_mote]);
    return 0;
  }

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module LedsP */

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  /* Module CtpForwardingEngineP$0 */
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr"))
  {
    *addr = (uintptr_t)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote];
    *size = sizeof(/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$0 */
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$free"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$index"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool"))
  {
    *addr = (uintptr_t)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote];
    *size = sizeof(/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$1 */
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool"))
  {
    *addr = (uintptr_t)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote];
    *size = sizeof(/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC$0 */
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$queue"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$head"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$head[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$tail"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$tail[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SendQueueP*/QueueC$0$size"))
  {
    *addr = (uintptr_t)&/*CtpP.SendQueueP*/QueueC$0$size[__nesc_mote];
    *size = sizeof(/*CtpP.SendQueueP*/QueueC$0$size[__nesc_mote]);
    return 0;
  }

  /* Module LruCtpMsgCacheP$0 */
  if (!strcmp(varname, "/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache"))
  {
    *addr = (uintptr_t)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote];
    *size = sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first"))
  {
    *addr = (uintptr_t)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote];
    *size = sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count"))
  {
    *addr = (uintptr_t)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote];
    *size = sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module LinkEstimatorP */
  if (!strcmp(varname, "LinkEstimatorP$NeighborTable"))
  {
    *addr = (uintptr_t)&LinkEstimatorP$NeighborTable[__nesc_mote];
    *size = sizeof(LinkEstimatorP$NeighborTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorP$linkEstSeq"))
  {
    *addr = (uintptr_t)&LinkEstimatorP$linkEstSeq[__nesc_mote];
    *size = sizeof(LinkEstimatorP$linkEstSeq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "LinkEstimatorP$prevSentIdx"))
  {
    *addr = (uintptr_t)&LinkEstimatorP$prevSentIdx[__nesc_mote];
    *size = sizeof(LinkEstimatorP$prevSentIdx[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module CtpRoutingEngineP$0 */
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$radioOn"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$radioOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$running"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$running[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$sending"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$sending[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$routingTable"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$t"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed"))
  {
    *addr = (uintptr_t)&/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote];
    *size = sizeof(/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$1 */

  /* Module AMQueueEntryP$2 */

  /* Module AMQueueEntryP$3 */

  /* Module MatrixRoutingEngineP$0 */
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$stable"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$stable[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$stable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$retries"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$range"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$range[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$range[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$table"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$k_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$k_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$k_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$k_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$k_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$k_Two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two"))
  {
    *addr = (uintptr_t)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[__nesc_mote];
    *size = sizeof(/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[__nesc_mote]);
    return 0;
  }

  /* Module DummyActiveMessageP */

  /* Module CollectionIdP$0 */

  /* Module CoinC */
  if (!strcmp(varname, "CoinC$interval"))
  {
    *addr = (uintptr_t)&CoinC$interval[__nesc_mote];
    *size = sizeof(CoinC$interval[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoinC$prob"))
  {
    *addr = (uintptr_t)&CoinC$prob[__nesc_mote];
    *size = sizeof(CoinC$prob[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoinC$timerI"))
  {
    *addr = (uintptr_t)&CoinC$timerI[__nesc_mote];
    *size = sizeof(CoinC$timerI[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoinC$timerF"))
  {
    *addr = (uintptr_t)&CoinC$timerF[__nesc_mote];
    *size = sizeof(CoinC$timerF[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoinC$radioOn"))
  {
    *addr = (uintptr_t)&CoinC$radioOn[__nesc_mote];
    *size = sizeof(CoinC$radioOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CoinC$coinOn"))
  {
    *addr = (uintptr_t)&CoinC$coinOn[__nesc_mote];
    *size = sizeof(CoinC$coinOn[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module ModuleTestC */
  memset((void *)&ModuleTestC$packet[__nesc_mote], 0, sizeof ModuleTestC$packet[__nesc_mote]);
  ModuleTestC$sendBusy[__nesc_mote] = FALSE;
  memset((void *)&ModuleTestC$Msg[__nesc_mote], 0, sizeof ModuleTestC$Msg[__nesc_mote]);
  memset((void *)&ModuleTestC$buffer[__nesc_mote], 0, sizeof ModuleTestC$buffer[__nesc_mote]);
  ModuleTestC$init[__nesc_mote] = 0;
  ModuleTestC$final[__nesc_mote] = 0;
  ModuleTestC$sendInit[__nesc_mote] = FALSE;
  ModuleTestC$sendINTERVAL[__nesc_mote] = 60000;
  memset((void *)&ModuleTestC$seqNo[__nesc_mote], 0, sizeof ModuleTestC$seqNo[__nesc_mote]);
  ModuleTestC$counter[__nesc_mote] = 1;

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module LedsP */

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

  /* Module CtpForwardingEngineP$0 */
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingState[__nesc_mote] = 0;
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$seqno[__nesc_mote]);
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$forwardingBroadCast[__nesc_mote] = FALSE;
  /*CtpP.Forwarder*/CtpForwardingEngineP$0$sendingBroadCast[__nesc_mote] = FALSE;
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientEntries[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$clientPtrs[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsg[__nesc_mote]);
  memset((void *)&/*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote], 0, sizeof /*CtpP.Forwarder*/CtpForwardingEngineP$0$loopbackMsgPtr[__nesc_mote]);

  /* Module PoolP$0 */
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$free[__nesc_mote]);
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$index[__nesc_mote]);
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$queue[__nesc_mote]);
  memset((void *)&/*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote], 0, sizeof /*CtpP.MessagePoolP.PoolP*/PoolP$0$pool[__nesc_mote]);

  /* Module PoolP$1 */
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$free[__nesc_mote]);
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$index[__nesc_mote]);
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$queue[__nesc_mote]);
  memset((void *)&/*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote], 0, sizeof /*CtpP.QEntryPoolP.PoolP*/PoolP$1$pool[__nesc_mote]);

  /* Module QueueC$0 */
  memset((void *)&/*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote], 0, sizeof /*CtpP.SendQueueP*/QueueC$0$queue[__nesc_mote]);
  /*CtpP.SendQueueP*/QueueC$0$head[__nesc_mote] = 0;
  /*CtpP.SendQueueP*/QueueC$0$tail[__nesc_mote] = 0;
  /*CtpP.SendQueueP*/QueueC$0$size[__nesc_mote] = 0;

  /* Module LruCtpMsgCacheP$0 */
  memset((void *)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote], 0, sizeof /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$cache[__nesc_mote]);
  memset((void *)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote], 0, sizeof /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$first[__nesc_mote]);
  memset((void *)&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote], 0, sizeof /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP$0$count[__nesc_mote]);

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module LinkEstimatorP */
  memset((void *)&LinkEstimatorP$NeighborTable[__nesc_mote], 0, sizeof LinkEstimatorP$NeighborTable[__nesc_mote]);
  LinkEstimatorP$linkEstSeq[__nesc_mote] = 0;
  LinkEstimatorP$prevSentIdx[__nesc_mote] = 0;

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 4;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module CtpRoutingEngineP$0 */
  /*CtpP.Router*/CtpRoutingEngineP$0$ECNOff[__nesc_mote] = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP$0$radioOn[__nesc_mote] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$running[__nesc_mote] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$sending[__nesc_mote] = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP$0$justEvicted[__nesc_mote] = FALSE;
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$routeInfo[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$state_is_root[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$my_ll_addr[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsgBuffer[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$beaconMsg[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$routingTable[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$routingTableActive[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$parentChanges[__nesc_mote]);
  /*CtpP.Router*/CtpRoutingEngineP$0$currentInterval[__nesc_mote] = 128;
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$t[__nesc_mote]);
  memset((void *)&/*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote], 0, sizeof /*CtpP.Router*/CtpRoutingEngineP$0$tHasPassed[__nesc_mote]);

  /* Module AMQueueEntryP$1 */

  /* Module AMQueueEntryP$2 */

  /* Module AMQueueEntryP$3 */

  /* Module MatrixRoutingEngineP$0 */
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$stable[__nesc_mote] = FALSE;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$forwardingState[__nesc_mote] = 0;
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$retries[__nesc_mote]);
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$ipParent[__nesc_mote] = INVALID_ADDR;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentParent[__nesc_mote] = INVALID_ADDR;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendBusy[__nesc_mote] = FALSE;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$sendingBeacon[__nesc_mote] = FALSE;
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$my_info[__nesc_mote]);
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$range[__nesc_mote] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$reserved[__nesc_mote] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$iNode[__nesc_mote] = 0;
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsgBuffer[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsgBuffer[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$controlMsg[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$beaconMsg[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$table[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$table[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActive[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableTemporary[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$tableActiveTemporary[__nesc_mote]);
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_One[__nesc_mote] = 128;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_One[__nesc_mote] = 1000;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$k_One[__nesc_mote] = 1;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_One[__nesc_mote] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_One[__nesc_mote] = 128;
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_One[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_One[__nesc_mote]);
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$minInterval_Two[__nesc_mote] = 128;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$maxInterval_Two[__nesc_mote] = 1000;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$k_Two[__nesc_mote] = 5;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$c_Two[__nesc_mote] = 0;
  /*CtpP.Matrix*/MatrixRoutingEngineP$0$currentInterval_Two[__nesc_mote] = 20;
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$t_Two[__nesc_mote]);
  memset((void *)&/*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[__nesc_mote], 0, sizeof /*CtpP.Matrix*/MatrixRoutingEngineP$0$tHasPassed_Two[__nesc_mote]);

  /* Module DummyActiveMessageP */

  /* Module CollectionIdP$0 */

  /* Module CoinC */
  CoinC$interval[__nesc_mote] = 60000;
  CoinC$prob[__nesc_mote] = CoinC$P1;
  CoinC$timerI[__nesc_mote] = CoinC$TIME1;
  CoinC$timerF[__nesc_mote] = CoinC$TIME2;
  CoinC$radioOn[__nesc_mote] = FALSE;
  CoinC$coinOn[__nesc_mote] = FALSE;

}
