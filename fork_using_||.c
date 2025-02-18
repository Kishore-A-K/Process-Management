#include <stdio.h>
#include <unistd.h>

int main(){
	printf("%d parent id\n",getpid());
	
	if (fork()||fork()){
		printf("%d is the id of current process and %d is the parent process\n",getpid(),getppid());
	}
	
}
