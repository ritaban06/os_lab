// WAP to show fork always returns 2 values

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main(){
	int f;
	f = fork();
	printf("The fork returns mf %d \n", f);
}
