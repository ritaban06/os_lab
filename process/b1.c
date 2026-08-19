// WAP to show the PID of any user created program

# include <stdio.h>
# include <stdlib.h>

int main(){
	int pid = getpid();
	printf("The process ID of THIS program is %d \n", pid);
}
