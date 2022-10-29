#include<stdio.h>
int main(){
    int n;
    printf("enter the number of processes\n");
    scanf("%d",&n);
    int at[n],bt[n],pt[n],wt[n],tat[n],temp[n];
    int i,gin,gpt,count=0,time;
    printf("enter the arrival and burst times\n");
    for(i=0;i<n;i++){
        printf("entering details of %d process\n",i+1);
        printf("arrival time:\n");
        scanf("%d",&at[i]);
        printf("burst time:\n");
        scanf("%d",&bt[i]);
        temp[i]=bt[i];
        printf("priority:\n");
        scanf("%d",&pt[i]);
        wt[i]=0;
        tat[i]=0;
    }
    gpt=-5;
    gin=0;

    for(time=0;count!=n;time++){
        for(i=0;i<n;i++){
            if(at[i]<=time && bt[i]>0&&pt[i]>=gpt){
                if(pt[i]==gpt&&at[i]>at[gpt]){

                }
                else{
                    gin=i;
                    gpt=pt[i];
                }
            }
        }
        bt[gin]--;
        for(int k=0;k<n;k++){
            if(at[k]<=time&&k!=gin&&bt[k]>0){
                wt[k]++;
            }
        }
        if(bt[gin]==0){
            count++;
            tat[gin]=time+1-at[gin];
            gpt=-5;
        }
        printf("time:%d, process:%d \n",time,gin+1);
    }
    float totalwt=0;
    float totaltat=0;

    for(int q=0;q<n;q++){
        totalwt=totalwt+wt[q];
    }

    for(int r=0;r<n;r++){
        totaltat=totaltat+tat[r];
    }

    printf("Avg waiting time: %f \n",totalwt/n);

    printf("Avg turnaround time: %f \n",totaltat/n);

    return 0;
}
