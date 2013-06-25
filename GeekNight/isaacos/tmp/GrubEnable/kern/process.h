#include "types.h"


#define KERNELMODE 0
#define USERMODE   1


struct process {
	unsigned int pid;

	struct {
		u32 eax, ecx, edx, ebx;
		u32 esp, ebp, esi, edi;
		u32 eip, eflags;
		u32 cs:16, ss:16, ds:16, es:16, fs:16, gs:16;
		u32 cr3;
	} regs __attribute__ ((packed));

	struct {
		u32 esp0;
		u16 ss0;
	} kstack __attribute__ ((packed));

} __attribute__ ((packed));

#ifdef __PLIST__
struct process p_list[32];
struct process *current = 0;
int n_proc = 0;
#else
extern struct process p_list[];
extern struct process *current;
extern int n_proc;
#endif

void load_task(u32 *, u32 *, unsigned int);
