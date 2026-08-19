// WAP to create a child where parent & child are performing different jobs

# include <stdio.h>
# include<stdlib.h>
# include <unistd.h>

int main(){
	int f, x;
	printf("The process is %d \n", getpid());
	f = fork();

	if (f < 0){
		printf("Fork failed \n");
		exit(1); // Program ended with an error
	}
	else if (f == 0){
		printf("I the child of this process & my PID no is %d \n", getpid());
		x = getpid();
		--x;
		printf("Child process x value %d \n", x);
	}
	else{
		printf("I am the parent of the process & my PID no is %d \n", getpid());
		x = getpid();
		++x;
		printf("Parent process x value %d \n", x);
	}
}
