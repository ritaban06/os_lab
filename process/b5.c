// WAP to show that the parent & child created using child can give same output

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main(){
	int f;
	f = fork();
	printf("The fork returns %d \n", f);
	if (f == 0)
		printf("I am the child who is running now \n");
	else
		printf("I am the parent who is running now \n");
}
