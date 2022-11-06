#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    int at[n], bt[n], ct[n], tat[n], wt[n], p[n];

    for(int i=0; i<n; i++){
        p[i] = i+1;
    }

    printf("Enter Arrival Time\n");
    for(int i=0; i<n; i++){
        scanf("%d", &at[i]);
    }
    printf("Enter Burst Time\n");
    for(int i=0; i<n; i++){
        scanf("%d", &bt[i]);
    }
    //int at[5] = {3,5,0,5,4}, bt[5] = {4,3,2,1,3}, ct[5], tat[5], wt[5];

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(at[j+1] < at[j]){
                int temp = at[j];
                at[j] = at[j+1];
                at[j+1] = temp;

                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;

                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    
    int temp = bt[0], i = 1;
    ct[0] = temp;
    while(i <= n-1){
        if(at[i] <= temp){
            temp += bt[i];
            ct[i] = temp;
            i++;
        } else{
            temp++; 
        }
    }

    for(int i=0; i<n; i++){
        tat[i] = ct[i] - at[i];
    }

    for(int i=0; i<n; i++){
        wt[i] = tat[i] - bt[i];
    }

    printf("Pid AT BT CT TAT WT\n");
    for(int i=0; i<n; i++){
        printf("%d   %d  %d  %d  %d   %d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    return 0;
}
