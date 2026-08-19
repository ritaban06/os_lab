// WAP to fetch the parent process ID of any user created program

# include <stdio.h>
# include <stdlib.h>

int main(){
	int ppid = getppid();
	printf("The parent process of THIS program is %d \n", ppid);
}
