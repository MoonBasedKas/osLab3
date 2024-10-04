//A Simple C program 
#include "types.h"
#include "stat.h"
#include "user.h"
	
//passing command line arguments 
	
int main(int argc, char *argv[]) 
{ 
    //Get pid of this process
    int pid = getpid();
    int x = get_priority(pid);
    // To verify our original priority print out.
    printf(2, "pid %d's nice: %d\n", pid, x);
    x = set_priority(pid, 5);
    x = get_priority(pid);
    // Update the priority.
    printf(2, "after setting pid %d's new nice: %d\n", pid, x);
    x = set_priority(pid, -123);
    x = get_priority(pid);
    // Trying setting out of bounds.
    printf(2, "after trying to set priority to -123 pid %d's new nice: %d\n", pid, x);
    // Trying to set out of bounds again but on the opposite end.
    x = set_priority(pid, 530);
    x = get_priority(pid);
    printf(2, "after trying to set priority to 530 setting pid %d's new nice: %d\n", pid, x);
    exit(); 
} 