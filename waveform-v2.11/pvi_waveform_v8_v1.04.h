typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef ulong sizetype;

typedef bool _Bool;

typedef struct completion completion, *Pcompletion;

typedef struct wait_queue_head wait_queue_head, *Pwait_queue_head;

typedef struct wait_queue_head wait_queue_head_t;

typedef struct spinlock spinlock, *Pspinlock;

typedef struct spinlock spinlock_t;

typedef struct list_head list_head, *Plist_head;

typedef union anon_union.conflict871_for_field_0 anon_union.conflict871_for_field_0, *Panon_union.conflict871_for_field_0;

typedef struct raw_spinlock raw_spinlock, *Praw_spinlock;

typedef struct qspinlock qspinlock, *Pqspinlock;

typedef struct qspinlock arch_spinlock_t;

typedef union anon_union.conflict7e2_for_field_0 anon_union.conflict7e2_for_field_0, *Panon_union.conflict7e2_for_field_0;

typedef struct atomic_t atomic_t, *Patomic_t;

typedef struct anon_struct.conflict7a0 anon_struct.conflict7a0, *Panon_struct.conflict7a0;

typedef struct anon_struct.conflict7c1 anon_struct.conflict7c1, *Panon_struct.conflict7c1;

typedef uchar __u8;

typedef __u8 u8;

typedef ushort __u16;

typedef __u16 u16;

struct atomic_t {
    int counter;
};

struct anon_struct.conflict7c1 {
    u16 locked_pending;
    u16 tail;
};

struct anon_struct.conflict7a0 {
    u8 locked;
    u8 pending;
};

union anon_union.conflict7e2_for_field_0 {
    struct atomic_t val;
    struct anon_struct.conflict7a0 field_1;
    struct anon_struct.conflict7c1 field_2;
};

struct qspinlock {
    union anon_union.conflict7e2_for_field_0 field_0;
};

struct raw_spinlock {
    arch_spinlock_t raw_lock;
};

union anon_union.conflict871_for_field_0 {
    struct raw_spinlock rlock;
};

struct spinlock {
    union anon_union.conflict871_for_field_0 field_0;
};

struct list_head {
    struct list_head * next;
    struct list_head * prev;
};

struct wait_queue_head {
    spinlock_t lock;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct list_head head;
};

struct completion {
    uint done;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    wait_queue_head_t wait;
};

typedef struct timerqueue_node timerqueue_node, *Ptimerqueue_node;

typedef struct rb_node rb_node, *Prb_node;

typedef longlong __s64;

typedef __s64 s64;

typedef s64 ktime_t;

struct rb_node {
    ulong __rb_parent_color;
    struct rb_node * rb_right;
    struct rb_node * rb_left;
};

struct timerqueue_node {
    struct rb_node node;
    ktime_t expires;
};

typedef struct timerqueue_head timerqueue_head, *Ptimerqueue_head;

typedef struct rb_root rb_root, *Prb_root;

struct rb_root {
    struct rb_node * rb_node;
};

struct timerqueue_head {
    struct rb_root head;
    struct timerqueue_node * next;
};

typedef struct seccomp seccomp, *Pseccomp;

typedef struct seccomp_filter seccomp_filter, *Pseccomp_filter;

struct seccomp {
    int mode;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct seccomp_filter * filter;
};

struct seccomp_filter {
};

typedef struct idr idr, *Pidr;

typedef struct radix_tree_root radix_tree_root, *Pradix_tree_root;

typedef uint gfp_t;

typedef struct radix_tree_node radix_tree_node, *Pradix_tree_node;

typedef union anon_union.conflict1dba_for_field_6 anon_union.conflict1dba_for_field_6, *Panon_union.conflict1dba_for_field_6;

typedef struct callback_head callback_head, *Pcallback_head;

struct callback_head {
    struct callback_head * next;
    void (* func)(struct callback_head *);
};

union anon_union.conflict1dba_for_field_6 {
    struct list_head private_list;
    struct callback_head callback_head;
};

struct radix_tree_root {
    spinlock_t xa_lock;
    gfp_t gfp_mask;
    struct radix_tree_node * rnode;
};

struct idr {
    struct radix_tree_root idr_rt;
    uint idr_base;
    uint idr_next;
};

struct radix_tree_node {
    uchar shift;
    uchar offset;
    uchar count;
    uchar exceptional;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct radix_tree_node * parent;
    struct radix_tree_root * root;
    union anon_union.conflict1dba_for_field_6 field_6;
    void * slots[64];
    ulong tags[3][1];
};

typedef struct ida_bitmap ida_bitmap, *Pida_bitmap;

struct ida_bitmap {
    ulong bitmap[16];
};

typedef int __s32;

typedef __s32 s32;

typedef uint __u32;

typedef __u32 u32;

typedef char __s8;

typedef __s8 s8;

typedef ulonglong __u64;

typedef __u64 u64;

typedef struct debug_info debug_info, *Pdebug_info;

typedef struct perf_event perf_event, *Pperf_event;

struct debug_info {
    int suspended_step;
    int bps_disabled;
    int wps_disabled;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct perf_event * hbp_break[16];
    struct perf_event * hbp_watch[16];
};

struct perf_event {
};

typedef struct cpu_context cpu_context, *Pcpu_context;

struct cpu_context {
    ulong x19;
    ulong x20;
    ulong x21;
    ulong x22;
    ulong x23;
    ulong x24;
    ulong x25;
    ulong x26;
    ulong x27;
    ulong x28;
    ulong fp;
    ulong sp;
    ulong pc;
};

typedef struct anon_struct.conflictef4 anon_struct.conflictef4, *Panon_struct.conflictef4;

typedef struct user_fpsimd_state user_fpsimd_state, *Puser_fpsimd_state;

struct user_fpsimd_state {
    __int128 unsigned vregs[32];
    __u32 fpsr;
    __u32 fpcr;
    __u32 __reserved[2];
};

struct anon_struct.conflictef4 {
    ulong tp_value;
    ulong tp2_value;
    struct user_fpsimd_state fpsimd_state;
};

typedef struct thread_struct thread_struct, *Pthread_struct;

typedef struct anon_struct.conflictef4_for_uw anon_struct.conflictef4_for_uw, *Panon_struct.conflictef4_for_uw;

struct anon_struct.conflictef4_for_uw {
    ulong tp_value;
    ulong tp2_value;
    struct user_fpsimd_state fpsimd_state;
};

struct thread_struct {
    struct cpu_context cpu_context;
    undefined field_0x68;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    struct anon_struct.conflictef4_for_uw uw;
    uint fpsimd_cpu;
    undefined field_0x294;
    undefined field_0x295;
    undefined field_0x296;
    undefined field_0x297;
    void * sve_state;
    uint sve_vl;
    uint sve_vl_onexec;
    ulong fault_address;
    ulong fault_code;
    struct debug_info debug;
    undefined field_0x3c8;
    undefined field_0x3c9;
    undefined field_0x3ca;
    undefined field_0x3cb;
    undefined field_0x3cc;
    undefined field_0x3cd;
    undefined field_0x3ce;
    undefined field_0x3cf;
};

typedef ushort umode_t;

typedef ulong __kernel_ulong_t;

typedef __kernel_ulong_t __kernel_size_t;

typedef __kernel_size_t size_t;

typedef int __kernel_clockid_t;

typedef __kernel_clockid_t clockid_t;

typedef struct hlist_node hlist_node, *Phlist_node;

struct hlist_node {
    struct hlist_node * next;
    struct hlist_node * * pprev;
};

typedef int __kernel_pid_t;

typedef __kernel_pid_t pid_t;

typedef struct hlist_head hlist_head, *Phlist_head;

struct hlist_head {
    struct hlist_node * first;
};

typedef longlong __kernel_loff_t;

typedef __kernel_loff_t loff_t;

typedef uint __poll_t;

typedef long __kernel_long_t;

typedef __kernel_long_t __kernel_ssize_t;

typedef __kernel_ssize_t ssize_t;


// WARNING! conflicting data type names: /DWARF/types.h/bool - /bool

typedef u64 phys_addr_t;

typedef phys_addr_t resource_size_t;

typedef u32 __kernel_dev_t;

typedef uint __kernel_uid32_t;

typedef __kernel_uid32_t uid_t;

typedef struct atomic64_t atomic64_t, *Patomic64_t;

struct atomic64_t {
    long counter;
};

typedef uint __kernel_gid32_t;

typedef __kernel_gid32_t gid_t;

typedef __kernel_dev_t dev_t;

typedef struct ratelimit_state ratelimit_state, *Pratelimit_state;

typedef struct raw_spinlock raw_spinlock_t;

struct ratelimit_state {
    raw_spinlock_t lock;
    int interval;
    int burst;
    int printed;
    int missed;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    ulong begin;
    ulong flags;
};

typedef struct sigpending sigpending, *Psigpending;

typedef struct sigset_t sigset_t, *Psigset_t;

struct sigset_t {
    ulong sig[1];
};

struct sigpending {
    struct list_head list;
    struct sigset_t signal;
};

typedef struct kset kset, *Pkset;

typedef struct kobject kobject, *Pkobject;

typedef struct kset_uevent_ops kset_uevent_ops, *Pkset_uevent_ops;

typedef struct kobj_uevent_env kobj_uevent_env, *Pkobj_uevent_env;

typedef struct kobj_type kobj_type, *Pkobj_type;

typedef struct kobj_ns_type_operations kobj_ns_type_operations, *Pkobj_ns_type_operations;

typedef struct sock sock, *Psock;

typedef struct kuid_t kuid_t, *Pkuid_t;

typedef struct kgid_t kgid_t, *Pkgid_t;

typedef struct kernfs_node kernfs_node, *Pkernfs_node;

typedef struct kref kref, *Pkref;

typedef struct sysfs_ops sysfs_ops, *Psysfs_ops;

typedef struct attribute attribute, *Pattribute;

typedef enum kobj_ns_type {
    KOBJ_NS_TYPES=2,
    KOBJ_NS_TYPE_NET=1,
    KOBJ_NS_TYPE_NONE=0
} kobj_ns_type;

typedef union anon_union.conflict3297_for_field_7 anon_union.conflict3297_for_field_7, *Panon_union.conflict3297_for_field_7;

typedef union kernfs_node_id kernfs_node_id, *Pkernfs_node_id;

typedef struct kernfs_iattrs kernfs_iattrs, *Pkernfs_iattrs;

typedef struct refcount_struct refcount_struct, *Prefcount_struct;

typedef struct refcount_struct refcount_t;

typedef struct kernfs_elem_dir kernfs_elem_dir, *Pkernfs_elem_dir;

typedef struct kernfs_elem_symlink kernfs_elem_symlink, *Pkernfs_elem_symlink;

typedef struct kernfs_elem_attr kernfs_elem_attr, *Pkernfs_elem_attr;

typedef struct anon_struct.conflict325a anon_struct.conflict325a, *Panon_struct.conflict325a;

typedef struct kernfs_root kernfs_root, *Pkernfs_root;

typedef struct kernfs_ops kernfs_ops, *Pkernfs_ops;

typedef struct kernfs_open_file kernfs_open_file, *Pkernfs_open_file;

typedef struct seq_file seq_file, *Pseq_file;

typedef struct poll_table_struct poll_table_struct, *Ppoll_table_struct;

typedef struct vm_area_struct vm_area_struct, *Pvm_area_struct;

typedef struct kernfs_open_node kernfs_open_node, *Pkernfs_open_node;

typedef struct kernfs_syscall_ops kernfs_syscall_ops, *Pkernfs_syscall_ops;

typedef struct file file, *Pfile;

