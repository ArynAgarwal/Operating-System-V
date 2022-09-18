#include<stdio.h>
#include<unistd.h>

int main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the elements of the array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int p = fork();
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			if(p==0){
				printf("You're inside child class and the even elements of the array are: %d\n",arr[i]);
			}
		}
		else{
			if(p>0){
				printf("You're inside parent class and the odd elements of the array are: %d\n",arr[i]);
			}
		}
	}
	return 0;
}
