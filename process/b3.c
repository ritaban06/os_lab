// WAP to show that fork can be used to create a parent & child 

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main(){
	printf("Before fork \n");
	fork();
	printf("After fork \n");
	return 0;
}
