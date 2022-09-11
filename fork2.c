#include<stdio.h>
#include<unistd.h>

int main(){
	int p=fork();
	if(p==0){
		printf("You're inside child class with process ID: %d\n",getpid());
		//Parent class only provides a process id for the child class as child class doesnt have a PID initially
	}
	else if(p>0){
		printf("You're inside parent class with process ID: %d\n",getpid());
	}
	return 0;
}
