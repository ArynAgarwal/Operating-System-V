#include<stdio.h>
#include<unistd.h>
int main(){
	fork();	//function that makes a replica of the program that can be called as child class
			//while the original is called parent class

			//as soon as a fork is encountered a replica child class is made

			//child class and parent class execute simultaneously
	printf("Hello.\n");//Hello will be printed 2 times one by child and one by parent
	return 1;
}
