#include <unistd.h>
#include <stdio.h>

int main(){
	int ctr,cpid,id;
	cpid = fork();
	if (cpid == 0){
		printf("I'm child and ID: %d\n",getpid());
	}
	else{
		id = getpid();
		printf("\n I'm parent and ID : %d for child and my id is : %d\n",id,cpid);
	}
	printf("End\n");
}
