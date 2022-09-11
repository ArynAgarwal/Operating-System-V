#include<stdio.h>
#include <unistd.h>

int main(){
	if(fork() && fork()){
		fork();
	}
	printf("Hello.\n");
	//Hello is printed 4 times therefore the formula for sys calls is 2^n where n are the no. of fork encountered
	//4 are the total calls where 3 are child calls and 1 is parent call
	return 0;
}
