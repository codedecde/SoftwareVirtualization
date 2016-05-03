// Implementation of VMM related syscalls.
// Called by creator environment, curenv


#include <inc/x86.h>
#include <inc/error.h>
#include <inc/string.h>
#include <inc/assert.h>

#include <kern/env.h>
#include <kern/pmap.h>
#include <kern/trap.h>
#include <kern/syscall.h>
#include <kern/console.h>
#include <kern/sched.h>
// Add more includes as you need them.


// Create a GOS environment
// Details to worry about:
// Initialization of GOS specific Env variables
// place gb and gk in memory
// gb=location of guest boot image in fs,
// gk=location of guest kernel image in fs
// ge=entry point for bootloader.
int
sys_make_gosenv(char* gb, char* gk, int ge) 
{

}


int
sys_launch_gosenv(int gos_env_id)
{

}