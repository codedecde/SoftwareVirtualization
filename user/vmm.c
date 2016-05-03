// Progrma to load GOS on HOS and give control to GOS.
#include <inc/lib.h>

// Some hash defines needed for us to load the kernel.
#define GBOOT "vmm/gboot"
#define GKERN "vmm/gkern"
#define GENTRY 0x7000

void 
umain(int argc, char** argv) 
{
	int my_env_id =  sys_getenvid();
	int env_id = sys_make_gosenv(GBOOT, GENTRY, GKERN); // TODO: Implement this system call.
	if(env_id < 0) {
		cprintf("[%d] We have a problem, HOS-ton ... haha, see what I did there?\n", my_env_id)
	} else {
		cprintf("[%d] GOS has been created on env[%d]", my_env_id, env_id);
		sys_launch_gosenv(env_id); // TODO: Implement this sytem call.
	}
	return;
}