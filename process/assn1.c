// WAP to create a child process using fork, show their respective PIDs and PPIDs

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main(){
	int f;
	printf("I am process & my PID is %d \n", getpid());
	printf("I am process is BASH & my PID is %d \n", getppid());

	f = fork();
	printf("Fork returns %d \n", f);

	if (f == 0){
		printf("I am the child & PID no is %d \n", getpid());
		printf("My parent PID no is %d \n", getppid());
	}
	else{
		sleep(5);
		printf("I am the parent & PID no is %d \n", getpid());
		printf("My parent PID no is %d \n", getppid());

		printf("The child's PId is %d \n", f);
	}
	printf("This is common \n");
}
