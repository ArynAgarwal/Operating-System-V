#include<stdio.h>
#include <unistd.h>

int main(){
	if(fork() || fork()){
		fork();
	}
	printf("Hello.\n");
	//Hello is printed 5 times therefore the formula for sys calls is 2^n where n are the no. of fork encountered
	//5 are the total calls where 4 are child calls and 1 is parent call
	return 0;
}