typedef struct mutex mutex, *Pmutex;

typedef struct vm_operations_struct vm_operations_struct, *Pvm_operations_struct;

typedef struct atomic64_t atomic_long_t;

typedef struct optimistic_spin_queue optimistic_spin_queue, *Poptimistic_spin_queue;

struct anon_struct.conflict325a {
    u32 ino;
    u32 generation;
};

union kernfs_node_id {
    struct anon_struct.conflict325a field_0;
    u64 id;
};

struct kuid_t {
    uid_t val;
};

struct optimistic_spin_queue {
    struct atomic_t tail;
};

struct mutex {
    atomic_long_t owner;
    spinlock_t wait_lock;
    struct optimistic_spin_queue osq;
    struct list_head wait_list;
};

struct kernfs_root {
    struct kernfs_node * kn;
    uint flags;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct idr ino_idr;
    u32 last_ino;
    u32 next_generation;
    struct kernfs_syscall_ops * syscall_ops;
    struct list_head supers;
    wait_queue_head_t deactivate_waitq;
};

struct kobj_uevent_env {
    char * argv[3];
    char * envp[64];
    int envp_idx;
    char buf[4096];
    int buflen;
};

struct kernfs_syscall_ops {
    int (* remount_fs)(struct kernfs_root *, int *, char *);
    int (* show_options)(struct seq_file *, struct kernfs_root *);
    int (* mkdir)(struct kernfs_node *, char *, umode_t);
    int (* rmdir)(struct kernfs_node *);
    int (* rename)(struct kernfs_node *, struct kernfs_node *, char *);
    int (* show_path)(struct seq_file *, struct kernfs_node *, struct kernfs_root *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct refcount_struct {
    struct atomic_t refs;
};

struct kref {
    refcount_t refcount;
};

struct kobject {
    char * name;
    struct list_head entry;
    struct kobject * parent;
    struct kset * kset;
    struct kobj_type * ktype;
    struct kernfs_node * sd;
    struct kref kref;
    uint state_initialized:1;
    uint state_in_sysfs:1;
    uint state_add_uevent_sent:1;
    uint state_remove_uevent_sent:1;
    uint uevent_suppress:1;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct file {
};

struct attribute {
    char * name;
    umode_t mode;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct vm_area_struct {
};

struct kernfs_elem_dir {
    ulong subdirs;
    struct rb_root children;
    struct kernfs_root * root;
};

struct kernfs_elem_attr {
    struct kernfs_ops * ops;
    struct kernfs_open_node * open;
    loff_t size;
    struct kernfs_node * notify_next;
};

struct kgid_t {
    gid_t val;
};

struct kobj_type {
    void (* release)(struct kobject *);
    struct sysfs_ops * sysfs_ops;
    struct attribute * * default_attrs;
    kobj_ns_type_operations * (* child_ns_type)(struct kobject *);
    void * (* namespace)(struct kobject *);
    void (* get_ownership)(struct kobject *, struct kuid_t *, struct kgid_t *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct kernfs_iattrs {
};

struct kobj_ns_type_operations {
    enum kobj_ns_type type;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    bool (* current_may_mount)(void);
    void * (* grab_current_ns)(void);
    void * (* netlink_ns)(struct sock *);
    void * (* initial_ns)(void);
    void (* drop_ns)(void *);
};

struct kernfs_ops {
    int (* open)(struct kernfs_open_file *);
    void (* release)(struct kernfs_open_file *);
    int (* seq_show)(struct seq_file *, void *);
    void * (* seq_start)(struct seq_file *, loff_t *);
    void * (* seq_next)(struct seq_file *, void *, loff_t *);
    void (* seq_stop)(struct seq_file *, void *);
    ssize_t (* read)(struct kernfs_open_file *, char *, size_t, loff_t);
    size_t atomic_write_len;
    bool prealloc;
    undefined field_0x41;
    undefined field_0x42;
    undefined field_0x43;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
    ssize_t (* write)(struct kernfs_open_file *, char *, size_t, loff_t);
    __poll_t (* poll)(struct kernfs_open_file *, struct poll_table_struct *);
    int (* mmap)(struct kernfs_open_file *, struct vm_area_struct *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

struct kset {
    struct list_head list;
    spinlock_t list_lock;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    struct kobject kobj;
    struct kset_uevent_ops * uevent_ops;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct sysfs_ops {
    ssize_t (* show)(struct kobject *, struct attribute *, char *);
    ssize_t (* store)(struct kobject *, struct attribute *, char *, size_t);
};

struct kernfs_elem_symlink {
    struct kernfs_node * target_kn;
};

union anon_union.conflict3297_for_field_7 {
    struct kernfs_elem_dir dir;
    struct kernfs_elem_symlink symlink;
    struct kernfs_elem_attr attr;
};

struct seq_file {
};

struct kernfs_node {
    struct atomic_t count;
    struct atomic_t active;
    struct kernfs_node * parent;
    char * name;
    struct rb_node rb;
    void * ns;
    uint hash;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    union anon_union.conflict3297_for_field_7 field_7;
    void * priv;
    union kernfs_node_id id;
    ushort flags;
    umode_t mode;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
    struct kernfs_iattrs * iattr;
};

struct sock {
};

struct vm_operations_struct {
};

struct kernfs_open_file {
    struct kernfs_node * kn;
    struct file * file;
    struct seq_file * seq_file;
    void * priv;
    struct mutex mutex;
    struct mutex prealloc_mutex;
    int event;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    struct list_head list;
    char * prealloc_buf;
    size_t atomic_write_len;
    bool mmapped:1;
    bool released:1;
    undefined field_0x89;
    undefined field_0x8a;
    undefined field_0x8b;
    undefined field_0x8c;
    undefined field_0x8d;
    undefined field_0x8e;
    undefined field_0x8f;
    struct vm_operations_struct * vm_ops;
};

struct poll_table_struct {
};

struct kset_uevent_ops {
    int (* filter)(struct kset *, struct kobject *);
    char * (* name)(struct kset *, struct kobject *);
    int (* uevent)(struct kset *, struct kobject *, struct kobj_uevent_env *);
};

struct kernfs_open_node {
};

typedef struct anon_struct.conflict3c13 anon_struct.conflict3c13, *Panon_struct.conflict3c13;

struct anon_struct.conflict3c13 {
    char _dummy_bnd[8];
    void * _lower;
    void * _upper;
};

typedef struct anon_struct.conflict3bce anon_struct.conflict3bce, *Panon_struct.conflict3bce;

typedef __kernel_long_t __kernel_clock_t;

struct anon_struct.conflict3bce {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
    int _status;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    __kernel_clock_t _utime;
    __kernel_clock_t _stime;
};

typedef union sigval sigval, *Psigval;

union sigval {
    int sival_int;
    void * sival_ptr;
};

typedef struct siginfo siginfo, *Psiginfo;

typedef union anon_union.conflict3d04_for__sifields anon_union.conflict3d04_for__sifields, *Panon_union.conflict3d04_for__sifields;

typedef struct anon_struct.conflict3b47 anon_struct.conflict3b47, *Panon_struct.conflict3b47;

typedef struct anon_struct.conflict3b68 anon_struct.conflict3b68, *Panon_struct.conflict3b68;

typedef struct anon_struct.conflict3ba1 anon_struct.conflict3ba1, *Panon_struct.conflict3ba1;

typedef struct anon_struct.conflict3c9b anon_struct.conflict3c9b, *Panon_struct.conflict3c9b;

typedef struct anon_struct.conflict3cb6 anon_struct.conflict3cb6, *Panon_struct.conflict3cb6;

typedef struct anon_struct.conflict3cd7 anon_struct.conflict3cd7, *Panon_struct.conflict3cd7;

typedef int __kernel_timer_t;

typedef union sigval sigval_t;

typedef union anon_union.conflict3c71_for_field_1 anon_union.conflict3c71_for_field_1, *Panon_union.conflict3c71_for_field_1;

typedef struct anon_struct.conflict3c50 anon_struct.conflict3c50, *Panon_struct.conflict3c50;

struct anon_struct.conflict3c50 {
    char _dummy_pkey[8];
    __u32 _pkey;
};

union anon_union.conflict3c71_for_field_1 {
    short _addr_lsb;
    struct anon_struct.conflict3c13 _addr_bnd;
    struct anon_struct.conflict3c50 _addr_pkey;
};

struct anon_struct.conflict3c9b {
    void * _addr;
    union anon_union.conflict3c71_for_field_1 field_1;
};

struct anon_struct.conflict3cd7 {
    void * _call_addr;
    int _syscall;
    uint _arch;
};

struct anon_struct.conflict3b68 {
    __kernel_timer_t _tid;
    int _overrun;
    sigval_t _sigval;
    int _sys_private;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

struct anon_struct.conflict3ba1 {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
    sigval_t _sigval;
};

struct anon_struct.conflict3cb6 {
    long _band;
    int _fd;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct anon_struct.conflict3b47 {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
};

union anon_union.conflict3d04_for__sifields {
    int _pad[28];
    struct anon_struct.conflict3b47 _kill;
    struct anon_struct.conflict3b68 _timer;
    struct anon_struct.conflict3ba1 _rt;
    struct anon_struct.conflict3bce _sigchld;
    struct anon_struct.conflict3c9b _sigfault;
    struct anon_struct.conflict3cb6 _sigpoll;
    struct anon_struct.conflict3cd7 _sigsys;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    union anon_union.conflict3d04_for__sifields _sifields;
};

typedef struct siginfo siginfo_t;

typedef union anon_union.conflict3c71 anon_union.conflict3c71, *Panon_union.conflict3c71;

union anon_union.conflict3c71 {
    short _addr_lsb;
    struct anon_struct.conflict3c13 _addr_bnd;
    struct anon_struct.conflict3c50 _addr_pkey;
};

typedef union anon_union.conflict3d04 anon_union.conflict3d04, *Panon_union.conflict3d04;

union anon_union.conflict3d04 {
    int _pad[28];
    struct anon_struct.conflict3b47 _kill;
    struct anon_struct.conflict3b68 _timer;
    struct anon_struct.conflict3ba1 _rt;
    struct anon_struct.conflict3bce _sigchld;
    struct anon_struct.conflict3c9b _sigfault;
    struct anon_struct.conflict3cb6 _sigpoll;
    struct anon_struct.conflict3cd7 _sigsys;
};

typedef struct mem_section mem_section, *Pmem_section;

struct mem_section {
    ulong section_mem_map;
    ulong * pageblock_flags;
};

typedef struct pglist_data pglist_data, *Ppglist_data;

typedef struct zone zone, *Pzone;

typedef struct zonelist zonelist, *Pzonelist;

typedef struct task_struct task_struct, *Ptask_struct;

typedef enum zone_type {
    ZONE_DMA32=0,
    ZONE_MOVABLE=2,
    ZONE_NORMAL=1,
    __MAX_NR_ZONES=3
} zone_type;

typedef struct lruvec lruvec, *Plruvec;

typedef struct per_cpu_nodestat per_cpu_nodestat, *Pper_cpu_nodestat;

typedef struct per_cpu_pageset per_cpu_pageset, *Pper_cpu_pageset;

typedef struct free_area free_area, *Pfree_area;

typedef struct zoneref zoneref, *Pzoneref;

typedef struct thread_info thread_info, *Pthread_info;

typedef struct llist_node llist_node, *Pllist_node;

typedef struct sched_class sched_class, *Psched_class;

typedef struct sched_entity sched_entity, *Psched_entity;

typedef struct sched_rt_entity sched_rt_entity, *Psched_rt_entity;

typedef struct task_group task_group, *Ptask_group;

typedef struct sched_dl_entity sched_dl_entity, *Psched_dl_entity;

typedef struct cpumask cpumask, *Pcpumask;

typedef struct cpumask cpumask_t;

typedef union rcu_special rcu_special, *Prcu_special;

typedef struct rcu_node rcu_node, *Prcu_node;

typedef struct sched_info sched_info, *Psched_info;

typedef struct plist_node plist_node, *Pplist_node;

typedef struct mm_struct mm_struct, *Pmm_struct;

typedef struct vmacache vmacache, *Pvmacache;

typedef struct task_rss_stat task_rss_stat, *Ptask_rss_stat;

typedef struct restart_block restart_block, *Prestart_block;

typedef struct pid pid, *Ppid;

typedef struct prev_cputime prev_cputime, *Pprev_cputime;

typedef struct task_cputime task_cputime, *Ptask_cputime;

typedef struct cred cred, *Pcred;

typedef struct nameidata nameidata, *Pnameidata;

typedef struct fs_struct fs_struct, *Pfs_struct;

typedef struct files_struct files_struct, *Pfiles_struct;

typedef struct nsproxy nsproxy, *Pnsproxy;

typedef struct signal_struct signal_struct, *Psignal_struct;

typedef struct sighand_struct sighand_struct, *Psighand_struct;

typedef struct audit_context audit_context, *Paudit_context;

typedef struct wake_q_node wake_q_node, *Pwake_q_node;

typedef struct rb_root_cached rb_root_cached, *Prb_root_cached;

typedef struct rt_mutex_waiter rt_mutex_waiter, *Prt_mutex_waiter;

typedef struct bio_list bio_list, *Pbio_list;

typedef struct blk_plug blk_plug, *Pblk_plug;

typedef struct reclaim_state reclaim_state, *Preclaim_state;

typedef struct backing_dev_info backing_dev_info, *Pbacking_dev_info;

typedef struct io_context io_context, *Pio_context;

typedef struct task_io_accounting task_io_accounting, *Ptask_io_accounting;

typedef struct nodemask_t nodemask_t, *Pnodemask_t;

typedef struct seqcount seqcount, *Pseqcount;

typedef struct seqcount seqcount_t;

typedef struct css_set css_set, *Pcss_set;

typedef struct robust_list_head robust_list_head, *Probust_list_head;

typedef struct compat_robust_list_head compat_robust_list_head, *Pcompat_robust_list_head;

typedef struct futex_pi_state futex_pi_state, *Pfutex_pi_state;

typedef struct perf_event_context perf_event_context, *Pperf_event_context;

typedef struct rseq rseq, *Prseq;

typedef struct pipe_inode_info pipe_inode_info, *Ppipe_inode_info;

typedef struct page_frag page_frag, *Ppage_frag;

typedef struct task_delay_info task_delay_info, *Ptask_delay_info;

typedef struct mem_cgroup mem_cgroup, *Pmem_cgroup;

typedef struct request_queue request_queue, *Prequest_queue;

typedef struct uprobe_task uprobe_task, *Puprobe_task;

typedef struct vm_struct vm_struct, *Pvm_struct;

typedef union anon_union.conflict460d_for_field_182 anon_union.conflict460d_for_field_182, *Panon_union.conflict460d_for_field_182;

typedef struct zone_reclaim_stat zone_reclaim_stat, *Pzone_reclaim_stat;

typedef struct per_cpu_pages per_cpu_pages, *Pper_cpu_pages;

typedef ulong mm_segment_t;

typedef struct load_weight load_weight, *Pload_weight;

typedef struct sched_statistics sched_statistics, *Psched_statistics;

typedef struct cfs_rq cfs_rq, *Pcfs_rq;

typedef struct sched_avg sched_avg, *Psched_avg;

typedef struct hrtimer hrtimer, *Phrtimer;

typedef enum hrtimer_restart {
    HRTIMER_NORESTART=0,
    HRTIMER_RESTART=1
} hrtimer_restart;

typedef struct anon_struct.conflict4546 anon_struct.conflict4546, *Panon_struct.conflict4546;

typedef union anon_union.conflict1c51_for_field_1 anon_union.conflict1c51_for_field_1, *Panon_union.conflict1c51_for_field_1;

typedef struct upid upid, *Pupid;

typedef union anon_union.conflict3f46_for_rseq_cs anon_union.conflict3f46_for_rseq_cs, *Panon_union.conflict3f46_for_rseq_cs;

typedef struct page page, *Ppage;

typedef struct anon_struct.conflict45f1 anon_struct.conflict45f1, *Panon_struct.conflict45f1;

typedef union anon_union.conflict871 anon_union.conflict871, *Panon_union.conflict871;

typedef struct util_est util_est, *Putil_est;

typedef struct hrtimer_clock_base hrtimer_clock_base, *Phrtimer_clock_base;

typedef struct anon_struct.conflict1b27 anon_struct.conflict1b27, *Panon_struct.conflict1b27;

typedef struct anon_struct.conflict1bce anon_struct.conflict1bce, *Panon_struct.conflict1bce;

typedef struct anon_struct.conflict1c01 anon_struct.conflict1c01, *Panon_struct.conflict1c01;

typedef struct pid_namespace pid_namespace, *Ppid_namespace;

typedef struct hrtimer_cpu_base hrtimer_cpu_base, *Phrtimer_cpu_base;

typedef enum timespec_type {
    TT_COMPAT=2,
    TT_NATIVE=1,
    TT_NONE=0
} timespec_type;

typedef union anon_union.conflict1b7e_for_field_2 anon_union.conflict1b7e_for_field_2, *Panon_union.conflict1b7e_for_field_2;

typedef struct pollfd pollfd, *Ppollfd;

typedef struct timespec timespec, *Ptimespec;

typedef struct compat_timespec compat_timespec, *Pcompat_timespec;

typedef __kernel_long_t __kernel_time_t;

typedef s32 compat_time_t;

struct anon_struct.conflict4546 {
    u8 blocked;
    u8 need_qs;
    u8 exp_need_qs;
    u8 pad;
};

union rcu_special {
    struct anon_struct.conflict4546 b;
    u32 s;
};

struct io_context {
};

union anon_union.conflict871 {
    struct raw_spinlock rlock;
};

struct anon_struct.conflict45f1 {
    u64 android_kabi_reserved1;
};

union anon_union.conflict460d_for_field_182 {
    uint frozen:1;
    struct anon_struct.conflict45f1 __UNIQUE_ID_android_kabi_hide47;
    union anon_union.conflict871 field_2;
};

struct sched_class {
};

struct zoneref {
    struct zone * zone;
    int zone_idx;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct zonelist {
    struct zoneref _zonerefs[4];
};

struct zone_reclaim_stat {
    ulong recent_rotated[2];
    ulong recent_scanned[2];
};

struct lruvec {
    struct list_head lists[5];
    struct zone_reclaim_stat reclaim_stat;
    atomic_long_t inactive_age;
    ulong refaults;
    struct pglist_data * pgdat;
};

struct free_area {
    struct list_head free_list[6];
    ulong nr_free;
};

struct zone { // Missing member _pad1_ : zone_padding at offset 0xc0 [zero-length member]
Missing member _pad2_ : zone_padding at offset 0x580 [zero-length member]
Missing member _pad3_ : zone_padding at offset 0x5c0 [zero-length member]
Missing member vm_numa_stat : atomic_long_t[1] at offset 0x628 [zero-length member]
    ulong watermark[3];
    ulong nr_reserved_highatomic;
    long lowmem_reserve[3];
    struct pglist_data * zone_pgdat;
    struct per_cpu_pageset * pageset;
    bool cma_alloc;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    ulong zone_start_pfn;
    ulong managed_pages;
    ulong spanned_pages;
    ulong present_pages;
    char * name;
    ulong nr_isolate_pageblock;
    int initialized;
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    undefined field_0x88;
    undefined field_0x89;
    undefined field_0x8a;
    undefined field_0x8b;
    undefined field_0x8c;
    undefined field_0x8d;
    undefined field_0x8e;
    undefined field_0x8f;
    undefined field_0x90;
    undefined field_0x91;
    undefined field_0x92;
    undefined field_0x93;
    undefined field_0x94;
    undefined field_0x95;
    undefined field_0x96;
    undefined field_0x97;
    undefined field_0x98;
    undefined field_0x99;
    undefined field_0x9a;
    undefined field_0x9b;
    undefined field_0x9c;
    undefined field_0x9d;
    undefined field_0x9e;
    undefined field_0x9f;
    undefined field_0xa0;
    undefined field_0xa1;
    undefined field_0xa2;
    undefined field_0xa3;
    undefined field_0xa4;
    undefined field_0xa5;
    undefined field_0xa6;
    undefined field_0xa7;
    undefined field_0xa8;
    undefined field_0xa9;
    undefined field_0xaa;
    undefined field_0xab;
    undefined field_0xac;
    undefined field_0xad;
    undefined field_0xae;
    undefined field_0xaf;
    undefined field_0xb0;
    undefined field_0xb1;
    undefined field_0xb2;
    undefined field_0xb3;
    undefined field_0xb4;
    undefined field_0xb5;
    undefined field_0xb6;
    undefined field_0xb7;
    undefined field_0xb8;
    undefined field_0xb9;
    undefined field_0xba;
    undefined field_0xbb;
    undefined field_0xbc;
    undefined field_0xbd;
    undefined field_0xbe;
    undefined field_0xbf;
    struct free_area free_area[11];
    ulong flags;
    spinlock_t lock;
    undefined field_0x544;
    undefined field_0x545;
    undefined field_0x546;
    undefined field_0x547;
    undefined field_0x548;
    undefined field_0x549;
    undefined field_0x54a;
    undefined field_0x54b;
    undefined field_0x54c;
    undefined field_0x54d;
    undefined field_0x54e;
    undefined field_0x54f;
    undefined field_0x550;
    undefined field_0x551;
    undefined field_0x552;
    undefined field_0x553;
    undefined field_0x554;
    undefined field_0x555;
    undefined field_0x556;
    undefined field_0x557;
    undefined field_0x558;
    undefined field_0x559;
    undefined field_0x55a;
    undefined field_0x55b;
    undefined field_0x55c;
    undefined field_0x55d;
    undefined field_0x55e;
    undefined field_0x55f;
    undefined field_0x560;
    undefined field_0x561;
    undefined field_0x562;
    undefined field_0x563;
    undefined field_0x564;
    undefined field_0x565;
    undefined field_0x566;
    undefined field_0x567;
    undefined field_0x568;
    undefined field_0x569;
    undefined field_0x56a;
    undefined field_0x56b;
    undefined field_0x56c;
    undefined field_0x56d;
    undefined field_0x56e;
    undefined field_0x56f;
    undefined field_0x570;
    undefined field_0x571;
    undefined field_0x572;
    undefined field_0x573;
    undefined field_0x574;
    undefined field_0x575;
    undefined field_0x576;
    undefined field_0x577;
    undefined field_0x578;
    undefined field_0x579;
    undefined field_0x57a;
    undefined field_0x57b;
    undefined field_0x57c;
    undefined field_0x57d;
    undefined field_0x57e;
    undefined field_0x57f;
    ulong percpu_drift_mark;
    ulong compact_cached_free_pfn;
    ulong compact_cached_migrate_pfn[2];
    uint compact_considered;
    uint compact_defer_shift;
    int compact_order_failed;
    bool compact_blockskip_flush;
    bool contiguous;
    undefined field_0x5ae;
    undefined field_0x5af;
    undefined field_0x5b0;
    undefined field_0x5b1;
    undefined field_0x5b2;
    undefined field_0x5b3;
    undefined field_0x5b4;
    undefined field_0x5b5;
    undefined field_0x5b6;
    undefined field_0x5b7;
    undefined field_0x5b8;
    undefined field_0x5b9;
    undefined field_0x5ba;
    undefined field_0x5bb;
    undefined field_0x5bc;
    undefined field_0x5bd;
    undefined field_0x5be;
    undefined field_0x5bf;
    atomic_long_t vm_stat[13];
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field_0x648;
    undefined field_0x649;
    undefined field_0x64a;
    undefined field_0x64b;
    undefined field_0x64c;
    undefined field_0x64d;
    undefined field_0x64e;
    undefined field_0x64f;
    undefined field_0x650;
    undefined field_0x651;
    undefined field_0x652;
    undefined field_0x653;
    undefined field_0x654;
    undefined field_0x655;
    undefined field_0x656;
    undefined field_0x657;
    undefined field_0x658;
    undefined field_0x659;
    undefined field_0x65a;
    undefined field_0x65b;
    undefined field_0x65c;
    undefined field_0x65d;
    undefined field_0x65e;
    undefined field_0x65f;
    undefined field_0x660;
    undefined field_0x661;
    undefined field_0x662;
    undefined field_0x663;
    undefined field_0x664;
    undefined field_0x665;
    undefined field_0x666;
    undefined field_0x667;
    undefined field_0x668;
    undefined field_0x669;
    undefined field_0x66a;
    undefined field_0x66b;
    undefined field_0x66c;
    undefined field_0x66d;
    undefined field_0x66e;
    undefined field_0x66f;
    undefined field_0x670;
    undefined field_0x671;
    undefined field_0x672;
    undefined field_0x673;
    undefined field_0x674;
    undefined field_0x675;
    undefined field_0x676;
    undefined field_0x677;
    undefined field_0x678;
    undefined field_0x679;
    undefined field_0x67a;
    undefined field_0x67b;
    undefined field_0x67c;
    undefined field_0x67d;
    undefined field_0x67e;
    undefined field_0x67f;
};

struct pglist_data { // Missing member _pad1_ : zone_padding at offset 0x1480 [zero-length member]
Missing member _pad2_ : zone_padding at offset 0x1540 [zero-length member]
    struct zone node_zones[3];
    struct zonelist node_zonelists[1];
    int nr_zones;
    undefined field_0x13c4;
    undefined field_0x13c5;
    undefined field_0x13c6;
    undefined field_0x13c7;
    ulong node_start_pfn;
    ulong node_present_pages;
    ulong node_spanned_pages;
    int node_id;
    undefined field_0x13e4;
    undefined field_0x13e5;
    undefined field_0x13e6;
    undefined field_0x13e7;
    wait_queue_head_t kswapd_wait;
    wait_queue_head_t pfmemalloc_wait;
    struct task_struct * kswapd;
    int kswapd_order;
    enum zone_type kswapd_classzone_idx;
    int kswapd_failures;
    int kcompactd_max_order;
    enum zone_type kcompactd_classzone_idx;
    undefined field_0x1434;
    undefined field_0x1435;
    undefined field_0x1436;
    undefined field_0x1437;
    wait_queue_head_t kcompactd_wait;
    struct task_struct * kcompactd;
    ulong totalreserve_pages;
    undefined field_0x1460;
    undefined field_0x1461;
    undefined field_0x1462;
    undefined field_0x1463;
    undefined field_0x1464;
    undefined field_0x1465;
    undefined field_0x1466;
    undefined field_0x1467;
    undefined field_0x1468;
    undefined field_0x1469;
    undefined field_0x146a;
    undefined field_0x146b;
    undefined field_0x146c;
    undefined field_0x146d;
    undefined field_0x146e;
    undefined field_0x146f;
    undefined field_0x1470;
    undefined field_0x1471;
    undefined field_0x1472;
    undefined field_0x1473;
    undefined field_0x1474;
    undefined field_0x1475;
    undefined field_0x1476;
    undefined field_0x1477;
    undefined field_0x1478;
    undefined field_0x1479;
    undefined field_0x147a;
    undefined field_0x147b;
    undefined field_0x147c;
    undefined field_0x147d;
    undefined field_0x147e;
    undefined field_0x147f;
    spinlock_t lru_lock;
    undefined field_0x1484;
    undefined field_0x1485;
    undefined field_0x1486;
    undefined field_0x1487;
    struct lruvec lruvec;
    ulong flags;
    undefined field_0x1518;
    undefined field_0x1519;
    undefined field_0x151a;
    undefined field_0x151b;
    undefined field_0x151c;
    undefined field_0x151d;
    undefined field_0x151e;
    undefined field_0x151f;
    undefined field_0x1520;
    undefined field_0x1521;
    undefined field_0x1522;
    undefined field_0x1523;
    undefined field_0x1524;
    undefined field_0x1525;
    undefined field_0x1526;
    undefined field_0x1527;
    undefined field_0x1528;
    undefined field_0x1529;
    undefined field_0x152a;
    undefined field_0x152b;
    undefined field_0x152c;
    undefined field_0x152d;
    undefined field_0x152e;
    undefined field_0x152f;
    undefined field_0x1530;
    undefined field_0x1531;
    undefined field_0x1532;
    undefined field_0x1533;
    undefined field_0x1534;
    undefined field_0x1535;
    undefined field_0x1536;
    undefined field_0x1537;
    undefined field_0x1538;
    undefined field_0x1539;
    undefined field_0x153a;
    undefined field_0x153b;
    undefined field_0x153c;
    undefined field_0x153d;
    undefined field_0x153e;
    undefined field_0x153f;
    struct per_cpu_nodestat * per_cpu_nodestats;
    atomic_long_t vm_stat[33];
    undefined field_0x1650;
    undefined field_0x1651;
    undefined field_0x1652;
    undefined field_0x1653;
    undefined field_0x1654;
    undefined field_0x1655;
    undefined field_0x1656;
    undefined field_0x1657;
    undefined field_0x1658;
    undefined field_0x1659;
    undefined field_0x165a;
    undefined field_0x165b;
    undefined field_0x165c;
    undefined field_0x165d;
    undefined field_0x165e;
    undefined field_0x165f;
    undefined field_0x1660;
    undefined field_0x1661;
    undefined field_0x1662;
    undefined field_0x1663;
    undefined field_0x1664;
    undefined field_0x1665;
    undefined field_0x1666;
    undefined field_0x1667;
    undefined field_0x1668;
    undefined field_0x1669;
    undefined field_0x166a;
    undefined field_0x166b;
    undefined field_0x166c;
    undefined field_0x166d;
    undefined field_0x166e;
    undefined field_0x166f;
    undefined field_0x1670;
    undefined field_0x1671;
    undefined field_0x1672;
    undefined field_0x1673;
    undefined field_0x1674;
    undefined field_0x1675;
    undefined field_0x1676;
    undefined field_0x1677;
    undefined field_0x1678;
    undefined field_0x1679;
    undefined field_0x167a;
    undefined field_0x167b;
    undefined field_0x167c;
    undefined field_0x167d;
    undefined field_0x167e;
    undefined field_0x167f;
};

struct load_weight {
    ulong weight;
    u32 inv_weight;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

union anon_union.conflict3f46_for_rseq_cs {
    __u64 ptr64;
    __u64 ptr;
};

struct upid {
    int nr;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct pid_namespace * ns;
};

struct pid {
    struct atomic_t count;
    uint level;
    struct hlist_head tasks[4];
    wait_queue_head_t wait_pidfd;
    struct callback_head rcu;
    struct upid numbers[1];
};

struct page_frag {
    struct page * page;
    __u32 offset;
    __u32 size;
};

struct sighand_struct {
};

struct bio_list {
};

struct compat_robust_list_head {
};

struct per_cpu_nodestat {
    s8 stat_threshold;
    s8 vm_node_stat_diff[33];
};

struct llist_node {
    struct llist_node * next;
};

struct backing_dev_info {
};

struct perf_event_context {
};

struct rseq {
    __u32 cpu_id_start;
    __u32 cpu_id;
    union anon_union.conflict3f46_for_rseq_cs rseq_cs;
    __u32 flags;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

struct rcu_node {
};

struct request_queue {
};

struct prev_cputime {
    u64 utime;
    u64 stime;
    raw_spinlock_t lock;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

struct mm_struct {
};

struct anon_struct.conflict1c01 {
    struct pollfd * ufds;
    int nfds;
    int has_timeout;
    ulong tv_sec;
    ulong tv_nsec;
};

struct rt_mutex_waiter {
};

struct task_delay_info {
};

struct task_cputime {
    u64 utime;
    u64 stime;
    ulonglong sum_exec_runtime;
};

struct anon_struct.conflict1b27 {
    u32 * uaddr;
    u32 val;
    u32 flags;
    u32 bitset;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    u64 time;
    u32 * uaddr2;
};

struct pipe_inode_info {
};

struct util_est {
    uint enqueued;
    uint ewma;
};

struct sched_avg {
    u64 last_update_time;
    u64 load_sum;
    u64 runnable_load_sum;
    u32 util_sum;
    u32 period_contrib;
    ulong load_avg;
    ulong runnable_load_avg;
    ulong util_avg;
    struct util_est util_est;
};

struct cfs_rq {
};

struct seqcount {
    uint sequence;
};

struct hrtimer_clock_base {
    struct hrtimer_cpu_base * cpu_base;
    uint index;
    clockid_t clockid;
    seqcount_t seq;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    struct hrtimer * running;
    struct timerqueue_head active;
    ktime_t (* get_time)(void);
    ktime_t offset;
};

struct signal_struct {
};

struct rb_root_cached {
    struct rb_root rb_root;
    struct rb_node * rb_leftmost;
};

struct compat_timespec {
    compat_time_t tv_sec;
    s32 tv_nsec;
};

struct timespec {
    __kernel_time_t tv_sec;
    long tv_nsec;
};

struct sched_rt_entity {
    struct list_head run_list;
    ulong timeout;
    ulong watchdog_stamp;
    uint time_slice;
    ushort on_rq;
    ushort on_list;
    struct sched_rt_entity * back;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct fs_struct {
};

struct plist_node {
    int prio;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct list_head prio_list;
    struct list_head node_list;
};

struct page {
};

struct vmacache {
    u64 seqnum;
    struct vm_area_struct * vmas[4];
};

union anon_union.conflict1b7e_for_field_2 {
    struct timespec * rmtp;
    struct compat_timespec * compat_rmtp;
};

struct anon_struct.conflict1bce {
    clockid_t clockid;
    enum timespec_type type;
    union anon_union.conflict1b7e_for_field_2 field_2;
    u64 expires;
};

struct nsproxy {
};

struct mem_cgroup {
};

union anon_union.conflict1c51_for_field_1 {
    struct anon_struct.conflict1b27 futex;
    struct anon_struct.conflict1bce nanosleep;
    struct anon_struct.conflict1c01 poll;
};

struct hrtimer_cpu_base {
    raw_spinlock_t lock;
    uint cpu;
    uint active_bases;
    uint clock_was_set_seq;
    uint hres_active:1;
    uint in_hrtirq:1;
    uint hang_detected:1;
    uint softirq_activated:1;
    undefined field_0x11;
    undefined field_0x12;
    undefined field_0x13;
    uint nr_events;
    ushort nr_retries;
    ushort nr_hangs;
    uint max_hang_time;
    ktime_t expires_next;
    struct hrtimer * next_timer;
    ktime_t softirq_expires_next;
    struct hrtimer * softirq_next_timer;
    struct hrtimer_clock_base clock_base[8];
};

struct robust_list_head {
};

struct wake_q_node {
    struct wake_q_node * next;
};

struct pid_namespace {
};

struct pollfd {
};

struct task_group {
};

struct task_io_accounting {
    u64 rchar;
    u64 wchar;
    u64 syscr;
    u64 syscw;
    u64 syscfs;
    u64 read_bytes;
    u64 write_bytes;
    u64 cancelled_write_bytes;
};

struct thread_info {
    ulong flags;
    mm_segment_t addr_limit;
    u64 ttbr0;
    int preempt_count;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

struct futex_pi_state {
};

struct sched_statistics {
    u64 wait_start;
    u64 wait_max;
    u64 wait_count;
    u64 wait_sum;
    u64 iowait_count;
    u64 iowait_sum;
    u64 sleep_start;
    u64 sleep_max;
    s64 sum_sleep_runtime;
    u64 block_start;
    u64 block_max;
    u64 exec_max;
    u64 slice_max;
    u64 nr_migrations_cold;
    u64 nr_failed_migrations_affine;
    u64 nr_failed_migrations_running;
    u64 nr_failed_migrations_hot;
    u64 nr_forced_migrations;
    u64 nr_wakeups;
    u64 nr_wakeups_sync;
    u64 nr_wakeups_migrate;
    u64 nr_wakeups_local;
    u64 nr_wakeups_remote;
    u64 nr_wakeups_affine;
    u64 nr_wakeups_affine_attempts;
    u64 nr_wakeups_passive;
    u64 nr_wakeups_idle;
};

struct sched_entity {
    struct load_weight load;
    ulong runnable_weight;
    struct rb_node run_node;
    struct list_head group_node;
    uint on_rq;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
    u64 exec_start;
    u64 sum_exec_runtime;
    u64 vruntime;
    u64 prev_sum_exec_runtime;
    u64 nr_migrations;
    struct sched_statistics statistics;
    int depth;
    undefined field_0x14c;
    undefined field_0x14d;
    undefined field_0x14e;
    undefined field_0x14f;
    struct sched_entity * parent;
    struct cfs_rq * cfs_rq;
    struct cfs_rq * my_q;
    undefined field_0x168;
    undefined field_0x169;
    undefined field_0x16a;
    undefined field_0x16b;
    undefined field_0x16c;
    undefined field_0x16d;
    undefined field_0x16e;
    undefined field_0x16f;
    undefined field_0x170;
    undefined field_0x171;
    undefined field_0x172;
    undefined field_0x173;
    undefined field_0x174;
    undefined field_0x175;
    undefined field_0x176;
    undefined field_0x177;
    undefined field_0x178;
    undefined field_0x179;
    undefined field_0x17a;
    undefined field_0x17b;
    undefined field_0x17c;
    undefined field_0x17d;
    undefined field_0x17e;
    undefined field_0x17f;
    struct sched_avg avg;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    undefined field_0x1e0;
    undefined field_0x1e1;
    undefined field_0x1e2;
    undefined field_0x1e3;
    undefined field_0x1e4;
    undefined field_0x1e5;
    undefined field_0x1e6;
    undefined field_0x1e7;
    undefined field_0x1e8;
    undefined field_0x1e9;
    undefined field_0x1ea;
    undefined field_0x1eb;
    undefined field_0x1ec;
    undefined field_0x1ed;
    undefined field_0x1ee;
    undefined field_0x1ef;
    undefined field_0x1f0;
    undefined field_0x1f1;
    undefined field_0x1f2;
    undefined field_0x1f3;
    undefined field_0x1f4;
    undefined field_0x1f5;
    undefined field_0x1f6;
    undefined field_0x1f7;
    undefined field_0x1f8;
    undefined field_0x1f9;
    undefined field_0x1fa;
    undefined field_0x1fb;
    undefined field_0x1fc;
    undefined field_0x1fd;
    undefined field_0x1fe;
    undefined field_0x1ff;
};

struct task_rss_stat {
    int events;
    int count[5];
};

struct nodemask_t {
    ulong bits[1];
};

struct cpumask {
    ulong bits[1];
};

struct hrtimer {
    struct timerqueue_node node;
    ktime_t _softexpires;
    hrtimer_restart (* function)(struct hrtimer *);
    struct hrtimer_clock_base * base;
    u8 state;
    u8 is_rel;
    u8 is_soft;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    u64 android_kabi_reserved1;
};

struct sched_dl_entity {
    struct rb_node rb_node;
    u64 dl_runtime;
    u64 dl_deadline;
    u64 dl_period;
    u64 dl_bw;
    u64 dl_density;
    s64 runtime;
    u64 deadline;
    uint flags;
    uint dl_throttled:1;
    uint dl_boosted:1;
    uint dl_yielded:1;
    uint dl_non_contending:1;
    uint dl_overrun:1;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    struct hrtimer dl_timer;
    struct hrtimer inactive_timer;
};

struct restart_block {
    long (* fn)(struct restart_block *);
    union anon_union.conflict1c51_for_field_1 field_1;
};

struct sched_info {
    ulong pcount;
    ulonglong run_delay;
    ulonglong last_arrival;
    ulonglong last_queued;
};

struct task_struct { // Missing member tlb_ubc : tlbflush_unmap_batch at offset 0x998 [zero-length member]
    struct thread_info thread_info;
    long state;
    void * stack;
    struct atomic_t usage;
    uint flags;
    uint ptrace;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    struct llist_node wake_entry;
    int on_cpu;
    uint cpu;
    uint wakee_flips;
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    ulong wakee_flip_decay_ts;
    struct task_struct * last_wakee;
    int recent_used_cpu;
    int wake_cpu;
    int on_rq;
    int prio;
    int static_prio;
    int normal_prio;
    uint rt_priority;
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    struct sched_class * sched_class;
    undefined field_0x90;
    undefined field_0x91;
    undefined field_0x92;
    undefined field_0x93;
    undefined field_0x94;
    undefined field_0x95;
    undefined field_0x96;
    undefined field_0x97;
    undefined field_0x98;
    undefined field_0x99;
    undefined field_0x9a;
    undefined field_0x9b;
    undefined field_0x9c;
    undefined field_0x9d;
    undefined field_0x9e;
    undefined field_0x9f;
    undefined field_0xa0;
    undefined field_0xa1;
    undefined field_0xa2;
    undefined field_0xa3;
    undefined field_0xa4;
    undefined field_0xa5;
    undefined field_0xa6;
    undefined field_0xa7;
    undefined field_0xa8;
    undefined field_0xa9;
    undefined field_0xaa;
    undefined field_0xab;
    undefined field_0xac;
    undefined field_0xad;
    undefined field_0xae;
    undefined field_0xaf;
    undefined field_0xb0;
    undefined field_0xb1;
    undefined field_0xb2;
    undefined field_0xb3;
    undefined field_0xb4;
    undefined field_0xb5;
    undefined field_0xb6;
    undefined field_0xb7;
    undefined field_0xb8;
    undefined field_0xb9;
    undefined field_0xba;
    undefined field_0xbb;
    undefined field_0xbc;
    undefined field_0xbd;
    undefined field_0xbe;
    undefined field_0xbf;
    struct sched_entity se;
    struct sched_rt_entity rt;
    u64 last_sleep_ts;
    int boost;
    undefined field_0x31c;
    undefined field_0x31d;
    undefined field_0x31e;
    undefined field_0x31f;
    u64 boost_period;
    u64 boost_expires;
    struct task_group * sched_task_group;
    struct sched_dl_entity dl;
    uint policy;
    int nr_cpus_allowed;
    cpumask_t cpus_allowed;
    cpumask_t cpus_requested;
    int rcu_read_lock_nesting;
    union rcu_special rcu_read_unlock_special;
    struct list_head rcu_node_entry;
    struct rcu_node * rcu_blocked_node;
    ulong rcu_tasks_nvcsw;
    u8 rcu_tasks_holdout;
    u8 rcu_tasks_idx;
    undefined field_0x462;
    undefined field_0x463;
    int rcu_tasks_idle_cpu;
    struct list_head rcu_tasks_holdout_list;
    struct sched_info sched_info;
    struct list_head tasks;
    struct plist_node pushable_tasks;
    struct rb_node pushable_dl_tasks;
    struct mm_struct * mm;
    struct mm_struct * active_mm;
    struct vmacache vmacache;
    struct task_rss_stat rss_stat;
    int exit_state;
    int exit_code;
    int exit_signal;
    int pdeath_signal;
    ulong jobctl;
    uint personality;
    uint sched_reset_on_fork:1;
    uint sched_contributes_to_load:1;
    uint sched_migrated:1;
    uint sched_remote_wakeup:1;
    uint sched_psi_wake_requeue:1;
    undefined field_0x555;
    undefined field_0x556;
    undefined field_0x557;
    uint in_execve:1;
    uint in_iowait:1;
    uint in_user_fault:1;
    uint memcg_kmem_skip_account:1;
    uint no_cgroup_migration:1;
    uint use_memdelay:1;
    undefined field_0x559;
    undefined field_0x55a;
    undefined field_0x55b;
    undefined field_0x55c;
    undefined field_0x55d;
    undefined field_0x55e;
    undefined field_0x55f;
    ulong atomic_flags;
    struct restart_block restart_block;
    pid_t pid;
    pid_t tgid;
    ulong stack_canary;
    struct task_struct * real_parent;
    struct task_struct * parent;
    struct list_head children;
    struct list_head sibling;
    struct task_struct * group_leader;
    struct list_head ptraced;
    struct list_head ptrace_entry;
    struct pid * thread_pid;
    struct hlist_node pid_links[4];
    struct list_head thread_group;
    struct list_head thread_node;
    struct completion * vfork_done;
    int * set_child_tid;
    int * clear_child_tid;
    u64 utime;
    u64 stime;
    u64 gtime;
    u64 * time_in_state;
    uint max_state;
    undefined field_0x6a4;
    undefined field_0x6a5;
    undefined field_0x6a6;
    undefined field_0x6a7;
    struct prev_cputime prev_cputime;
    ulong nvcsw;
    ulong nivcsw;
    u64 start_time;
    u64 real_start_time;
    ulong min_flt;
    ulong maj_flt;
    struct task_cputime cputime_expires;
    struct list_head cpu_timers[3];
    struct cred * ptracer_cred;
    struct cred * real_cred;
    struct cred * cred;
    char comm[16];
    struct nameidata * nameidata;
    ulong last_switch_count;
    ulong last_switch_time;
    struct fs_struct * fs;
    struct files_struct * files;
    struct nsproxy * nsproxy;
    struct signal_struct * signal;
    struct sighand_struct * sighand;
    struct sigset_t blocked;
    struct sigset_t real_blocked;
    struct sigset_t saved_sigmask;
    struct sigpending pending;
    ulong sas_ss_sp;
    size_t sas_ss_size;
    uint sas_ss_flags;
    undefined field_0x7e4;
    undefined field_0x7e5;
    undefined field_0x7e6;
    undefined field_0x7e7;
    struct callback_head * task_works;
    struct audit_context * audit_context;
    struct seccomp seccomp;
    u64 parent_exec_id;
    u64 self_exec_id;
    spinlock_t alloc_lock;
    raw_spinlock_t pi_lock;
    struct wake_q_node wake_q;
    struct rb_root_cached pi_waiters;
    struct task_struct * pi_top_task;
    struct rt_mutex_waiter * pi_blocked_on;
    void * journal_info;
    struct bio_list * bio_list;
    struct blk_plug * plug;
    struct reclaim_state * reclaim_state;
    struct backing_dev_info * backing_dev_info;
    struct io_context * io_context;
    ulong ptrace_message;
    siginfo_t * last_siginfo;
    struct task_io_accounting ioac;
    uint psi_flags;
    undefined field_0x8cc;
    undefined field_0x8cd;
    undefined field_0x8ce;
    undefined field_0x8cf;
    u64 acct_rss_mem1;
    u64 acct_vm_mem1;
    u64 acct_timexpd;
    struct nodemask_t mems_allowed;
    seqcount_t mems_allowed_seq;
    int cpuset_mem_spread_rotor;
    int cpuset_slab_spread_rotor;
    undefined field_0x8fc;
    undefined field_0x8fd;
    undefined field_0x8fe;
    undefined field_0x8ff;
    struct css_set * cgroups;
    struct list_head cg_list;
    struct robust_list_head * robust_list;
    struct compat_robust_list_head * compat_robust_list;
    struct list_head pi_state_list;
    struct futex_pi_state * pi_state_cache;
    struct perf_event_context * perf_event_ctxp[2];
    struct mutex perf_event_mutex;
    struct list_head perf_event_list;
    struct rseq * rseq;
    u32 rseq_len;
    u32 rseq_sig;
    ulong rseq_event_mask;
    struct callback_head rcu;
    struct pipe_inode_info * splice_pipe;
    struct page_frag task_frag;
    struct task_delay_info * delays;
    int nr_dirtied;
    int nr_dirtied_pause;
    ulong dirty_paused_when;
    u64 timer_slack_ns;
    u64 default_timer_slack_ns;
    ulong trace;
    ulong trace_recursion;
    struct mem_cgroup * memcg_in_oom;
    gfp_t memcg_oom_gfp_mask;
    int memcg_oom_order;
    uint memcg_nr_pages_over_high;
    undefined field_0xa0c;
    undefined field_0xa0d;
    undefined field_0xa0e;
    undefined field_0xa0f;
    struct mem_cgroup * active_memcg;
    struct request_queue * throttle_queue;
    struct uprobe_task * utask;
    int pagefault_disabled;
    undefined field_0xa2c;
    undefined field_0xa2d;
    undefined field_0xa2e;
    undefined field_0xa2f;
    struct task_struct * oom_reaper_list;
    struct vm_struct * stack_vm_area;
    struct atomic_t stack_refcount;
    undefined field_0xa44;
    undefined field_0xa45;
    undefined field_0xa46;
    undefined field_0xa47;
    void * security;
    union anon_union.conflict460d_for_field_182 field_182;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    u64 android_kabi_reserved5;
    u64 android_kabi_reserved6;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
    struct thread_struct thread;
    undefined field_0xe60;
    undefined field_0xe61;
    undefined field_0xe62;
    undefined field_0xe63;
    undefined field_0xe64;
    undefined field_0xe65;
    undefined field_0xe66;
    undefined field_0xe67;
    undefined field_0xe68;
    undefined field_0xe69;
    undefined field_0xe6a;
    undefined field_0xe6b;
    undefined field_0xe6c;
    undefined field_0xe6d;
    undefined field_0xe6e;
    undefined field_0xe6f;
    undefined field_0xe70;
    undefined field_0xe71;
    undefined field_0xe72;
    undefined field_0xe73;
    undefined field_0xe74;
    undefined field_0xe75;
    undefined field_0xe76;
    undefined field_0xe77;
    undefined field_0xe78;
    undefined field_0xe79;
    undefined field_0xe7a;
    undefined field_0xe7b;
    undefined field_0xe7c;
    undefined field_0xe7d;
    undefined field_0xe7e;
    undefined field_0xe7f;
};

struct uprobe_task {
};

struct audit_context {
};

struct cred {
};

struct files_struct {
};

struct css_set {
};

struct per_cpu_pages {
    int count;
    int high;
    int batch;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct list_head lists[4];
};

struct reclaim_state {
};

struct vm_struct {
};

struct per_cpu_pageset {
    struct per_cpu_pages pcp;
    s8 stat_threshold;
    s8 vm_stat_diff[13];
    undefined field_0x5e;
    undefined field_0x5f;
};

struct blk_plug {
};

struct nameidata {
};

typedef struct zone_padding zone_padding, *Pzone_padding;

struct zone_padding { // Missing member x : char[1] at offset 0x0 [Unsupported interior flex array: char[1]]
};

typedef enum zone_watermarks {
    NR_WMARK=3,
    WMARK_HIGH=2,
    WMARK_LOW=1,
    WMARK_MIN=0
} zone_watermarks;

typedef enum migratetype {
    MIGRATE_CMA=3,
    MIGRATE_HIGHATOMIC=4,
    MIGRATE_ISOLATE=5,
    MIGRATE_MOVABLE=1,
    MIGRATE_PCPTYPES=4,
    MIGRATE_RECLAIMABLE=2,
    MIGRATE_TYPES=6,
    MIGRATE_UNMOVABLE=0
} migratetype;

typedef enum lru_list {
    LRU_ACTIVE_ANON=1,
    LRU_ACTIVE_FILE=3,
    LRU_INACTIVE_ANON=0,
    LRU_INACTIVE_FILE=2,
    LRU_UNEVICTABLE=4,
    NR_LRU_LISTS=5
} lru_list;

typedef enum zone_stat_item {
    NR_BOUNCE=10,
    NR_FREE_CMA_PAGES=12,
    NR_FREE_PAGES=0,
    NR_KERNEL_STACK_KB=9,
    NR_MLOCK=7,
    NR_PAGETABLE=8,
    NR_VM_ZONE_STAT_ITEMS=13,
    NR_ZONE_ACTIVE_ANON=2,
    NR_ZONE_ACTIVE_FILE=4,
    NR_ZONE_INACTIVE_ANON=1,
    NR_ZONE_INACTIVE_FILE=3,
    NR_ZONE_LRU_BASE=1,
    NR_ZONE_UNEVICTABLE=5,
    NR_ZONE_WRITE_PENDING=6,
    NR_ZSPAGES=11
} zone_stat_item;

typedef enum node_stat_item {
    NR_ACTIVE_ANON=1,
    NR_ACTIVE_FILE=3,
    NR_ANON_MAPPED=13,
    NR_ANON_THPS=22,
    NR_DIRTIED=26,
    NR_FILE_DIRTY=16,
    NR_FILE_MAPPED=14,
    NR_FILE_PAGES=15,
    NR_GPU_HEAP=32,
    NR_INACTIVE_ANON=0,
    NR_INACTIVE_FILE=2,
    NR_ION_HEAP=30,
    NR_ION_HEAP_POOL=31,
    NR_ISOLATED_ANON=7,
    NR_ISOLATED_FILE=8,
    NR_KERNEL_MISC_RECLAIMABLE=28,
    NR_LRU_BASE=0,
    NR_SHMEM=19,
    NR_SHMEM_PMDMAPPED=21,
    NR_SHMEM_THPS=20,
    NR_SLAB_RECLAIMABLE=5,
    NR_SLAB_UNRECLAIMABLE=6,
    NR_UNEVICTABLE=4,
    NR_UNRECLAIMABLE_PAGES=29,
    NR_UNSTABLE_NFS=23,
    NR_VMSCAN_IMMEDIATE=25,
    NR_VMSCAN_WRITE=24,
    NR_VM_NODE_STAT_ITEMS=33,
    NR_WRITEBACK=17,
    NR_WRITEBACK_TEMP=18,
    NR_WRITTEN=27,
    WORKINGSET_ACTIVATE=10,
    WORKINGSET_NODERECLAIM=12,
    WORKINGSET_REFAULT=9,
    WORKINGSET_RESTORE=11
} node_stat_item;

typedef union anon_union.conflict1c51 anon_union.conflict1c51, *Panon_union.conflict1c51;

union anon_union.conflict1c51 {
    struct anon_struct.conflict1b27 futex;
    struct anon_struct.conflict1bce nanosleep;
    struct anon_struct.conflict1c01 poll;
};

typedef union anon_union.conflict1b7e anon_union.conflict1b7e, *Panon_union.conflict1b7e;

union anon_union.conflict1b7e {
    struct timespec * rmtp;
    struct compat_timespec * compat_rmtp;
};

typedef union anon_union.conflict3297 anon_union.conflict3297, *Panon_union.conflict3297;

union anon_union.conflict3297 {
    struct kernfs_elem_dir dir;
    struct kernfs_elem_symlink symlink;
    struct kernfs_elem_attr attr;
};

typedef enum epd_lut_type {
    WF_TYPE_A2=6,
    WF_TYPE_AUTO=5,
    WF_TYPE_GC16=7,
    WF_TYPE_GCC16=11,
    WF_TYPE_GL16=8,
    WF_TYPE_GLD16=10,
    WF_TYPE_GLR16=9,
    WF_TYPE_GRAY16=2,
    WF_TYPE_GRAY2=4,
    WF_TYPE_GRAY4=3,
    WF_TYPE_MAX=12,
    WF_TYPE_RESET=1
} epd_lut_type;

typedef struct epd_lut_data epd_lut_data, *Pepd_lut_data;

struct epd_lut_data {
    uint frame_num;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    uint * data;
    u8 * wf_table;
};

typedef enum pvi_wf_mode {
    PVI_WF_A2=7,
    PVI_WF_DU=1,
    PVI_WF_DU4=2,
    PVI_WF_GC16=3,
    PVI_WF_GCC16=8,
    PVI_WF_GL16=4,
    PVI_WF_GLD16=6,
    PVI_WF_GLR16=5,
    PVI_WF_MAX=9,
    PVI_WF_RESET=0
} pvi_wf_mode;

typedef enum pcpu_fc {
    PCPU_FC_AUTO=0,
    PCPU_FC_EMBED=1,
    PCPU_FC_NR=3,
    PCPU_FC_PAGE=2
} pcpu_fc;

typedef struct lock_class_key lock_class_key, *Plock_class_key;

struct lock_class_key {
};

typedef union anon_union.conflict7e2 anon_union.conflict7e2, *Panon_union.conflict7e2;

union anon_union.conflict7e2 {
    struct atomic_t val;
    struct anon_struct.conflict7a0 field_1;
    struct anon_struct.conflict7c1 field_2;
};

typedef struct cpu_topology cpu_topology, *Pcpu_topology;

struct cpu_topology {
    int thread_id;
    int core_id;
    int package_id;
    int llc_id;
    cpumask_t thread_sibling;
    cpumask_t core_sibling;
    cpumask_t llc_sibling;
};

typedef struct tlbflush_unmap_batch tlbflush_unmap_batch, *Ptlbflush_unmap_batch;

struct tlbflush_unmap_batch {
};

typedef struct taint_flag taint_flag, *Ptaint_flag;

struct taint_flag {
    char c_true;
    char c_false;
    bool module;
};

typedef struct atomic_notifier_head atomic_notifier_head, *Patomic_notifier_head;

typedef struct notifier_block notifier_block, *Pnotifier_block;

struct atomic_notifier_head {
    spinlock_t lock;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    struct notifier_block * head;
};

struct notifier_block {
    int (* notifier_call)(struct notifier_block *, ulong, void *);
    struct notifier_block * next;
    int priority;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

typedef enum system_states {
    SYSTEM_BOOTING=0,
    SYSTEM_HALT=3,
    SYSTEM_POWER_OFF=4,
    SYSTEM_RESTART=5,
    SYSTEM_RUNNING=2,
    SYSTEM_SCHEDULING=1,
    SYSTEM_SUSPEND=6
} system_states;

typedef struct timer_list timer_list, *Ptimer_list;

struct timer_list {
    struct hlist_node entry;
    ulong expires;
    void (* function)(struct timer_list *);
    u32 flags;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

typedef struct work_struct work_struct, *Pwork_struct;

struct work_struct {
    atomic_long_t data;
    struct list_head entry;
    void (* func)(struct work_struct *);
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
};

typedef struct secondary_data secondary_data, *Psecondary_data;

struct secondary_data {
    void * stack;
    struct task_struct * task;
    long status;
};

typedef int initcall_entry_t;

typedef union anon_union.conflict3f46 anon_union.conflict3f46, *Panon_union.conflict3f46;

union anon_union.conflict3f46 {
    __u64 ptr64;
    __u64 ptr;
};

typedef enum rseq_cs_flags_bit {
    RSEQ_CS_FLAG_NO_RESTART_ON_MIGRATE_BIT=2,
    RSEQ_CS_FLAG_NO_RESTART_ON_PREEMPT_BIT=0,
    RSEQ_CS_FLAG_NO_RESTART_ON_SIGNAL_BIT=1
} rseq_cs_flags_bit;

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct rw_semaphore rw_semaphore, *Prw_semaphore;

struct rw_semaphore {
    atomic_long_t count;
    struct list_head wait_list;
    raw_spinlock_t wait_lock;
    struct optimistic_spin_queue osq;
    struct task_struct * owner;
    long m_count;
};

typedef enum hrtimer_base_type {
    HRTIMER_BASE_BOOTTIME=2,
    HRTIMER_BASE_BOOTTIME_SOFT=6,
    HRTIMER_BASE_MONOTONIC=0,
    HRTIMER_BASE_MONOTONIC_SOFT=4,
    HRTIMER_BASE_REALTIME=1,
    HRTIMER_BASE_REALTIME_SOFT=5,
    HRTIMER_BASE_TAI=3,
    HRTIMER_BASE_TAI_SOFT=7,
    HRTIMER_MAX_CLOCK_BASES=8
} hrtimer_base_type;

typedef struct resource resource, *Presource;

struct resource {
    resource_size_t start;
    resource_size_t end;
    char * name;
    ulong flags;
    ulong desc;
    struct resource * parent;
    struct resource * sibling;
    struct resource * child;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

typedef enum rpm_status {
    RPM_ACTIVE=0,
    RPM_RESUMING=1,
    RPM_SUSPENDED=2,
    RPM_SUSPENDING=3
} rpm_status;

typedef enum rpm_request {
    RPM_REQ_AUTOSUSPEND=3,
    RPM_REQ_IDLE=1,
    RPM_REQ_NONE=0,
    RPM_REQ_RESUME=4,
    RPM_REQ_SUSPEND=2
} rpm_request;

typedef struct pm_subsys_data pm_subsys_data, *Ppm_subsys_data;

typedef struct pm_domain_data pm_domain_data, *Ppm_domain_data;

struct pm_subsys_data {
    spinlock_t lock;
    uint refcount;
    struct list_head clock_list;
    struct pm_domain_data * domain_data;
};

struct pm_domain_data {
};

typedef struct dev_pm_ops dev_pm_ops, *Pdev_pm_ops;

typedef struct device device, *Pdevice;

typedef struct device_private device_private, *Pdevice_private;

typedef struct device_type device_type, *Pdevice_type;

typedef struct bus_type bus_type, *Pbus_type;

typedef struct device_driver device_driver, *Pdevice_driver;

typedef struct pm_message pm_message, *Ppm_message;

typedef struct pm_message pm_message_t;

typedef struct dev_links_info dev_links_info, *Pdev_links_info;

typedef struct dev_pm_info dev_pm_info, *Pdev_pm_info;

typedef struct dev_pm_domain dev_pm_domain, *Pdev_pm_domain;

typedef struct irq_domain irq_domain, *Pirq_domain;

typedef struct dev_pin_info dev_pin_info, *Pdev_pin_info;

typedef struct dma_map_ops dma_map_ops, *Pdma_map_ops;

typedef struct device_dma_parameters device_dma_parameters, *Pdevice_dma_parameters;

typedef struct dma_coherent_mem dma_coherent_mem, *Pdma_coherent_mem;

typedef struct cma cma, *Pcma;

typedef struct removed_region removed_region, *Premoved_region;

typedef struct dev_archdata dev_archdata, *Pdev_archdata;

typedef struct device_node device_node, *Pdevice_node;

typedef struct fwnode_handle fwnode_handle, *Pfwnode_handle;

typedef struct klist_node klist_node, *Pklist_node;

typedef struct class class, *Pclass;

typedef struct attribute_group attribute_group, *Pattribute_group;

typedef struct bin_attribute bin_attribute, *Pbin_attribute;

typedef struct iommu_group iommu_group, *Piommu_group;

typedef struct iommu_fwspec iommu_fwspec, *Piommu_fwspec;

typedef struct module module, *Pmodule;

typedef enum probe_type {
    PROBE_DEFAULT_STRATEGY=0,
    PROBE_FORCE_SYNCHRONOUS=2,
    PROBE_PREFER_ASYNCHRONOUS=1
} probe_type;

typedef struct of_device_id of_device_id, *Pof_device_id;

typedef struct acpi_device_id acpi_device_id, *Pacpi_device_id;

typedef struct driver_private driver_private, *Pdriver_private;

typedef struct iommu_ops iommu_ops, *Piommu_ops;

typedef struct subsys_private subsys_private, *Psubsys_private;

typedef enum dl_dev_state {
    DL_DEV_DRIVER_BOUND=2,
    DL_DEV_NO_DRIVER=0,
    DL_DEV_PROBING=1,
    DL_DEV_UNBINDING=3
} dl_dev_state;

typedef struct wakeup_source wakeup_source, *Pwakeup_source;

typedef struct wake_irq wake_irq, *Pwake_irq;

typedef struct dev_pm_qos dev_pm_qos, *Pdev_pm_qos;

struct bus_type { // Missing member lock_key : lock_class_key at offset 0xa8 [zero-length member]
    char * name;
    char * dev_name;
    struct device * dev_root;
    struct attribute_group * * bus_groups;
    struct attribute_group * * dev_groups;
    struct attribute_group * * drv_groups;
    int (* match)(struct device *, struct device_driver *);
    int (* uevent)(struct device *, struct kobj_uevent_env *);
    int (* probe)(struct device *);
    void (* sync_state)(struct device *);
    int (* remove)(struct device *);
    void (* shutdown)(struct device *);
    int (* online)(struct device *);
    int (* offline)(struct device *);
    int (* suspend)(struct device *, pm_message_t);
    int (* resume)(struct device *);
    int (* num_vf)(struct device *);
    int (* dma_configure)(struct device *);
    struct dev_pm_ops * pm;
    struct iommu_ops * iommu_ops;
    struct subsys_private * p;
    bool need_parent_lock;
    undefined field_0xa9;
    undefined field_0xaa;
    undefined field_0xab;
    undefined field_0xac;
    undefined field_0xad;
    undefined field_0xae;
    undefined field_0xaf;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct wakeup_source {
    char * name;
    int id;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    struct list_head entry;
    spinlock_t lock;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    struct wake_irq * wakeirq;
    struct timer_list timer;
    ulong timer_expires;
    ktime_t total_time;
    ktime_t max_time;
    ktime_t last_time;
    ktime_t start_prevent_time;
    ktime_t prevent_sleep_time;
    ulong event_count;
    ulong active_count;
    ulong relax_count;
    ulong expire_count;
    ulong wakeup_count;
    struct device * dev;
    bool active:1;
    bool autosleep_enabled:1;
    undefined field_0xc9;
    undefined field_0xca;
    undefined field_0xcb;
    undefined field_0xcc;
    undefined field_0xcd;
    undefined field_0xce;
    undefined field_0xcf;
};

struct device_type {
    char * name;
    struct attribute_group * * groups;
    int (* uevent)(struct device *, struct kobj_uevent_env *);
    char * (* devnode)(struct device *, umode_t *, struct kuid_t *, struct kgid_t *);
    void (* release)(struct device *);
    struct dev_pm_ops * pm;
};

struct dev_pm_qos {
};

struct device_dma_parameters {
    uint max_segment_size;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    ulong segment_boundary_mask;
};

struct pm_message {
    int event;
};

struct dev_pm_info {
    pm_message_t power_state;
    uint can_wakeup:1;
    uint async_suspend:1;
    bool in_dpm_list:1;
    bool is_prepared:1;
    bool is_suspended:1;
    bool is_noirq_suspended:1;
    bool is_late_suspended:1;
    bool no_pm:1;
    bool early_init:1;
    bool direct_complete:1;
    undefined field_0x6;
    undefined field_0x7;
    u32 driver_flags;
    spinlock_t lock;
    struct list_head entry;
    struct completion completion;
    struct wakeup_source * wakeup;
    bool wakeup_path:1;
    bool syscore:1;
    bool no_pm_callbacks:1;
    uint must_resume:1;
    uint may_skip_resume:1;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    struct timer_list suspend_timer;
    ulong timer_expires;
    struct work_struct work;
    wait_queue_head_t wait_queue;
    struct wake_irq * wakeirq;
    struct atomic_t usage_count;
    struct atomic_t child_count;
    uint disable_depth:3;
    uint idle_notification:1;
    uint request_pending:1;
    uint deferred_resume:1;
    uint runtime_auto:1;
    bool ignore_children:1;
    uint no_callbacks:1;
    uint irq_safe:1;
    uint use_autosuspend:1;
    uint timer_autosuspends:1;
    uint memalloc_noio:1;
    undefined field_0xea;
    undefined field_0xeb;
    uint links_count;
    enum rpm_request request;
    enum rpm_status runtime_status;
    int runtime_error;
    int autosuspend_delay;
    ulong last_busy;
    ulong active_jiffies;
    ulong suspended_jiffies;
    ulong accounting_timestamp;
    struct pm_subsys_data * subsys_data;
    void (* set_latency_tolerance)(struct device *, s32);
    struct dev_pm_qos * qos;
};

struct device_driver {
    char * name;
    struct bus_type * bus;
    struct module * owner;
    char * mod_name;
    bool suppress_bind_attrs;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    enum probe_type probe_type;
    struct of_device_id * of_match_table;
    struct acpi_device_id * acpi_match_table;
    int (* probe)(struct device *);
    void (* sync_state)(struct device *);
    int (* remove)(struct device *);
    void (* shutdown)(struct device *);
    int (* suspend)(struct device *, pm_message_t);
    int (* resume)(struct device *);
    struct attribute_group * * groups;
    struct dev_pm_ops * pm;
    void (* coredump)(struct device *);
    struct driver_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct dev_links_info {
    struct list_head suppliers;
    struct list_head consumers;
    struct list_head needs_suppliers;
    struct list_head defer_hook;
    bool need_for_probe;
    undefined field_0x41;
    undefined field_0x42;
    undefined field_0x43;
    enum dl_dev_state status;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct irq_domain {
};

struct device_private {
};

struct module {
};

struct attribute_group {
    char * name;
    umode_t (* is_visible)(struct kobject *, struct attribute *, int);
    umode_t (* is_bin_visible)(struct kobject *, struct bin_attribute *, int);
    struct attribute * * attrs;
    struct bin_attribute * * bin_attrs;
};

struct cma {
};

struct bin_attribute {
    struct attribute attr;
    size_t size;
    void * private;
    ssize_t (* read)(struct file *, struct kobject *, struct bin_attribute *, char *, loff_t, size_t);
    ssize_t (* write)(struct file *, struct kobject *, struct bin_attribute *, char *, loff_t, size_t);
    int (* mmap)(struct file *, struct kobject *, struct bin_attribute *, struct vm_area_struct *);
};

struct dev_pm_ops {
    int (* prepare)(struct device *);
    void (* complete)(struct device *);
    int (* suspend)(struct device *);
    int (* resume)(struct device *);
    int (* freeze)(struct device *);
    int (* thaw)(struct device *);
    int (* poweroff)(struct device *);
    int (* restore)(struct device *);
    int (* suspend_late)(struct device *);
    int (* resume_early)(struct device *);
    int (* freeze_late)(struct device *);
    int (* thaw_early)(struct device *);
    int (* poweroff_late)(struct device *);
    int (* restore_early)(struct device *);
    int (* suspend_noirq)(struct device *);
    int (* resume_noirq)(struct device *);
    int (* freeze_noirq)(struct device *);
    int (* thaw_noirq)(struct device *);
    int (* poweroff_noirq)(struct device *);
    int (* restore_noirq)(struct device *);
    int (* runtime_suspend)(struct device *);
    int (* runtime_resume)(struct device *);
    int (* runtime_idle)(struct device *);
};

struct dev_pm_domain {
    struct dev_pm_ops ops;
    void (* detach)(struct device *, bool);
    int (* activate)(struct device *);
    void (* sync)(struct device *);
    void (* dismiss)(struct device *);
};

struct iommu_ops {
};

struct dev_archdata {
    void * iommu;
    bool dma_coherent;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
};

struct klist_node {
    void * n_klist;
    struct list_head n_node;
    struct kref n_ref;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
};

struct device {
    struct device * parent;
    struct device_private * p;
    struct kobject kobj;
    char * init_name;
    struct device_type * type;
    struct mutex mutex;
    struct bus_type * bus;
    struct device_driver * driver;
    void * platform_data;
    void * driver_data;
    struct dev_links_info links;
    struct dev_pm_info power;
    struct dev_pm_domain * pm_domain;
    struct irq_domain * msi_domain;
    struct dev_pin_info * pins;
    struct list_head msi_list;
    struct dma_map_ops * dma_ops;
    u64 * dma_mask;
    u64 coherent_dma_mask;
    u64 bus_dma_mask;
    ulong dma_pfn_offset;
    struct device_dma_parameters * dma_parms;
    struct list_head dma_pools;
    struct dma_coherent_mem * dma_mem;
    struct cma * cma_area;
    struct removed_region * removed_mem;
    struct dev_archdata archdata;
    struct device_node * of_node;
    struct fwnode_handle * fwnode;
    dev_t devt;
    u32 id;
    spinlock_t devres_lock;
    undefined field_0x30c;
    undefined field_0x30d;
    undefined field_0x30e;
    undefined field_0x30f;
    struct list_head devres_head;
    struct klist_node knode_class;
    struct class * class;
    struct attribute_group * * groups;
    void (* release)(struct device *);
    struct iommu_group * iommu_group;
    struct iommu_fwspec * iommu_fwspec;
    bool offline_disabled:1;
    bool offline:1;
    bool of_node_reused:1;
    bool state_synced:1;
    undefined field_0x369;
    undefined field_0x36a;
    undefined field_0x36b;
    undefined field_0x36c;
    undefined field_0x36d;
    undefined field_0x36e;
    undefined field_0x36f;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
    u64 android_kabi_reserved5;
    u64 android_kabi_reserved6;
    u64 android_kabi_reserved7;
    u64 android_kabi_reserved8;
};

struct dma_coherent_mem {
};

struct iommu_fwspec {
};

struct device_node {
};

struct subsys_private {
};

struct of_device_id {
};

struct class {
    char * name;
    struct module * owner;
    struct attribute_group * * class_groups;
    struct attribute_group * * dev_groups;
    struct kobject * dev_kobj;
    int (* dev_uevent)(struct device *, struct kobj_uevent_env *);
    char * (* devnode)(struct device *, umode_t *);
    void (* class_release)(struct class *);
    void (* dev_release)(struct device *);
    int (* shutdown_pre)(struct device *);
    struct kobj_ns_type_operations * ns_type;
    void * (* namespace)(struct device *);
    void (* get_ownership)(struct device *, struct kuid_t *, struct kgid_t *);
    struct dev_pm_ops * pm;
    struct subsys_private * p;
    u64 android_kabi_reserved1;
    u64 android_kabi_reserved2;
    u64 android_kabi_reserved3;
    u64 android_kabi_reserved4;
};

struct driver_private {
};

struct iommu_group {
};

struct dev_pin_info {
};

struct dma_map_ops {
};

struct wake_irq {
};

struct removed_region {
};

struct acpi_device_id {
};

struct fwnode_handle {
};

typedef enum ftr_type {
    FTR_EXACT=0,
    FTR_HIGHER_OR_ZERO_SAFE=3,
    FTR_HIGHER_SAFE=2,
    FTR_LOWER_SAFE=1
} ftr_type;

typedef struct arm64_ftr_reg arm64_ftr_reg, *Parm64_ftr_reg;

typedef struct arm64_ftr_bits arm64_ftr_bits, *Parm64_ftr_bits;

struct arm64_ftr_bits {
    bool sign;
    bool visible;
    bool strict;
    undefined field_0x3;
    enum ftr_type type;
    u8 shift;
    u8 width;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    s64 safe_val;
};

struct arm64_ftr_reg {
    char * name;
    u64 strict_mask;
    u64 user_mask;
    u64 sys_val;
    u64 user_val;
    struct arm64_ftr_bits * ftr_bits;
};

typedef struct arch_timer_erratum_workaround arch_timer_erratum_workaround, *Parch_timer_erratum_workaround;

typedef struct clock_event_device clock_event_device, *Pclock_event_device;

typedef enum arch_timer_erratum_match_type {
    ate_match_acpi_oem_info=2,
    ate_match_dt=0,
    ate_match_local_cap_id=1
} arch_timer_erratum_match_type;

struct arch_timer_erratum_workaround {
    enum arch_timer_erratum_match_type match_type;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    void * id;
    char * desc;
    u32 (* read_cntp_tval_el0)(void);
    u32 (* read_cntv_tval_el0)(void);
    u64 (* read_cntpct_el0)(void);
    u64 (* read_cntvct_el0)(void);
    int (* set_next_event_phys)(ulong, struct clock_event_device *);
    int (* set_next_event_virt)(ulong, struct clock_event_device *);
};

struct clock_event_device {
};

typedef struct blocking_notifier_head blocking_notifier_head, *Pblocking_notifier_head;

struct blocking_notifier_head {
    struct rw_semaphore rwsem;
    struct notifier_block * head;
};

typedef struct file_operations file_operations, *Pfile_operations;

struct file_operations {
};

typedef struct workqueue_struct workqueue_struct, *Pworkqueue_struct;

struct workqueue_struct {
};

typedef struct static_key_mod static_key_mod, *Pstatic_key_mod;

struct static_key_mod {
};

typedef struct user_namespace user_namespace, *Puser_namespace;

struct user_namespace {
};

typedef struct kmem_cache kmem_cache, *Pkmem_cache;

struct kmem_cache {
};

typedef struct tick_device tick_device, *Ptick_device;

struct tick_device {
};

typedef enum pid_type {
    PIDTYPE_MAX=4,
    PIDTYPE_PGID=2,
    PIDTYPE_PID=0,
    PIDTYPE_SID=3,
    PIDTYPE_TGID=1
} pid_type;

typedef enum anon_enum_32.conflict141 {
    ADDR_COMPAT_LAYOUT=2097152,
    ADDR_LIMIT_32BIT=8388608,
    ADDR_LIMIT_3GB=134217728,
    ADDR_NO_RANDOMIZE=262144,
    FDPIC_FUNCPTRS=524288,
    MAX_ZONELISTS=1,
    MMAP_PAGE_ZERO=1048576,
    MM_ANONPAGES=1,
    MM_FILEPAGES=0,
    MM_SHMEMPAGES=3,
    MM_SWAPENTS=2,
    MM_UNRECLAIMABLE=4,
    NR_MM_COUNTERS=5,
    READ_IMPLIES_EXEC=4194304,
    SHORT_INODE=16777216,
    STICKY_TIMEOUTS=67108864,
    UNAME26=131072,
    WHOLE_SECONDS=33554432,
    ZONELIST_FALLBACK=0,
    false=0,
    true=1
} anon_enum_32.conflict141;

typedef union anon_union.conflict460d anon_union.conflict460d, *Panon_union.conflict460d;

union anon_union.conflict460d {
    uint frozen:1;
    struct anon_struct.conflict45f1 __UNIQUE_ID_android_kabi_hide47;
    union anon_union.conflict871 field_2;
};

typedef enum perf_event_task_context {
    perf_hw_context=0,
    perf_invalid_context=-1,
    perf_nr_task_contexts=2,
    perf_sw_context=1
} perf_event_task_context;

typedef enum rseq_event_mask_bits {
    RSEQ_EVENT_MIGRATE_BIT=2,
    RSEQ_EVENT_PREEMPT_BIT=0,
    RSEQ_EVENT_SIGNAL_BIT=1
} rseq_event_mask_bits;

typedef struct pvi_waveform pvi_waveform, *Ppvi_waveform;

struct pvi_waveform {
    u32 checksum;
    u32 file_length;
    u32 serial;
    u8 run_type;
    u8 fpl_platform;
    u16 fpl_lot;
    u8 mode_version;
    u8 wf_version;
    u8 wf_subversion;
    u8 wf_type;
    u8 panel_size;
    u8 amepd_part_number;
    u8 wfm_rev;
    u8 frame_rate;
    u32 reserved;
    u8 vcom_offset;
    u8 xwia[3];
    u8 sc1;
    u8 unknown1[4];
    u8 modenumber;
    u8 temperaturenumber;
    u8 unknown2[9];
};

typedef struct static_key_false static_key_false, *Pstatic_key_false;

typedef struct static_key static_key, *Pstatic_key;

typedef union anon_union.conflict8cf_for_field_1 anon_union.conflict8cf_for_field_1, *Panon_union.conflict8cf_for_field_1;

typedef struct jump_entry jump_entry, *Pjump_entry;

typedef u64 jump_label_t;

struct jump_entry {
    jump_label_t code;
    jump_label_t target;
    jump_label_t key;
};

union anon_union.conflict8cf_for_field_1 {
    ulong type;
    struct jump_entry * entries;
    struct static_key_mod * next;
};

struct static_key {
    struct atomic_t enabled;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    union anon_union.conflict8cf_for_field_1 field_1;
};

struct static_key_false {
    struct static_key key;
};

typedef union anon_union.conflict8cf anon_union.conflict8cf, *Panon_union.conflict8cf;

union anon_union.conflict8cf {
    ulong type;
    struct jump_entry * entries;
    struct static_key_mod * next;
};

typedef enum kmalloc_cache_type {
    KMALLOC_NORMAL=0,
    KMALLOC_RECLAIM=1,
    NR_KMALLOC_TYPES=2
} kmalloc_cache_type;

typedef union anon_union.conflict1dba anon_union.conflict1dba, *Panon_union.conflict1dba;

union anon_union.conflict1dba {
    struct list_head private_list;
    struct callback_head callback_head;
};

typedef enum node_states {
    NR_NODE_STATES=5,
    N_CPU=4,
    N_HIGH_MEMORY=2,
    N_MEMORY=3,
    N_NORMAL_MEMORY=2,
    N_ONLINE=1,
    N_POSSIBLE=0
} node_states;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




int get_wf_mode_index(epd_lut_type lut_type);
int decodewaveform(uchar *data,int maxpic);
int FUN_001005ac(int param_1,int param_2);
int get_wf_frm_num(int mode,int temp_index);
int pvi_wf_get_lut(epd_lut_data *output,epd_lut_type lut_type,int temperture);
int pvi_wf_input(void *waveform_file);
char * pvi_wf_get_version(void);
undefined printk();

